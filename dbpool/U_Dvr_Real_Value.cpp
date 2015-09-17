#include "U_Dvr_Real_Value.h"

U_DVR_Real_Value::U_DVR_Real_Value(QObject *parent):
    QObject(parent)
{
}

U_DVR_Real_Value::U_DVR_Real_Value(DVR_DEVICE_DATA t, QObject *parent):
    QObject(parent)
{
    data = t;
}
