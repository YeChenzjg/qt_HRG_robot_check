#include "U_Event_Info.h"

U_Event_Info::U_Event_Info(QObject *parent) :
    QObject(parent)
{
    /*this->m_id = -99999;
    this->m_level = -99999;
    this->m_describe = "EMPTY";
    this->m_timestamp = "EMPTY";
    this->m_type = "EMPTY";
    this->m_eventfrom = "EMPTY";
    */
    this->m_attr1 = "EMPTY";
    this->m_attr2 = "EMPTY";
    this->m_attr3 = "EMPTY";
    this->m_attr4 = "EMPTY";
    this->m_attr5 = "EMPTY";

}

U_Event_Info::U_Event_Info(EVENT_INFO_DATA t_data, QObject *parent) :
    QObject(parent)
{
    data = t_data;
    this->m_attr1 = "EMPTY";
    this->m_attr2 = "EMPTY";
    this->m_attr3 = "EMPTY";
    this->m_attr4 = "EMPTY";
    this->m_attr5 = "EMPTY";
}
