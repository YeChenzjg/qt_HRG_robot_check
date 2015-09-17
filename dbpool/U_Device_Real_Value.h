#ifndef U_DEVICE_REAL_VALUE_H
#define U_DEVICE_REAL_VALUE_H

#include <QObject>

class U_Device_Real_Value : public QObject
{
    Q_OBJECT
    Q_PROPERTY(int id READ id WRITE setId)
    Q_PROPERTY(QString mtimestamp READ timestamp WRITE setTimestamp)
    Q_PROPERTY(double temp1 READ temp1 WRITE setTemp1)
    Q_PROPERTY(double temp2 READ temp2 WRITE setTemp2)
    Q_PROPERTY(double temp3 READ temp3 WRITE setTemp3)
    Q_PROPERTY(double temp4 READ temp4 WRITE setTemp4)
    Q_PROPERTY(double humi1 READ humi1 WRITE setHumi1)
    Q_PROPERTY(double humi2 READ humi2 WRITE setHumi2)
    Q_PROPERTY(double humi3 READ humi3 WRITE setHumi3)
    Q_PROPERTY(double humi4 READ humi4 WRITE setHumi4)
    Q_PROPERTY(double sysvol READ sysvol WRITE setSysvol)
    Q_PROPERTY(double sysele READ sysele WRITE setSysele)
    Q_PROPERTY(double loadvol READ loadvol WRITE setLoadvol)
    Q_PROPERTY(double loadele READ loadele WRITE setLoadele)
    Q_PROPERTY(double dcvol READ dcvol WRITE setDcvol)
    Q_PROPERTY(double aircool1 READ aircool1 WRITE setAircool1)
    Q_PROPERTY(double aircool2 READ aircool2 WRITE setAircool2)
    Q_PROPERTY(double aircool3 READ aircool3 WRITE setAircool3)
    Q_PROPERTY(double aircool4 READ aircool4 WRITE setAircool4)
    Q_PROPERTY(double attr1 READ attr1 WRITE setAttr1)
    Q_PROPERTY(double attr2 READ attr2 WRITE setAttr2)
    Q_PROPERTY(double attr3 READ attr3 WRITE setAttr3)
    Q_PROPERTY(double attr4 READ attr4 WRITE setAttr4)
    Q_PROPERTY(double attr5 READ attr5 WRITE setAttr5)
    Q_PROPERTY(double attr6 READ attr6 WRITE setAttr6)
    Q_PROPERTY(double attr7 READ attr7 WRITE setAttr7)
    Q_PROPERTY(double attr8 READ attr8 WRITE setAttr8)
    Q_PROPERTY(double attr9 READ attr9 WRITE setAttr9)
    Q_PROPERTY(double attr10 READ attr10 WRITE setAttr10)

public:
    explicit U_Device_Real_Value(QObject *parent = 0);

signals:

public slots:
public:
    Q_INVOKABLE int id(){return m_id;}
    Q_INVOKABLE QString timestamp(){return m_timestamp;}
    Q_INVOKABLE double temp1(){return m_temp1;}
    Q_INVOKABLE double temp2(){return m_temp2;}
    Q_INVOKABLE double temp3(){return m_temp3;}
    Q_INVOKABLE double temp4(){return m_temp4;}
    Q_INVOKABLE double humi1(){return m_humi1;}
    Q_INVOKABLE double humi2(){return m_humi2;}
    Q_INVOKABLE double humi3(){return m_humi3;}
    Q_INVOKABLE double humi4(){return m_humi4;}
    Q_INVOKABLE double sysvol(){return m_sysvol;}
    Q_INVOKABLE double sysele(){return m_sysele;}
    Q_INVOKABLE double loadvol(){return m_loadvol;}
    Q_INVOKABLE double loadele(){return m_loadele;}
    Q_INVOKABLE double dcvol(){return m_dcvol;}
    Q_INVOKABLE double aircool1(){return m_aircool1;}
    Q_INVOKABLE double aircool2(){return m_aircool2;}
    Q_INVOKABLE double aircool3(){return m_aircool3;}
    Q_INVOKABLE double aircool4(){return m_aircool4;}
    Q_INVOKABLE double attr1(){return m_attr1;}
    Q_INVOKABLE double attr2(){return m_attr2;}
    Q_INVOKABLE double attr3(){return m_attr3;}
    Q_INVOKABLE double attr4(){return m_attr4;}
    Q_INVOKABLE double attr5(){return m_attr5;}
    Q_INVOKABLE double attr6(){return m_attr6;}
    Q_INVOKABLE double attr7(){return m_attr7;}
    Q_INVOKABLE double attr8(){return m_attr8;}
    Q_INVOKABLE double attr9(){return m_attr9;}
    Q_INVOKABLE double attr10(){return m_attr10;}


