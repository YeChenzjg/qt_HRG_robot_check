#include "U_IGBT_Real_Value.h"

U_IGBT_Real_Value::U_IGBT_Real_Value(QObject *parent) :
    QObject(parent)
{
    this->m_id = -99999;
    this->m_timestamp = "EMPTY";
}
