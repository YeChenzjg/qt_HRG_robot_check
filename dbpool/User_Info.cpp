#include "User_Info.h"

User_Info::User_Info(QObject *parent) :
    QObject(parent)
{
    this->m_id =-99999;
    this->m_type = -99999;
    this->m_name = "EMPTY";
    this->m_password = "EMPTY";
    this->m_attr1 = "EMPTY";
    this->m_attr2 = "EMPTY";
    this->m_attr3 = "EMPTY";
    this->m_attr4 = "EMPTY";
    this->m_attr5 = "EMPTY";
}
