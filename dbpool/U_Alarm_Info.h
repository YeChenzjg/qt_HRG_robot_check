#ifndef U_ALARM_INFO_H
#define U_ALARM_INFO_H

#include <QObject>
#include "appLayer/structData.h"
class U_Alarm_Info : public QObject
{
    Q_OBJECT
    Q_PROPERTY(int id READ id WRITE setId)
    Q_PROPERTY(int eid READ eid WRITE setEid )
    Q_PROPERTY(QString mtimestamp READ timestamp WRITE setTimestamp)
    Q_PROPERTY(int level READ level WRITE setLevel)
    Q_PROPERTY(QString type READ type WRITE setType)
    Q_PROPERTY(QString alarmfrom READ alarmfrom WRITE setAlarmfrom)
    Q_PROPERTY(int ishandle READ ishandle WRITE setIshandle)
    Q_PROPERTY(QString name READ name WRITE setName)
    Q_PROPERTY(QString remark READ remark WRITE setRemark)
    Q_PROPERTY(QString attr1 READ attr1 WRITE setAttr1)
    Q_PROPERTY(QString attr2 READ attr2 WRITE setAttr2)
    Q_PROPERTY(QString attr3 READ attr3 WRITE setAttr3)
    Q_PROPERTY(QString attr4 READ attr4 WRITE setAttr4)
    Q_PROPERTY(QString attr5 READ attr5 WRITE setAttr5)
public:
    explicit U_Alarm_Info(QObject *parent = 0);
    U_Alarm_Info(ALARM_INFO_DATA t_data, QObject *parent = 0);
signals:

public slots:
public:
    Q_INVOKABLE int id(){return data.id;}
    Q_INVOKABLE int eid(){return data.eid;}
    Q_INVOKABLE QString timestamp(){return data.timestamp;}
    Q_INVOKABLE int level(){return data.level;}
    Q_INVOKABLE QString type(){return data.type;}
    Q_INVOKABLE QString alarmfrom(){return data.alarmfrom;}
    Q_INVOKABLE int ishandle(){return data.ishandle;}
    Q_INVOKABLE QString name(){return data.name;}
    Q_INVOKABLE QString remark(){return data.remark;}
    Q_INVOKABLE QString attr1(){return data.attr1;}
    Q_INVOKABLE QString attr2(){return data.attr2;}
    Q_INVOKABLE QString attr3(){return data.attr3;}
    Q_INVOKABLE QString attr4(){return data.attr4;}
    Q_INVOKABLE QString attr5(){return data.attr5;}

    Q_INVOKABLE void setId(int id){data.id = id;}
    Q_INVOKABLE void setEid(int eid){data.eid = eid;}
    Q_INVOKABLE void setTimestamp(QString timestamp){data.timestamp = timestamp;}
    Q_INVOKABLE void setLevel(int level){data.level = level;}
    Q_INVOKABLE void setType(QString type){data.type = type;}
    Q_INVOKABLE void setAlarmfrom(QString alarmfrom){data.alarmfrom = alarmfrom;}
    Q_INVOKABLE void setIshandle(int ishandle){data.ishandle = ishandle;}
    Q_INVOKABLE void setName(QString name){data.name = name;}
    Q_INVOKABLE void setRemark(QString remark){data.remark = remark;}
    Q_INVOKABLE void setAttr1(QString attr1){data.attr1 = attr1;}
    Q_INVOKABLE void setAttr2(QString attr2){data.attr1 = attr2;}
    Q_INVOKABLE void setAttr3(QString attr3){data.attr1 = attr3;}
    Q_INVOKABLE void setAttr4(QString attr4){data.attr1 = attr4;}
    Q_INVOKABLE void setAttr5(QString attr5){data.attr1 = attr5;}
    void setData(ALARM_INFO_DATA t_data){ data = t_data;}
    ALARM_INFO_DATA getData(){return data;}
private:
    ALARM_INFO_DATA data;


};

#endif // U_ALARM_INFO_H
