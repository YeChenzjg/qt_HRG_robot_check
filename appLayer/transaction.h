#ifndef APPLAYER_H
#define APPLAYER_H

#include <QObject>
#include <QByteArray>
#include <QVariant>
#include <QMetaProperty>
#include <QDebug>
#include <QTimer>
#include <Windows.h>
#include "robotstatusdata.h"

#define X_D_Value 10
#define Y_D_Value 10
#define R_D_Value 1000
#define CPU_D_Value 72000*0.2
#define FS_D_Value 100
#define TS_D_Value 100
#define MS_D_Value 100
#define BT_D_Value 0.1
#define OFFLINE_TIME 30000
#define CONTROLRESENDRATE 20
class CTransaction : public QObject
{
    Q_OBJECT
public:
    explicit CTransaction(QObject *parent = 0);
    ~CTransaction();
private:
    //初始化成员对象
    void initDBPool();

    //注销成员对象
    void destoryPool();
public:
    QVariant toJsonVariant(QVariantMap data);
    QVariant toJsonVariant(QVariantList data);
    QVariantMap toVariantMap(QObject *t_data);
    QVariantMap toVariantMap(QMap<QString, QString> t_data);
    Q_INVOKABLE QVariantList getStatusData();
    ROBOT_DATA checkMeaningful(ROBOT_DATA old_data, ROBOT_DATA new_data, int &change);
    Q_INVOKABLE void connectToServer(QString,int);
    Q_INVOKABLE void disConnectFromServer();
    Q_INVOKABLE void exitSys();
    Q_INVOKABLE void sendManualControlDataFromQML(int num, char move, char tracking, char turn, int mp3_num);
    Q_INVOKABLE QVariantList structToJson();
    Q_INVOKABLE bool socketOffLine();
signals:
    //robot signals
    void uploadRobotDevice(QVariant t_device);
    void serverConnected();
    void serverDisConnected();
    void offLine(int num);
    void connectTo(QString IP, int port);
    void disConnect();
    void sendControlData(CONTROL_DATA data);
    void respondControl();
public slots:
    void proRobotDevice(ROBOT_DATA t_data, QByteArray);
    void deleteOffRob();
    void reSendControl();
    void serverConnectedSlot();
    void serverDisConnectedSlot();
private:
    QList<ROBOT_DATA> statusDataBuf;
    QList<ROBOT_DATA> offLineDataBuf;
    QTimer *offlineTimer;
    bool changing;
    QTimer *controlResultTimer;
    int resendCount;
    CONTROL_DATA currentControl;
    bool m_offLine;
};

#endif // APPLAYER_H
