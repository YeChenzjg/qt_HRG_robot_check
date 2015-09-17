#ifndef U_DEVICE_SWITCH_VALUE_H
#define U_DEVICE_SWITCH_VALUE_H

#include <QObject>
#include <QDateTime>

class U_Device_Switch_Value : public QObject
{
    Q_OBJECT
    Q_PROPERTY(int id READ id WRITE setId)
    Q_PROPERTY(QString mtimestamp READ timestamp WRITE setTimestamp)
    Q_PROPERTY(int status READ status WRITE setStatus)
    Q_PROPERTY(int storage1 READ storage1 WRITE setStorage1)
    Q_PROPERTY(int storage2 READ storage2 WRITE setStorage2)
    Q_PROPERTY(int storage3 READ storage3 WRITE setStorage3)
    Q_PROPERTY(int storage4 READ storage4 WRITE setStorage4)
    Q_PROPERTY(int storage5 READ storage5 WRITE setStorage5)
    Q_PROPERTY(int storage6 READ storage6 WRITE setStorage6)
    Q_PROPERTY(int storage7 READ storage7 WRITE setStorage7)
    Q_PROPERTY(int storage8 READ storage8 WRITE setStorage8)
    Q_PROPERTY(int storage9 READ storage9 WRITE setStorage9)
    Q_PROPERTY(int storage10 READ storage10 WRITE setStorage10)
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
    Q_PROPERTY(int elesensor1 READ elesensor1 WRITE setElesensor1)
    Q_PROPERTY(int elesensor2 READ elesensor2 WRITE setElesensor2)
    Q_PROPERTY(int elesensor3 READ elesensor3 WRITE setElesensor3)
    Q_PROPERTY(int elesensor4 READ elesensor4 WRITE setElesensor4)
    Q_PROPERTY(int elesensor5 READ elesensor5 WRITE setElesensor5)
    Q_PROPERTY(int elesensor6 READ elesensor6 WRITE setElesensor6)
    Q_PROPERTY(int elesensor7 READ elesensor7 WRITE setElesensor7)
    Q_PROPERTY(int elesensor8 READ elesensor8 WRITE setElesensor8)
    Q_PROPERTY(int elesensor9 READ elesensor9 WRITE setElesensor9)
    Q_PROPERTY(int elesensor10 READ elesensor10 WRITE setElesensor10)
    Q_PROPERTY(int elesensor11 READ elesensor11 WRITE setElesensor11)
    Q_PROPERTY(int elesensor12 READ elesensor12 WRITE setElesensor12)
    Q_PROPERTY(int elesensor13 READ elesensor13 WRITE setElesensor13)
    Q_PROPERTY(int elesensor14 READ elesensor14 WRITE setElesensor14)
    Q_PROPERTY(int volsensor1 READ volsensor1 WRITE setVolsensor1)
    Q_PROPERTY(int volsensor2 READ volsensor2 WRITE setVolsensor2)
    Q_PROPERTY(int volsensor3 READ volsensor3 WRITE setVolsensor3)
    Q_PROPERTY(int volsensor4 READ volsensor4 WRITE setVolsensor4)
    Q_PROPERTY(int volsensor5 READ volsensor5 WRITE setVolsensor5)
    Q_PROPERTY(int volsensor6 READ volsensor6 WRITE setVolsensor6)
    Q_PROPERTY(int volsensor7 READ volsensor7 WRITE setVolsensor7)
    Q_PROPERTY(int plc READ plc WRITE setPlc)
    Q_PROPERTY(int acbreaker READ acbreaker WRITE setAcbreaker)
    Q_PROPERTY(int dcbreaker READ dcbreaker WRITE setDcbreaker)
    Q_PROPERTY(int acconnector1 READ acconnector1 WRITE setAcconnector1)
    Q_PROPERTY(int acconnector2 READ acconnector2 WRITE setAcconnector2)
    Q_PROPERTY(int acconnector3 READ acconnector3 WRITE setAcconnector3)
    Q_PROPERTY(int attr1 READ attr1 WRITE setAttr1)
    Q_PROPERTY(int attr2 READ attr2 WRITE setAttr2)
    Q_PROPERTY(int attr3 READ attr3 WRITE setAttr3)
    Q_PROPERTY(int attr4 READ attr4 WRITE setAttr4)
    Q_PROPERTY(int attr5 READ attr5 WRITE setAttr5)
    Q_PROPERTY(int attr6 READ attr6 WRITE setAttr6)
    Q_PROPERTY(int attr7 READ attr7 WRITE setAttr7)
    Q_PROPERTY(int attr8 READ attr8 WRITE setAttr8)
    Q_PROPERTY(int attr9 READ attr9 WRITE setAttr9)
    Q_PROPERTY(int attr10 READ attr10 WRITE setAttr10)
public:
    explicit U_Device_Switch_Value(QObject *parent = 0);

signals:

public slots:
public:
    Q_INVOKABLE int id(){return m_id;}
    Q_INVOKABLE QString timestamp(){return m_timestamp;}
    Q_INVOKABLE int status(){return m_status;}
    Q_INVOKABLE int storage1(){return m_storage1;}
    Q_INVOKABLE int storage2(){return m_storage2;}
    Q_INVOKABLE int storage3(){return m_storage3;}
    Q_INVOKABLE int storage4(){return m_storage4;}
    Q_INVOKABLE int storage5(){return m_storage5;}
    Q_INVOKABLE int storage6(){return m_storage6;}
    Q_INVOKABLE int storage7(){return m_storage7;}
    Q_INVOKABLE int storage8(){return m_storage8;}
    Q_INVOKABLE int storage9(){return m_storage9;}
    Q_INVOKABLE int storage10(){return m_storage10;}
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
    Q_INVOKABLE int elesensor1(){return m_elesensor1;}
    Q_INVOKABLE int elesensor2(){return m_elesensor2;}
    Q_INVOKABLE int elesensor3(){return m_elesensor3;}
    Q_INVOKABLE int elesensor4(){return m_elesensor4;}
    Q_INVOKABLE int elesensor5(){return m_elesensor5;}
    Q_INVOKABLE int elesensor6(){return m_elesensor6;}
    Q_INVOKABLE int elesensor7(){return m_elesensor7;}
    Q_INVOKABLE int elesensor8(){return m_elesensor8;}
    Q_INVOKABLE int elesensor9(){return m_elesensor9;}
    Q_INVOKABLE int elesensor10(){return m_elesensor10;}
    Q_INVOKABLE int elesensor11(){return m_elesensor11;}
    Q_INVOKABLE int elesensor12(){return m_elesensor12;}
    Q_INVOKABLE int elesensor13(){return m_elesensor13;}
    Q_INVOKABLE int elesensor14(){return m_elesensor14;}
    Q_INVOKABLE int volsensor1(){return m_volsensor1;}
    Q_INVOKABLE int volsensor2(){return m_volsensor2;}
    Q_INVOKABLE int volsensor3(){return m_volsensor3;}
    Q_INVOKABLE int volsensor4(){return m_volsensor4;}
    Q_INVOKABLE int volsensor5(){return m_volsensor5;}
    Q_INVOKABLE int volsensor6(){return m_volsensor6;}
    Q_INVOKABLE int volsensor7(){return m_volsensor7;}
    Q_INVOKABLE int plc(){return m_plc;}
    Q_INVOKABLE int acbreaker(){return m_acbreaker;}
    Q_INVOKABLE int dcbreaker(){return m_dcbreaker;}
    Q_INVOKABLE int acconnector1(){return m_acconnector1;}
    Q_INVOKABLE int acconnector2(){return m_acconnector2;}
    Q_INVOKABLE int acconnector3(){return m_acconnector3;}
    Q_INVOKABLE int attr1(){return m_attr1;}
    Q_INVOKABLE int attr2(){return m_attr2;}
    Q_INVOKABLE int attr3(){return m_attr3;}
    Q_INVOKABLE int attr4(){return m_attr4;}
    Q_INVOKABLE int attr5(){return m_attr5;}
    Q_INVOKABLE int attr6(){return m_attr6;}
    Q_INVOKABLE int attr7(){return m_attr7;}
    Q_INVOKABLE int attr8(){return m_attr8;}
    Q_INVOKABLE int attr9(){return m_attr9;}
    Q_INVOKABLE int attr10(){return m_attr10;}