    Q_INVOKABLE void setId(int id){m_id = id;}
    Q_INVOKABLE void setTimestamp(QString timestamp){m_timestamp = timestamp;}
    Q_INVOKABLE void setTemp1(double temp1){m_temp1 = temp1;}
    Q_INVOKABLE void setTemp2(double temp2){m_temp2 = temp2;}
    Q_INVOKABLE void setTemp3(double temp3){m_temp3 = temp3;}
    Q_INVOKABLE void setTemp4(double temp4){m_temp4 = temp4;}
    Q_INVOKABLE void setHumi1(double humi1){m_humi1 = humi1;}
    Q_INVOKABLE void setHumi2(double humi2){m_humi2 = humi2;}
    Q_INVOKABLE void setHumi3(double humi3){m_humi3 = humi3;}
    Q_INVOKABLE void setHumi4(double humi4){m_humi4 = humi4;}
    Q_INVOKABLE void setSysvol(double sysvol){m_sysvol = sysvol;}
    Q_INVOKABLE void setSysele(double sysele){m_sysele = sysele;}
    Q_INVOKABLE void setLoadvol(double loadvol){m_loadvol = loadvol;}
    Q_INVOKABLE void setLoadele(double loadele){m_loadele = loadele;}
    Q_INVOKABLE void setDcvol(double dcvol){m_dcvol = dcvol;}
    Q_INVOKABLE void setAircool1(double aircool1){m_aircool1 = aircool1;}
    Q_INVOKABLE void setAircool2(double aircool2){m_aircool2 = aircool2;}
    Q_INVOKABLE void setAircool3(double aircool3){m_aircool3 = aircool3;}
    Q_INVOKABLE void setAircool4(double aircool4){m_aircool4 = aircool4;}
    Q_INVOKABLE void setAttr1(double attr1){m_attr1 = attr1;}
    Q_INVOKABLE void setAttr2(double attr2){m_attr2 = attr2;}
    Q_INVOKABLE void setAttr3(double attr3){m_attr3 = attr3;}
    Q_INVOKABLE void setAttr4(double attr4){m_attr4 = attr4;}
    Q_INVOKABLE void setAttr5(double attr5){m_attr5 = attr5;}
    Q_INVOKABLE void setAttr6(double attr6){m_attr6 = attr6;}
    Q_INVOKABLE void setAttr7(double attr7){m_attr7 = attr7;}
    Q_INVOKABLE void setAttr8(double attr8){m_attr8 = attr8;}
    Q_INVOKABLE void setAttr9(double attr9){m_attr9 = attr9;}
    Q_INVOKABLE void setAttr10(double attr10){m_attr10 = attr10;}


private:
    int m_id;
    QString m_timestamp;
    double m_temp1;
    double m_temp2;
    double m_temp3;
    double m_temp4;
    double m_humi1;
    double m_humi2;
    double m_humi3;
    double m_humi4;
    double m_sysvol;
    double m_sysele;
    double m_loadvol;
    double m_loadele;
    double m_dcvol;
    double m_aircool1;
    double m_aircool2;
    double m_aircool3;
    double m_aircool4;
    double m_attr1;
    double m_attr2;
    double m_attr3;
    double m_attr4;
    double m_attr5;
    double m_attr6;
    double m_attr7;
    double m_attr8;
    double m_attr9;
    double m_attr10;


};

#endif // U_DEVICE_REAL_VALUE_H
