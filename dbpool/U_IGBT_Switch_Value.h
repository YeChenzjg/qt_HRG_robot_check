#ifndef U_IGBT_SWITCH_VALUE_H
#define U_IGBT_SWITCH_VALUE_H

#include <QObject>

class U_IGBT_Switch_Value : public QObject
{
    Q_OBJECT
    Q_PROPERTY(int id READ id WRITE setId)
    Q_PROPERTY(int igbtid READ igbtid WRITE setIgbtid)
    Q_PROPERTY(QString mtimestamp READ timestamp WRITE setTimestamp)
    Q_PROPERTY(int powerdevice1 READ powerdevice1 WRITE setPowerdevice1)
    Q_PROPERTY(int powerdevice2 READ powerdevice2 WRITE setPowerdevice2)
    Q_PROPERTY(int powerdevice3 READ powerdevice3 WRITE setPowerdevice3)
    Q_PROPERTY(int powerdevice4 READ powerdevice4 WRITE setPowerdevice4)
    Q_PROPERTY(int powerdevice5 READ powerdevice5 WRITE setPowerdevice5)
    Q_PROPERTY(int powerdevice6 READ powerdevice6 WRITE setPowerdevice6)
    Q_PROPERTY(int powerdevice7 READ powerdevice7 WRITE setPowerdevice7)
    Q_PROPERTY(int powerdevice8 READ powerdevice8 WRITE setPowerdevice8)
    Q_PROPERTY(int powerdevice9 READ powerdevice9 WRITE setPowerdevice9)
    Q_PROPERTY(int powerdevice10 READ powerdevice10 WRITE setPowerdevice10)
    Q_PROPERTY(int attr1 READ attr1 WRITE setAttr1)
    Q_PROPERTY(int attr2 READ attr2 WRITE setAttr2)
    Q_PROPERTY(int attr3 READ attr3 WRITE setAttr3)
    Q_PROPERTY(int attr4 READ attr4 WRITE setAttr4)
    Q_PROPERTY(int attr5 READ attr5 WRITE setAttr5)

public:
    explicit U_IGBT_Switch_Value(QObject *parent = 0);

signals:

public slots:
public:
    Q_INVOKABLE int id(){return m_id;}
    Q_INVOKABLE int igbtid(){return m_igbtid;}
    Q_INVOKABLE QString timestamp(){return m_timestamp;}
    Q_INVOKABLE int powerdevice1(){return m_powerdevice1;}
    Q_INVOKABLE int powerdevice2(){return m_powerdevice2;}
    Q_INVOKABLE int powerdevice3(){return m_powerdevice3;}
    Q_INVOKABLE int powerdevice4(){return m_powerdevice4;}
    Q_INVOKABLE int powerdevice5(){return m_powerdevice5;}
    Q_INVOKABLE int powerdevice6(){return m_powerdevice6;}
    Q_INVOKABLE int powerdevice7(){return m_powerdevice7;}
    Q_INVOKABLE int powerdevice8(){return m_powerdevice8;}
    Q_INVOKABLE int powerdevice9(){return m_powerdevice9;}
    Q_INVOKABLE int powerdevice10(){return m_powerdevice10;}
    Q_INVOKABLE int attr1(){return m_attr1;}
    Q_INVOKABLE int attr2(){return m_attr2;}
    Q_INVOKABLE int attr3(){return m_attr3;}
    Q_INVOKABLE int attr4(){return m_attr4;}
    Q_INVOKABLE int attr5(){return m_attr5;}

    Q_INVOKABLE void setId(int id){m_id = id;}
    Q_INVOKABLE void setIgbtid(int igbtid){m_igbtid = igbtid;}
    Q_INVOKABLE void setTimestamp(QString timestamp){m_timestamp = timestamp;}
    Q_INVOKABLE void setPowerdevice1(int powerdevice1){m_powerdevice1 = powerdevice1;}
    Q_INVOKABLE void setPowerdevice2(int powerdevice2){m_powerdevice2 = powerdevice2;}
    Q_INVOKABLE void setPowerdevice3(int powerdevice3){m_powerdevice3 = powerdevice3;}
    Q_INVOKABLE void setPowerdevice4(int powerdevice4){m_powerdevice4 = powerdevice4;}
    Q_INVOKABLE void setPowerdevice5(int powerdevice5){m_powerdevice5 = powerdevice5;}
    Q_INVOKABLE void setPowerdevice6(int powerdevice6){m_powerdevice6 = powerdevice6;}
    Q_INVOKABLE void setPowerdevice7(int powerdevice7){m_powerdevice7 = powerdevice7;}
    Q_INVOKABLE void setPowerdevice8(int powerdevice8){m_powerdevice8 = powerdevice8;}
    Q_INVOKABLE void setPowerdevice9(int powerdevice9){m_powerdevice9 = powerdevice9;}
    Q_INVOKABLE void setPowerdevice10(int powerdevice10){m_powerdevice10 = powerdevice10;}
    Q_INVOKABLE void setAttr1(int attr1){m_attr1 = attr1;}
    Q_INVOKABLE void setAttr2(int attr2){m_attr2 = attr2;}
    Q_INVOKABLE void setAttr3(int attr3){m_attr3 = attr3;}
    Q_INVOKABLE void setAttr4(int attr4){m_attr4 = attr4;}
    Q_INVOKABLE void setAttr5(int attr5){m_attr4 = attr5;}

private:
    int m_id;
    int m_igbtid;
    QString m_timestamp;
    int m_powerdevice1;
    int m_powerdevice2;
    int m_powerdevice3;
    int m_powerdevice4;
    int m_powerdevice5;
    int m_powerdevice6;
    int m_powerdevice7;
    int m_powerdevice8;
    int m_powerdevice9;
    int m_powerdevice10;
    int m_attr1;
    int m_attr2;
    int m_attr3;
    int m_attr4;
    int m_attr5;
};

#endif // U_IGBT_SWITCH_VALUE_H