    Q_INVOKABLE void setId(int id){m_id = id;}
    Q_INVOKABLE void setTimestamp(QString timestamp){m_timestamp = timestamp;}
    Q_INVOKABLE void setStatus(int status){m_status = status;}
    Q_INVOKABLE void setStorage1(int storage1){m_storage1 = storage1;}
    Q_INVOKABLE void setStorage2(int storage2){m_storage2 = storage2;}
    Q_INVOKABLE void setStorage3(int storage3){m_storage3 = storage3;}
    Q_INVOKABLE void setStorage4(int storage4){m_storage4 = storage4;}
    Q_INVOKABLE void setStorage5(int storage5){m_storage5 = storage5;}
    Q_INVOKABLE void setStorage6(int storage6){m_storage6 = storage6;}
    Q_INVOKABLE void setStorage7(int storage7){m_storage7 = storage7;}
    Q_INVOKABLE void setStorage8(int storage8){m_storage8 = storage8;}
    Q_INVOKABLE void setStorage9(int storage9){m_storage9 = storage9;}
    Q_INVOKABLE void setStorage10(int storage10){m_storage10 = storage10;}
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
    Q_INVOKABLE void setElesensor1(int elesensor1){m_elesensor1 = elesensor1;}
    Q_INVOKABLE void setElesensor2(int elesensor2){m_elesensor2 = elesensor2;}
    Q_INVOKABLE void setElesensor3(int elesensor3){m_elesensor3 = elesensor3;}
    Q_INVOKABLE void setElesensor4(int elesensor4){m_elesensor4 = elesensor4;}
    Q_INVOKABLE void setElesensor5(int elesensor5){m_elesensor5 = elesensor5;}
    Q_INVOKABLE void setElesensor6(int elesensor6){m_elesensor6 = elesensor6;}
    Q_INVOKABLE void setElesensor7(int elesensor7){m_elesensor7 = elesensor7;}
    Q_INVOKABLE void setElesensor8(int elesensor8){m_elesensor8 = elesensor8;}
    Q_INVOKABLE void setElesensor9(int elesensor9){m_elesensor9 = elesensor9;}
    Q_INVOKABLE void setElesensor10(int elesensor10){m_elesensor10 = elesensor10;}
    Q_INVOKABLE void setElesensor11(int elesensor11){m_elesensor11 = elesensor11;}
    Q_INVOKABLE void setElesensor12(int elesensor12){m_elesensor12 = elesensor12;}
    Q_INVOKABLE void setElesensor13(int elesensor13){m_elesensor13 = elesensor13;}
    Q_INVOKABLE void setElesensor14(int elesensor14){m_elesensor14 = elesensor14;}
    Q_INVOKABLE void setVolsensor1(int volsensor1){m_volsensor1 = volsensor1;}
    Q_INVOKABLE void setVolsensor2(int volsensor2){m_volsensor2 = volsensor2;}
    Q_INVOKABLE void setVolsensor3(int volsensor3){m_volsensor3 = volsensor3;}
    Q_INVOKABLE void setVolsensor4(int volsensor4){m_volsensor4 = volsensor4;}
    Q_INVOKABLE void setVolsensor5(int volsensor5){m_volsensor5 = volsensor5;}
    Q_INVOKABLE void setVolsensor6(int volsensor6){m_volsensor6 = volsensor6;}
    Q_INVOKABLE void setVolsensor7(int volsensor7){m_volsensor7 = volsensor7;}
    Q_INVOKABLE void setPlc(int plc){m_plc = plc;}
    Q_INVOKABLE void setAcbreaker(int acbreaker){m_acbreaker = acbreaker;}
    Q_INVOKABLE void setDcbreaker(int dcbreaker){m_dcbreaker = dcbreaker;}
    Q_INVOKABLE void setAcconnector1(int acconnector1){m_acconnector1 = acconnector1;}
    Q_INVOKABLE void setAcconnector2(int acconnector2){m_acconnector2 = acconnector2;}
    Q_INVOKABLE void setAcconnector3(int acconnector3){m_acconnector3 = acconnector3;}
    Q_INVOKABLE void setAttr1(int attr1){m_attr1 = attr1;}
    Q_INVOKABLE void setAttr2(int attr2){m_attr2 = attr2;}
    Q_INVOKABLE void setAttr3(int attr3){m_attr3 = attr3;}
    Q_INVOKABLE void setAttr4(int attr4){m_attr4 = attr4;}
    Q_INVOKABLE void setAttr5(int attr5){m_attr4 = attr5;}
    Q_INVOKABLE void setAttr6(int attr6){m_attr4 = attr6;}
    Q_INVOKABLE void setAttr7(int attr7){m_attr4 = attr7;}
    Q_INVOKABLE void setAttr8(int attr8){m_attr4 = attr8;}
    Q_INVOKABLE void setAttr9(int attr9){m_attr4 = attr9;}
    Q_INVOKABLE void setAttr10(int attr10){m_attr4 = attr10;}


private:
    int m_id;
    QString m_timestamp;
    int m_status;
    int m_storage1;
    int m_storage2;
    int m_storage3;
    int m_storage4;
    int m_storage5;
    int m_storage6;
    int m_storage7;
    int m_storage8;
    int m_storage9;
    int m_storage10;
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
    int m_elesensor1;
    int m_elesensor2;
    int m_elesensor3;
    int m_elesensor4;
    int m_elesensor5;
    int m_elesensor6;
    int m_elesensor7;
    int m_elesensor8;
    int m_elesensor9;
    int m_elesensor10;
    int m_elesensor11;
    int m_elesensor12;
    int m_elesensor13;
    int m_elesensor14;
    int m_volsensor1;
    int m_volsensor2;
    int m_volsensor3;
    int m_volsensor4;
    int m_volsensor5;
    int m_volsensor6;
    int m_volsensor7;
    int m_plc;
    int m_acbreaker;
    int m_dcbreaker;
    int m_acconnector1;
    int m_acconnector2;
    int m_acconnector3;
    int m_attr1;
    int m_attr2;
    int m_attr3;
    int m_attr4;
    int m_attr5;
    int m_attr6;
    int m_attr7;
    int m_attr8;
    int m_attr9;
    int m_attr10;
};

#endif // U_DEVICE_SWITCH_VALUE_H
