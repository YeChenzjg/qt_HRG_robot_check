#include "transaction.h"
#include <QJsonObject>
#include <QJsonDocument>
#include <QtMath>
CTransaction::CTransaction(QObject *parent):
    QObject(parent)
{
    offlineTimer = new QTimer();
    controlResultTimer = new QTimer();
    connect(offlineTimer, SIGNAL(timeout()), this, SLOT(deleteOffRob()));
    connect(controlResultTimer,SIGNAL(timeout()), this,SLOT(reSendControl())) ;
    offlineTimer->start(OFFLINE_TIME);
    changing = false;
    resendCount = 0;
}

CTransaction::~CTransaction()
{
    if(offlineTimer != NULL){
        delete offlineTimer;
        offlineTimer = NULL;
    }
    if(controlResultTimer != NULL){
        delete controlResultTimer;
        controlResultTimer = NULL;
    }
    statusDataBuf.clear();
}


QVariant CTransaction::toJsonVariant(QVariantMap data)
{
    if(data.isEmpty())
        return "";
    QJsonDocument jsonDocument = QJsonDocument::fromVariant(data);
    QByteArray byte_array = jsonDocument.toJson(QJsonDocument::Compact);
    QVariant json_var(byte_array);
    return json_var;
}

QVariant CTransaction::toJsonVariant(QVariantList data)
{
    if(data.isEmpty())
        return "";
    QJsonDocument jsonDocument = QJsonDocument::fromVariant(data);
    QByteArray byte_array = jsonDocument.toJson(QJsonDocument::Compact);
    QVariant json_var(byte_array);
    return json_var;
}

QVariantMap CTransaction::toVariantMap(QObject *t_data)
{
    //将QObject对象数据转换为QVariantMap
    if(t_data == NULL)
        return QVariantMap();
    QVariantMap mapData;
    const QMetaObject *metaObj = t_data->metaObject();
    for(int i = 0; i < metaObj->propertyCount(); i++)
    {
        QMetaProperty objProperty = metaObj->property(i);
        mapData.insert(objProperty.name(), t_data->property(objProperty.name()));
    }
    return mapData;
}

QVariantMap CTransaction::toVariantMap(QMap<QString, QString> t_data)
{
    if(t_data.isEmpty())
        return QVariantMap();
    QVariantMap dataMap;
    QMap<QString, QString>::const_iterator i = t_data.constBegin();
    while (i != t_data.constEnd()) {
        dataMap.insert(i.key(), i.value());
        ++i;
    }

    return dataMap;
}

void CTransaction::proRobotDevice(ROBOT_DATA t_data, QByteArray s_data)
{
    if(changing)
        return;
    int change = 0, i = 0;
    for(i = 0; i < statusDataBuf.count();i++)
    {
        if(t_data.hrg_num == statusDataBuf[i].hrg_num)
        {
            t_data = checkMeaningful(statusDataBuf[i], t_data, change);
            if(change)
            {
                statusDataBuf.removeAt(i);
                i = 0;
            }
            break;
        }
    }
    if(change == 1 ||
            statusDataBuf.count() == i)
    {
        robotStatusData * deviceData= new robotStatusData(t_data);
        QVariantMap deviceMap = toVariantMap(deviceData);
        QVariant deviceJson = toJsonVariant(deviceMap);
        emit uploadRobotDevice(deviceJson);
        deviceMap.clear();
        deviceJson.clear();
        statusDataBuf.append(t_data);
        if(deviceData != NULL)
        {
            delete deviceData;
            deviceData = NULL;
        }
    }
}
ROBOT_DATA CTransaction::checkMeaningful(ROBOT_DATA old_data, ROBOT_DATA new_data, int &change)
{
    change = 0;
    ROBOT_DATA tmp_data = new_data;
    if((qAbs(new_data.CPU_idle- old_data.CPU_idle)) < CPU_D_Value)
    {
        tmp_data.CPU_idle = old_data.CPU_idle;
        change = 1;
    }
    if(qAbs(new_data.x - old_data.x) < X_D_Value)
    {
        tmp_data.x = old_data.x;
        change = 1;
    }
    if(qAbs(new_data.y - old_data.y) < Y_D_Value)
    {
        tmp_data.y = old_data.y;
        change = 1;
    }
    if(qAbs(new_data.round - old_data.round) < R_D_Value)
    {
        tmp_data.round = old_data.round;
        change = 1;
    }
    if(qAbs((int)(new_data.forward_speed - old_data.forward_speed)) < FS_D_Value)
    {
        tmp_data.forward_speed = old_data.forward_speed;
        change = 1;
    }
    if(qAbs((int)(new_data.turn_speed - old_data.turn_speed)) < TS_D_Value)
    {
        tmp_data.turn_speed = old_data.turn_speed;
        change = 1;
    }
    if(new_data.ms_position != old_data.ms_position)
    {
        tmp_data.ms_position = new_data.ms_position;
        change = 1;
    }
    if(qAbs((int)(new_data.power - old_data.power)) < old_data.power*BT_D_Value)
    {
        tmp_data.power = old_data.power;
        change = 1;
    }
    if(new_data.error_id == old_data.error_id)
    {
        tmp_data.error_id = old_data.error_id;
        change = 1;
    }
    return tmp_data;
}

