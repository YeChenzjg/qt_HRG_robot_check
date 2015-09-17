#include "robotstatusdata.h"

robotStatusData::robotStatusData(QObject *parent) :
    QObject(parent)
{
}

robotStatusData::robotStatusData(ROBOT_DATA data, QObject *parent):
    QObject(parent)
{
    this->data = data;
}
