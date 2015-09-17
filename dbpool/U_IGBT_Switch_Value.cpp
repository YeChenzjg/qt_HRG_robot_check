#include "U_IGBT_Switch_Value.h"

U_IGBT_Switch_Value::U_IGBT_Switch_Value(QObject *parent) :
    QObject(parent)
{
    this->m_id=-99999;
    QString m_timestamp="EMPTY";
    this->m_powerdevice1=-99999;
    this->m_powerdevice2=-99999;
    this->m_powerdevice3=-99999;
    this->m_powerdevice4=-99999;
    this->m_powerdevice5=-99999;
    this->m_powerdevice6=-99999;
    this->m_powerdevice7=-99999;
    this->m_powerdevice8=-99999;
    this->m_powerdevice9=-99999;
    this->m_powerdevice10=-99999;
    this->m_attr1=-99999;
    this->m_attr2=-99999;
    this->m_attr3=-99999;
    this->m_attr4=-99999;
    this->m_attr5=-99999;
}
