#include "robotclientsocket.h"

robotClientSocket::robotClientSocket(CTransaction *pTransaction, DVRSettings settings,QObject *parent):
    QObject(parent)
{
    qRegisterMetaType<ROBOT_DATA>("ROBOT_DATA");
    qRegisterMetaType<CONTROL_DATA>("CONTROL_DATA");
    QObject::connect(pTransaction, SIGNAL(connectTo(QString,int)), this, SLOT(connectTo(QString,int)));
    QObject::connect(pTransaction, SIGNAL(disConnect()), this, SLOT(disConnectFromServer()));
    QObject::connect(&m_tcpSocket, SIGNAL(connected()), pTransaction, SLOT(serverConnectedSlot()));
    QObject::connect(&m_tcpSocket,SIGNAL(connected()), this, SLOT(OnConnected()));
    QObject::connect(&m_tcpSocket, SIGNAL(readyRead()), this, SLOT(receiveData()));
    QObject::connect(&m_tcpSocket, SIGNAL(disconnected()), this, SLOT(OnDisConnected()));
    QObject::connect(&m_tcpSocket, SIGNAL(disconnected()), pTransaction, SLOT(serverDisConnectedSlot()));
    QObject::connect(this, SIGNAL(sendRobotData(ROBOT_DATA, QByteArray)), pTransaction, SLOT(proRobotDevice(ROBOT_DATA, QByteArray)));
    QObject::connect(&robotCheck, SIGNAL(robotData(ROBOT_DATA, QByteArray)), this, SLOT(robotData(ROBOT_DATA, QByteArray)));
    QObject::connect(pTransaction, SIGNAL(sendControlData(CONTROL_DATA)),this, SLOT(writeData(CONTROL_DATA)));
    this->settings = settings;
    m_bConnected = false;
    //connectTo(this->settings.IP, this->settings.server_port);
}

void robotClientSocket::receiveData()
{
    int FrameLength;
    //网络接收数据
    m_RecvBuf.append(m_tcpSocket.readAll());

    //判断数据是否满足约定的规约格式
    FrameLength = robotCheck.checkFrame(m_RecvBuf);

    m_RecvBuf = robotCheck.analyzeData(m_RecvBuf);
}
void robotClientSocket::robotData(ROBOT_DATA data, QByteArray s_data)
{
    emit sendRobotData(data, s_data);
}

void robotClientSocket::connectTo(QString IP, int port)
{
    int reconnect = 0;
    settings.IP = IP;
    settings.server_port = port;
    //m_tcpSocket.disconnectFromHost();
    while(!m_bConnected && reconnect < RECONNECTCOUNT)
    {
        m_tcpSocket.connectToHost(IP, port);
        m_tcpSocket.waitForConnected();
        reconnect++;
    }
    reconnect = 0;
}

void robotClientSocket::disConnectFromServer()
{
    m_tcpSocket.disconnectFromHost();
}

void robotClientSocket::OnConnected()
{
    m_bConnected = true;
}

void robotClientSocket::OnDisConnected()
{
    m_bConnected = false;
    //connectTo(settings.IP, settings.server_port);
}

void robotClientSocket::writeData(CONTROL_DATA data)
{
    QByteArray sendData;
    switch (data.type) {
    case MANUAL:
        sendData = robotControl.robotManualFrame(data.manual_data);
        break;
    case AUTO:
        sendData = robotControl.robotAutoFrame(data.auto_data);
        break;
    default:
        break;
    }
    if(m_bConnected && sendData.length() > 0)
    {
        m_tcpSocket.write(sendData);
        m_tcpSocket.waitForBytesWritten();
    }
}


