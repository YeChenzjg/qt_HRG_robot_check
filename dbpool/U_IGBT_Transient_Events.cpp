#include "U_IGBT_Transient_Events.h"

U_IGBT_Transient_Events::U_IGBT_Transient_Events(QObject *parent) :
    QObject(parent)
{
    this->m_id = -99999;
    this->m_timestamp = "EMPTY";
    this->m_times = -99999;
    this->m_attr1 = "EMPTY";
    this->m_attr2 = "EMPTY";
    this->m_attr3 = "EMPTY";
    this->m_attr4 = "EMPTY";
    this->m_attr5 = "EMPTY";
}