QVariantList CTransaction::getStatusData()
{
    QVariantList tmpList;
    for(int i = 0; i < statusDataBuf.count(); i++)
    {
        robotStatusData *deviceData = new robotStatusData(statusDataBuf[i]);
        QVariantMap deviceMap = toVariantMap(deviceData);
        QVariant deviceJson = toJsonVariant(deviceMap);
        tmpList.append(deviceJson);
        if(deviceData != NULL)
            delete deviceData;
        deviceData = NULL;
    }

    return tmpList;
}

void CTransaction::deleteOffRob()
{
    offlineTimer->stop();//计时器停止
    changing = true;//停止接收数据
    for(int i =0; i< offLineDataBuf.count(); i++)
    {
        for(int j = 0; j < statusDataBuf.count(); j++)
        {
           if((ROBOT_DATA)offLineDataBuf.at(i) == (ROBOT_DATA)statusDataBuf.at(j))
           {
               emit offLine(statusDataBuf.at(j).hrg_num);//发送断线信号到界面
               statusDataBuf.removeAt(j);//删除断线的设备
               break;
           }
        }
    }
    offLineDataBuf = statusDataBuf;
    offlineTimer->start(OFFLINE_TIME);
    changing = false;

}

void CTransaction::connectToServer(QString IP, int port)
{
    emit connectTo(IP, port);
}

void CTransaction::disConnectFromServer()
{
    emit disConnect();
}

void CTransaction::exitSys()
{
    exit(0);
}

void CTransaction::sendManualControlDataFromQML(int num, char move, char tracking, char turn, int mp3_num)
{
    CONTROL_DATA sct_data;
    sct_data.type = MANUAL;
    sct_data.manual_data.num = num;
    sct_data.manual_data.move_spped = move;
    sct_data.manual_data.is_tracking = tracking;
    sct_data.manual_data.turn_speed = turn;
    sct_data.manual_data.mp3_num = mp3_num;

    currentControl = sct_data;

    emit sendControlData(sct_data);
    controlResultTimer->start(CONTROLRESENDRATE);
}

void CTransaction::reSendControl()
{
    if(resendCount >= 30)
    {
        resendCount = 0;
        controlResultTimer->stop();
        emit respondControl();
        return;
    }
    CONTROL_DATA sct_data;
    sct_data.type = MANUAL;
    sct_data.manual_data.num = currentControl.manual_data.num;
    sct_data.manual_data.move_spped = currentControl.manual_data.move_spped;
    sct_data.manual_data.is_tracking = currentControl.manual_data.is_tracking;
    sct_data.manual_data.turn_speed = currentControl.manual_data.turn_speed;
    sct_data.manual_data.mp3_num = currentControl.manual_data.mp3_num;
    emit sendControlData(sct_data);
    resendCount++;

}

QVariantList CTransaction::structToJson()
{
    if(changing)
        return QVariantList();
    //changing = true;
    QList<ROBOT_DATA> tmpData = statusDataBuf;
    QVariantList list;
    for(int i = 0; i < tmpData.count(); i++){
        qDebug()<<"get data";
        robotStatusData * deviceData= new robotStatusData(tmpData.at(i));
        QVariantMap deviceMap = toVariantMap(deviceData);
        QVariant deviceJson = toJsonVariant(deviceMap);
        list.append(deviceJson);
        if(deviceData != NULL)
            delete deviceData;
        deviceData = NULL;
        qDebug()<<"get done";
    }
    tmpData.clear();
    //changing = false;
    return list;
}

bool CTransaction::socketOffLine()
{
    return m_offLine;
}

void CTransaction::serverConnectedSlot()
{
    m_offLine = false;
    emit serverConnected();
}
void CTransaction::serverDisConnectedSlot()
{
    m_offLine = true;
    emit serverDisConnected();
}
