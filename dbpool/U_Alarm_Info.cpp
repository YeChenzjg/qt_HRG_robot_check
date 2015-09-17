#include "U_Alarm_Info.h"

U_Alarm_Info::U_Alarm_Info(QObject *parent) :
    QObject(parent)
{
    data.id = -99999;
    data.timestamp = "EMPTY";
    data.level = -99999;
    data.type = "EMPTY";
    data.alarmfrom = "EMPTY";
    data.ishandle = -99999;
    data.name = "EMPTY";
    data.remark = "EMPTY";
    data.attr1 = "EMPTY";
    data.attr2="EMPTY";
    data.attr3="EMPTY";
    data.attr4="EMPTY";
    data.attr5="EMPTY";
}

U_Alarm_Info::U_Alarm_Info(ALARM_INFO_DATA t_data, QObject *parent) :
    QObject(parent)
{
    data = t_data;
}
