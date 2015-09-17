#include "U_Help_Info.h"

U_Help_Info::U_Help_Info(QObject *parent) :
    QObject(parent)
{
    this->m_id = -99999;
    this->m_type = "EMPTY";
    this->m_desc = "EMPTY";
    this->m_detail = "EMPTY";
    this->m_attr1 = "EMPTY";
    this->m_attr2 = "EMPTY";
    this->m_attr3 = "EMPTY";
    this->m_attr4 = "EMPTY";
    this->m_attr5 = "EMPTY";

}
