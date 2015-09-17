#ifndef U_EVENT_INFO_H
#define U_EVENT_INFO_H

#include <QObject>
#include "appLayer/structData.h"
class U_Event_Info : public QObject
{
    Q_OBJECT
    Q_PROPERTY(int id READ id WRITE setId)
    Q_PROPERTY(QString mtimestamp READ timestamp WRITE setTimestamp)
    Q_PROPERTY(QString type READ type WRITE setType)
    Q_PROPERTY(QString eventfrom READ eventfrom WRITE setEventfrom)
    Q_PROPERTY(int level READ level WRITE setLevel)
    Q_PROPERTY(QString description READ description WRITE setDescription)
    Q_PROPERTY(QString attr1 READ attr1 WRITE setAttr1)
    Q_PROPERTY(QString attr2 READ attr2 WRITE setAttr2)
    Q_PROPERTY(QString attr3 READ attr3 WRITE setAttr3)
    Q_PROPERTY(QString attr4 READ attr4 WRITE setAttr4)
    Q_PROPERTY(QString attr5 READ attr5 WRITE setAttr5)

public:
    explicit U_Event_Info(QObject *parent = 0);
    U_Event_Info(EVENT_INFO_DATA, QObject *parent = 0);
public:
    Q_INVOKABLE int id(){return data.id;}
    Q_INVOKABLE QString timestamp(){return data.timestamp;}
    Q_INVOKABLE QString type(){return data.type;}
    Q_INVOKABLE QString eventfrom(){return data.eventfrom;}
    Q_INVOKABLE int level(){return data.level;}
    Q_INVOKABLE QString description(){return data.description;}
    Q_INVOKABLE QString attr1(){return m_attr1;}
    Q_INVOKABLE QString attr2(){return m_attr2;}
    Q_INVOKABLE QString attr3(){return m_attr3;}
    Q_INVOKABLE QString attr4(){return m_attr4;}
    Q_INVOKABLE QString attr5(){return m_attr5;}


    Q_INVOKABLE void setId(int id){data.id = id;}
    Q_INVOKABLE void setTimestamp(QString timestamp){data.timestamp = timestamp;}
    Q_INVOKABLE void setType(QString type){data.type = type;}
    Q_INVOKABLE void setEventfrom(QString eventfrom){data.eventfrom = eventfrom;}
    Q_INVOKABLE void setLevel(int level){data.level = level;}
    Q_INVOKABLE void setDescription(QString describe){data.description = describe;}
    Q_INVOKABLE void setAttr1(QString attr1){m_attr1 = attr1;}
    Q_INVOKABLE void setAttr2(QString attr2){m_attr2 = attr2;}
    Q_INVOKABLE void setAttr3(QString attr3){m_attr3 = attr3;}
    Q_INVOKABLE void setAttr4(QString attr4){m_attr4 = attr4;}
    Q_INVOKABLE void setAttr5(QString attr5){m_attr5 = attr5;}

    void setData(EVENT_INFO_DATA t_data){data = t_data;}
    EVENT_INFO_DATA getData(){return data;}
private:
    /*int m_id;
    QString m_timestamp;
    QString m_type;
    QString m_eventfrom;
    int m_level;
    QString m_describe;
    */
    EVENT_INFO_DATA data;
    QString m_attr1;
    QString m_attr2;
    QString m_attr3;
    QString m_attr4;
    QString m_attr5;


};

#endif // U_EVENT_INFO_H
