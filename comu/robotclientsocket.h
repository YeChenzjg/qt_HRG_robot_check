#ifndef ROBOTCLIENTSOCKET_H
#define ROBOTCLIENTSOCKET_H
#include <QTcpSocket>
#include <QTimer>
#include <Windows.h>
#include "robotcheckframe.h"
#include "robotcontrolframe.h"
#include "transaction.h"
#include "../setting.h"
#include <QObject>
#define ROBOTDATALEN     1000*34
#define RECVTIMEOUT  3
#define TIMEOUT     5
#define RECONNECTCOUNT  10
#define MAXBUFFSIZE   1024*10
#define SENDCOUNT 30
class robotClientSocket : QObject
{
    Q_OBJECT
public:
    robotClientSocket(CTransaction* pTransaction,DVRSettings settings,QObject *parent = NULL);

public slots:
    void receiveData();
    void robotData(ROBOT_DATA data, QByteArray);
    void OnConnected();
    void OnDisConnected();
    void connectTo(QString, int);
    void disConnectFromServer();
    void writeData(CONTROL_DATA data);
signals:
    void sendRobotData(ROBOT_DATA t_data, QByteArray);
private:
    bool            m_bConnected;
    robotCheckFrame robotCheck;
    robotControlFrame robotControl;
    QTcpSocket m_tcpSocket;
    QByteArray m_RecvBuf;
    DVRSettings settings;
};

#endif // ROBOTCLIENTSOCKET_H
