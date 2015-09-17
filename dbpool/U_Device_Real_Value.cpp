#include "U_Device_Real_Value.h"

U_Device_Real_Value::U_Device_Real_Value(QObject *parent) :
    QObject(parent)
{
    this->m_id = -99999;
    this->m_timestamp = "EMPTY";
    this->m_temp1 = -99999;
    this->m_temp2 = -99999;
    this->m_temp3 = -99999;
    this->m_temp4 = -99999;
    this->m_humi1 = -99999;
    this->m_humi2 = -99999;
    this->m_humi3 = -99999;
    this->m_humi4 = -99999;
    this->m_sysvol = -99999;
    this->m_sysele = -99999;
    this->m_loadvol = -99999;
    this->m_loadele = -99999;
    this->m_dcvol = -99999;
    this->m_aircool1 = -99999;
    this->m_aircool2 = -99999;
    this->m_aircool3 = -99999;
    this->m_aircool4 = -99999;
    this->m_attr1 = -99999;
    this->m_attr2 = -99999;
    this->m_attr3 = -99999;
    this->m_attr4 = -99999;
    this->m_attr5 = -99999;
    this->m_attr6 = -99999;
    this->m_attr7 = -99999;
    this->m_attr8 = -99999;
    this->m_attr9 = -99999;
    this->m_attr10 = -99999;
}
