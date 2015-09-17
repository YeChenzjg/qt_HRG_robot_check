#include "U_Dvr_Switch_Value.h"

U_DVR_Switch_Value::U_DVR_Switch_Value(QObject *parent):
    QObject(parent)
{
}

U_DVR_Switch_Value::U_DVR_Switch_Value(DVR_DEVICE_DATA data, QObject *parent):
    QObject(parent)
{
    this->data = data;
}
