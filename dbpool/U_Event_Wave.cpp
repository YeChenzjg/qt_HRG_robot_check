#include "U_Event_Wave.h"

U_Event_Wave::U_Event_Wave(QObject *parent) :
    QObject(parent)
{
}

U_Event_Wave::U_Event_Wave(EVENT_WAVE_DATA data, QObject *parent) :
    QObject(parent)
{
    this->data = data;
}
