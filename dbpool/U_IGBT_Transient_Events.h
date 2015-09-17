#ifndef U_IGBT_TRANSIENT_EVENTS_H
#define U_IGBT_TRANSIENT_EVENTS_H

#include <QObject>

class U_IGBT_Transient_Events : public QObject
{
    Q_OBJECT
    Q_PROPERTY(int id READ id WRITE setId)
    Q_PROPERTY(QString mtimestamp READ timestamp WRITE setTimestamp)
    Q_PROPERTY(int times READ times WRITE setTimes)
    Q_PROPERTY(QString attr1 READ attr1 WRITE setAttr1)
    Q_PROPERTY(QString attr2 READ attr2 WRITE setAttr2)
    Q_PROPERTY(QString attr3 READ attr3 WRITE setAttr3)
    Q_PROPERTY(QString attr4 READ attr4 WRITE setAttr4)
    Q_PROPERTY(QString attr5 READ attr5 WRITE setAttr5)
public:
    explicit U_IGBT_Transient_Events(QObject *parent = 0);

signals:

public slots:
public:
    Q_INVOKABLE int id(){return m_id;}
    Q_INVOKABLE QString timestamp(){return m_timestamp;}
    Q_INVOKABLE int times(){return m_times;}
    Q_INVOKABLE QString attr1(){return m_attr1;}
    Q_INVOKABLE QString attr2(){return m_attr2;}
    Q_INVOKABLE QString attr3(){return m_attr3;}
    Q_INVOKABLE QString attr4(){return m_attr4;}
    Q_INVOKABLE QString attr5(){return m_attr5;}

    Q_INVOKABLE void setId(int id){m_id = id;}
    Q_INVOKABLE void setTimestamp(QString timestamp){m_timestamp = timestamp;}
    Q_INVOKABLE void setTimes(int times){m_times = times;}
    Q_INVOKABLE void setAttr1(QString attr1){m_attr1 = attr1;}
    Q_INVOKABLE void setAttr2(QString attr2){m_attr2 = attr2;}
    Q_INVOKABLE void setAttr3(QString attr3){m_attr3 = attr3;}
    Q_INVOKABLE void setAttr4(QString attr4){m_attr4 = attr4;}
    Q_INVOKABLE void setAttr5(QString attr5){m_attr4 = attr5;}

private:
    int m_id;
    QString m_timestamp;
    int m_times;
    QString m_attr1;
    QString m_attr2;
    QString m_attr3;
    QString m_attr4;
    QString m_attr5;

};

#endif // U_IGBT_TRANSIENT_EVENTS_H
