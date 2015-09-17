#ifndef U_DEVICE_DAY_REPORT_H
#define U_DEVICE_DAY_REPORT_H

#include <QObject>

class U_Device_Day_Report : public QObject
{
    Q_OBJECT
    Q_PROPERTY(int id READ id WRITE setId)
    Q_PROPERTY(QString mtimestamp READ timestamp WRITE setTimestamp)
    Q_PROPERTY(int loadoff_errors READ loadoff_errors WRITE setLoadoff_errors)
    Q_PROPERTY(int charge_errors READ charge_errors WRITE setCharge_errors)
    Q_PROPERTY(int running_errors READ running_errors WRITE setRunning_errors)
    Q_PROPERTY(int  compensation_errors READ compensation_errors WRITE setCompensation_errors)
    Q_PROPERTY(int maintenance_errors READ maintenance_errors WRITE setMaintenance_errors)
    Q_PROPERTY(int status_errors READ status_errors WRITE setStatus_errors)
    Q_PROPERTY(int overvol_storage1 READ overvol_storage1 WRITE setOvervol_storage1)
    Q_PROPERTY(int overvol_storage2 READ overvol_storage2 WRITE setOvervol_storage2)
    Q_PROPERTY(int overvol_storage3 READ overvol_storage3 WRITE setOvervol_storage3)
    Q_PROPERTY(int overvol_storage4 READ overvol_storage4 WRITE setOvervol_storage4)
    Q_PROPERTY(int overvol_storage5 READ overvol_storage5 WRITE setOvervol_storage5)
    Q_PROPERTY(int overvol_storage6 READ overvol_storage6 WRITE setOvervol_storage6)
    Q_PROPERTY(int overvol_storage7 READ overvol_storage7 WRITE setOvervol_storage7)
    Q_PROPERTY(int overvol_storage8 READ overvol_storage8 WRITE setOvervol_storage8)
    Q_PROPERTY(int overvol_storage9 READ overvol_storage9 WRITE setOvervol_storage9)
    Q_PROPERTY(int overvol_storage10 READ overvol_storage10 WRITE setOvervol_storage10)
    Q_PROPERTY(int overtemp_storage1 READ overtemp_storage1 WRITE setOvertemp_storage1)
    Q_PROPERTY(int overtemp_storage2 READ overtemp_storage2 WRITE setOvertemp_storage2)
    Q_PROPERTY(int overtemp_storage3 READ overtemp_storage3 WRITE setOvertemp_storage3)
    Q_PROPERTY(int overtemp_storage4 READ overtemp_storage4 WRITE setOvertemp_storage4)
    Q_PROPERTY(int overtemp_storage5 READ overtemp_storage5 WRITE setOvertemp_storage5)
    Q_PROPERTY(int overtemp_storage6 READ overtemp_storage6 WRITE setOvertemp_storage6)
    Q_PROPERTY(int overtemp_storage7 READ overtemp_storage7 WRITE setOvertemp_storage7)
    Q_PROPERTY(int overtemp_storage8 READ overtemp_storage8 WRITE setOvertemp_storage8)
    Q_PROPERTY(int overtemp_storage9 READ overtemp_storage9 WRITE setOvertemp_storage9)
    Q_PROPERTY(int overtemp_storage10 READ overtemp_storage10 WRITE setOvertemp_storage10)
    Q_PROPERTY(int overvol_powerdevice1 READ overvol_powerdevice1 WRITE setOvervol_powerdevice1)
    Q_PROPERTY(int overvol_powerdevice2 READ overvol_powerdevice2 WRITE setOvervol_powerdevice2)
    Q_PROPERTY(int overvol_powerdevice3 READ overvol_powerdevice3 WRITE setOvervol_powerdevice3)
    Q_PROPERTY(int overvol_powerdevice4 READ overvol_powerdevice4 WRITE setOvervol_powerdevice4)
    Q_PROPERTY(int overvol_powerdevice5 READ overvol_powerdevice5 WRITE setOvervol_powerdevice5)
    Q_PROPERTY(int overvol_powerdevice6 READ overvol_powerdevice6 WRITE setOvervol_powerdevice6)
    Q_PROPERTY(int overvol_powerdevice7 READ overvol_powerdevice7 WRITE setOvervol_powerdevice7)
    Q_PROPERTY(int overvol_powerdevice8 READ overvol_powerdevice8 WRITE setOvervol_powerdevice8)
    Q_PROPERTY(int overvol_powerdevice9 READ overvol_powerdevice9 WRITE setOvervol_powerdevice9)
    Q_PROPERTY(int overvol_powerdevice10 READ overvol_powerdevice10 WRITE setOvervol_powerdevice10)
    Q_PROPERTY(int lowvol_powerdevice1 READ lowvol_powerdevice1 WRITE setLowvol_powerdevice1)
    Q_PROPERTY(int lowvol_powerdevice2 READ lowvol_powerdevice2 WRITE setLowvol_powerdevice2)
    Q_PROPERTY(int lowvol_powerdevice3 READ lowvol_powerdevice3 WRITE setLowvol_powerdevice3)
    Q_PROPERTY(int lowvol_powerdevice4 READ lowvol_powerdevice4 WRITE setLowvol_powerdevice4)
    Q_PROPERTY(int lowvol_powerdevice5 READ lowvol_powerdevice5 WRITE setLowvol_powerdevice5)
    Q_PROPERTY(int lowvol_powerdevice6 READ lowvol_powerdevice6 WRITE setLowvol_powerdevice6)
    Q_PROPERTY(int lowvol_powerdevice7 READ lowvol_powerdevice7 WRITE setLowvol_powerdevice7)
    Q_PROPERTY(int lowvol_powerdevice8 READ lowvol_powerdevice8 WRITE setLowvol_powerdevice8)
    Q_PROPERTY(int lowvol_powerdevice9 READ lowvol_powerdevice9 WRITE setLowvol_powerdevice9)
    Q_PROPERTY(int lowvol_powerdevice10 READ lowvol_powerdevice10 WRITE setLowvol_powerdevice10)
    Q_PROPERTY(int overele_powerdevice1 READ overele_powerdevice1 WRITE setOverele_powerdevice1)
    Q_PROPERTY(int overele_powerdevice2 READ overele_powerdevice2 WRITE setOverele_powerdevice2)
    Q_PROPERTY(int overele_powerdevice3 READ overele_powerdevice3 WRITE setOverele_powerdevice3)
    Q_PROPERTY(int overele_powerdevice4 READ overele_powerdevice4 WRITE setOverele_powerdevice4)
    Q_PROPERTY(int overele_powerdevice5 READ overele_powerdevice5 WRITE setOverele_powerdevice5)
    Q_PROPERTY(int overele_powerdevice6 READ overele_powerdevice6 WRITE setOverele_powerdevice6)
    Q_PROPERTY(int overele_powerdevice7 READ overele_powerdevice7 WRITE setOverele_powerdevice7)
    Q_PROPERTY(int overele_powerdevice8 READ overele_powerdevice8 WRITE setOverele_powerdevice8)
    Q_PROPERTY(int overele_powerdevice9 READ overele_powerdevice9 WRITE setOverele_powerdevice9)
    Q_PROPERTY(int overele_powerdevice10 READ overele_powerdevice10 WRITE setOverele_powerdevice10)
    Q_PROPERTY(int overtemp_powerdevice1 READ overtemp_powerdevice1 WRITE setOvertemp_powerdevice1)
    Q_PROPERTY(int overtemp_powerdevice2 READ overtemp_powerdevice2 WRITE setOvertemp_powerdevice2)
    Q_PROPERTY(int overtemp_powerdevice3 READ overtemp_powerdevice3 WRITE setOvertemp_powerdevice3)
    Q_PROPERTY(int overtemp_powerdevice4 READ overtemp_powerdevice4 WRITE setOvertemp_powerdevice4)
    Q_PROPERTY(int overtemp_powerdevice5 READ overtemp_powerdevice5 WRITE setOvertemp_powerdevice5)
    Q_PROPERTY(int overtemp_powerdevice6 READ overtemp_powerdevice6 WRITE setOvertemp_powerdevice6)
    Q_PROPERTY(int overtemp_powerdevice7 READ overtemp_powerdevice7 WRITE setOvertemp_powerdevice7)
    Q_PROPERTY(int overtemp_powerdevice8 READ overtemp_powerdevice8 WRITE setOvertemp_powerdevice8)
    Q_PROPERTY(int overtemp_powerdevice9 READ overtemp_powerdevice9 WRITE setOvertemp_powerdevice9)
    Q_PROPERTY(int overtemp_powerdevice10 READ overtemp_powerdevice10 WRITE setOvertemp_powerdevice10)
    Q_PROPERTY(int elesensor1_errors READ elesensor1_errors WRITE setElesensor1_errors)
    Q_PROPERTY(int elesensor2_errors READ elesensor2_errors WRITE setElesensor2_errors)
    Q_PROPERTY(int elesensor3_errors READ elesensor3_errors WRITE setElesensor3_errors)
    Q_PROPERTY(int elesensor4_errors READ elesensor4_errors WRITE setElesensor4_errors)
    Q_PROPERTY(int elesensor5_errors READ elesensor5_errors WRITE setElesensor5_errors)
    Q_PROPERTY(int elesensor6_errors READ elesensor6_errors WRITE setElesensor6_errors)
    Q_PROPERTY(int elesensor7_errors READ elesensor7_errors WRITE setElesensor7_errors)
    Q_PROPERTY(int elesensor8_errors READ elesensor8_errors WRITE setElesensor8_errors)
    Q_PROPERTY(int elesensor9_errors READ elesensor9_errors WRITE setElesensor9_errors)
    Q_PROPERTY(int elesensor10_errors READ elesensor10_errors WRITE setElesensor10_errors)
    Q_PROPERTY(int elesensor11_errors READ elesensor11_errors WRITE setElesensor10_errors)
    Q_PROPERTY(int elesensor12_errors READ elesensor12_errors WRITE setElesensor10_errors)
    Q_PROPERTY(int elesensor13_errors READ elesensor13_errors WRITE setElesensor10_errors)
    Q_PROPERTY(int elesensor14_errors READ elesensor14_errors WRITE setElesensor10_errors)
    Q_PROPERTY(int volsensor1_errors READ volsensor1_errors WRITE setVolsensor1_errors)
    Q_PROPERTY(int volsensor2_errors READ volsensor2_errors WRITE setVolsensor2_errors)
    Q_PROPERTY(int volsensor3_errors READ volsensor3_errors WRITE setVolsensor3_errors)
    Q_PROPERTY(int volsensor4_errors READ volsensor4_errors WRITE setVolsensor4_errors)
    Q_PROPERTY(int volsensor5_errors READ volsensor5_errors WRITE setVolsensor5_errors)
    Q_PROPERTY(int volsensor6_errors READ volsensor6_errors WRITE setVolsensor6_errors)
    Q_PROPERTY(int volsensor7_errors READ volsensor7_errors WRITE setVolsensor7_errors)
    Q_PROPERTY(int temp1_avg READ temp1_avg WRITE setTemp1_avg)
    Q_PROPERTY(int temp1_min READ temp1_min WRITE setTemp1_min)
    Q_PROPERTY(int temp1_max READ temp1_max WRITE setTemp1_max)
    Q_PROPERTY(int temp2_avg READ temp2_avg WRITE setTemp2_avg)
    Q_PROPERTY(int temp2_min READ temp2_min WRITE setTemp2_min)
    Q_PROPERTY(int temp2_max READ temp2_max WRITE setTemp2_max)
    Q_PROPERTY(int temp3_avg READ temp3_avg WRITE setTemp3_avg)
    Q_PROPERTY(int temp3_min READ temp3_min WRITE setTemp3_min)
    Q_PROPERTY(int temp3_max READ temp3_max WRITE setTemp3_max)
    Q_PROPERTY(int temp4_avg READ temp4_avg WRITE setTemp4_avg)
    Q_PROPERTY(int temp4_min READ temp4_min WRITE setTemp4_min)
    Q_PROPERTY(int temp4_max READ temp4_max WRITE setTemp4_max)
    Q_PROPERTY(int humi1_avg READ humi1_avg WRITE setHumi1_avg)
    Q_PROPERTY(int humi1_min READ humi1_min WRITE setHumi1_min)
    Q_PROPERTY(int humi1_max READ humi1_max WRITE setHumi1_max)
    Q_PROPERTY(int humi2_avg READ humi2_avg WRITE setHumi2_avg)
    Q_PROPERTY(int humi2_min READ humi2_min WRITE setHumi2_min)
    Q_PROPERTY(int humi2_max READ humi2_max WRITE setHumi2_max)
    Q_PROPERTY(int humi3_avg READ humi3_avg WRITE setHumi3_avg)
    Q_PROPERTY(int humi3_min READ humi3_min WRITE setHumi3_min)
    Q_PROPERTY(int humi3_max READ humi3_max WRITE setHumi3_max)
    Q_PROPERTY(int humi4_avg READ humi4_avg WRITE setHumi4_avg)
    Q_PROPERTY(int humi4_min READ humi4_min WRITE setHumi4_min)
    Q_PROPERTY(int humi4_max READ humi4_max WRITE setHumi4_max)
    Q_PROPERTY(int sysvol_avg READ sysvol_avg WRITE setSysvol_avg)
    Q_PROPERTY(int sysvol_min READ sysvol_min WRITE setSysvol_min)
    Q_PROPERTY(int sysvol_max READ sysvol_max WRITE setSysvol_max)
    Q_PROPERTY(int sysele_avg READ sysele_avg WRITE setSysele_avg)
    Q_PROPERTY(int sysele_min READ sysele_min WRITE setSysele_min)
    Q_PROPERTY(int sysele_max READ sysele_max WRITE setSysele_max)
    Q_PROPERTY(int loadvol_avg READ loadvol_avg WRITE setLoadvol_avg)
    Q_PROPERTY(int loadvol_min READ loadvol_min WRITE setLoadvol_min)
    Q_PROPERTY(int loadvol_max READ loadvol_max WRITE setLoadvol_max)
    Q_PROPERTY(int loadele_avg READ loadele_avg WRITE setLoadele_avg)
    Q_PROPERTY(int loadele_min READ loadele_min WRITE setLoadele_min)
    Q_PROPERTY(int loadele_max READ loadele_max WRITE setLoadele_max)
    Q_PROPERTY(int dcvol_avg READ dcvol_avg WRITE setDcvol_avg)
    Q_PROPERTY(int dcvol_min READ dcvol_min WRITE setDcvol_min)
    Q_PROPERTY(int dcvol_max READ dcvol_max WRITE setDcvol_max)
    Q_PROPERTY(int aircool1_avg READ aircool1_avg WRITE setAircool1_avg)
    Q_PROPERTY(int aircool1_min READ aircool1_min WRITE setAircool1_min)
    Q_PROPERTY(int aircool1_max READ aircool1_max WRITE setAircool1_max)
    Q_PROPERTY(int aircool2_avg READ aircool2_avg WRITE setAircool2_avg)
    Q_PROPERTY(int aircool2_min READ aircool2_min WRITE setAircool2_min)
    Q_PROPERTY(int aircool2_max READ aircool2_max WRITE setAircool2_max)
    Q_PROPERTY(int aircool3_avg READ aircool3_avg WRITE setAircool3_avg)
    Q_PROPERTY(int aircool3_min READ aircool3_min WRITE setAircool3_min)
    Q_PROPERTY(int aircool3_max READ aircool3_max WRITE setAircool3_max)
    Q_PROPERTY(int aircool4_avg READ aircool4_avg WRITE setAircool4_avg)
    Q_PROPERTY(int aircool4_min READ aircool4_min WRITE setAircool4_min)
    Q_PROPERTY(int aircool4_max READ aircool4_max WRITE setAircool4_max)
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
    explicit U_Device_Day_Report(QObject *parent = 0);

signals:

public slots:
public:
    Q_INVOKABLE int id(){return m_id;}
    Q_INVOKABLE QString timestamp(){return m_timestamp;}
    Q_INVOKABLE int loadoff_errors(){return m_loadoff_errors;}
    Q_INVOKABLE int charge_errors(){return m_charge_errors;}
    Q_INVOKABLE int running_errors(){return m_running_errors;}
    Q_INVOKABLE int compensation_errors(){return m_compensation_errors;}
    Q_INVOKABLE int maintenance_errors(){return m_maintenance_errors;}
    Q_INVOKABLE int status_errors(){return m_status_errors;}
    Q_INVOKABLE int overvol_storage1(){return m_overvol_powerdevice1;}
    Q_INVOKABLE int overvol_storage2(){return m_overvol_powerdevice2;}
    Q_INVOKABLE int overvol_storage3(){return m_overvol_powerdevice3;}
    Q_INVOKABLE int overvol_storage4(){return m_overvol_powerdevice4;}
    Q_INVOKABLE int overvol_storage5(){return m_overvol_powerdevice5;}
    Q_INVOKABLE int overvol_storage6(){return m_overvol_powerdevice6;}
    Q_INVOKABLE int overvol_storage7(){return m_overvol_powerdevice7;}
    Q_INVOKABLE int overvol_storage8(){return m_overvol_powerdevice8;}
    Q_INVOKABLE int overvol_storage9(){return m_overvol_powerdevice9;}
    Q_INVOKABLE int overvol_storage10(){return m_overvol_powerdevice10;}
    Q_INVOKABLE int overtemp_storage1(){return m_overtemp_storage1;}
    Q_INVOKABLE int overtemp_storage2(){return m_overtemp_storage2;}
    Q_INVOKABLE int overtemp_storage3(){return m_overtemp_storage3;}
    Q_INVOKABLE int overtemp_storage4(){return m_overtemp_storage4;}
    Q_INVOKABLE int overtemp_storage5(){return m_overtemp_storage5;}
    Q_INVOKABLE int overtemp_storage6(){return m_overtemp_storage6;}
    Q_INVOKABLE int overtemp_storage7(){return m_overtemp_storage7;}
    Q_INVOKABLE int overtemp_storage8(){return m_overtemp_storage8;}
    Q_INVOKABLE int overtemp_storage9(){return m_overtemp_storage9;}
    Q_INVOKABLE int overtemp_storage10(){return m_overtemp_storage10;}
    Q_INVOKABLE int overvol_powerdevice1(){return m_overvol_powerdevice1;}
    Q_INVOKABLE int overvol_powerdevice2(){return m_overvol_powerdevice2;}
    Q_INVOKABLE int overvol_powerdevice3(){return m_overvol_powerdevice3;}
    Q_INVOKABLE int overvol_powerdevice4(){return m_overvol_powerdevice4;}
    Q_INVOKABLE int overvol_powerdevice5(){return m_overvol_powerdevice5;}
    Q_INVOKABLE int overvol_powerdevice6(){return m_overvol_powerdevice6;}
    Q_INVOKABLE int overvol_powerdevice7(){return m_overvol_powerdevice7;}
    Q_INVOKABLE int overvol_powerdevice8(){return m_overvol_powerdevice8;}
    Q_INVOKABLE int overvol_powerdevice9(){return m_overvol_powerdevice9;}
    Q_INVOKABLE int overvol_powerdevice10(){return m_overvol_powerdevice10;}
    Q_INVOKABLE int lowvol_powerdevice1(){return m_lowvol_powerdevice1;}
    Q_INVOKABLE int lowvol_powerdevice2(){return m_lowvol_powerdevice2;}
    Q_INVOKABLE int lowvol_powerdevice3(){return m_lowvol_powerdevice3;}
    Q_INVOKABLE int lowvol_powerdevice4(){return m_lowvol_powerdevice4;}
    Q_INVOKABLE int lowvol_powerdevice5(){return m_lowvol_powerdevice5;}
    Q_INVOKABLE int lowvol_powerdevice6(){return m_lowvol_powerdevice6;}
    Q_INVOKABLE int lowvol_powerdevice7(){return m_lowvol_powerdevice7;}
    Q_INVOKABLE int lowvol_powerdevice8(){return m_lowvol_powerdevice8;}
    Q_INVOKABLE int lowvol_powerdevice9(){return m_lowvol_powerdevice9;}
    Q_INVOKABLE int lowvol_powerdevice10(){return m_lowvol_powerdevice10;}
    Q_INVOKABLE int overele_powerdevice1(){return m_overele_powerdevice1;}
    Q_INVOKABLE int overele_powerdevice2(){return m_overele_powerdevice2;}
    Q_INVOKABLE int overele_powerdevice3(){return m_overele_powerdevice3;}
    Q_INVOKABLE int overele_powerdevice4(){return m_overele_powerdevice4;}
    Q_INVOKABLE int overele_powerdevice5(){return m_overele_powerdevice5;}
    Q_INVOKABLE int overele_powerdevice6(){return m_overele_powerdevice6;}
    Q_INVOKABLE int overele_powerdevice7(){return m_overele_powerdevice7;}
    Q_INVOKABLE int overele_powerdevice8(){return m_overele_powerdevice8;}
    Q_INVOKABLE int overele_powerdevice9(){return m_overele_powerdevice9;}
    Q_INVOKABLE int overele_powerdevice10(){return m_overele_powerdevice10;}
    Q_INVOKABLE int overtemp_powerdevice1(){return m_overtemp_powerdevice1;}
    Q_INVOKABLE int overtemp_powerdevice2(){return m_overtemp_powerdevice2;}
    Q_INVOKABLE int overtemp_powerdevice3(){return m_overtemp_powerdevice3;}
    Q_INVOKABLE int overtemp_powerdevice4(){return m_overtemp_powerdevice4;}
    Q_INVOKABLE int overtemp_powerdevice5(){return m_overtemp_powerdevice5;}
    Q_INVOKABLE int overtemp_powerdevice6(){return m_overtemp_powerdevice6;}
    Q_INVOKABLE int overtemp_powerdevice7(){return m_overtemp_powerdevice7;}
    Q_INVOKABLE int overtemp_powerdevice8(){return m_overtemp_powerdevice8;}
    Q_INVOKABLE int overtemp_powerdevice9(){return m_overtemp_powerdevice9;}
    Q_INVOKABLE int overtemp_powerdevice10(){return m_overtemp_powerdevice10;}
    Q_INVOKABLE int elesensor1_errors(){return m_elesensor1_errors;}
    Q_INVOKABLE int elesensor2_errors(){return m_elesensor2_errors;}
    Q_INVOKABLE int elesensor3_errors(){return m_elesensor3_errors;}
    Q_INVOKABLE int elesensor4_errors(){return m_elesensor4_errors;}
    Q_INVOKABLE int elesensor5_errors(){return m_elesensor5_errors;}
    Q_INVOKABLE int elesensor6_errors(){return m_elesensor6_errors;}
    Q_INVOKABLE int elesensor7_errors(){return m_elesensor7_errors;}
    Q_INVOKABLE int elesensor8_errors(){return m_elesensor8_errors;}
    Q_INVOKABLE int elesensor9_errors(){return m_elesensor9_errors;}
    Q_INVOKABLE int elesensor10_errors(){return m_elesensor10_errors;}
    Q_INVOKABLE int elesensor11_errors(){return m_elesensor11_errors;}
    Q_INVOKABLE int elesensor12_errors(){return m_elesensor12_errors;}
    Q_INVOKABLE int elesensor13_errors(){return m_elesensor13_errors;}
    Q_INVOKABLE int elesensor14_errors(){return m_elesensor14_errors;}
    Q_INVOKABLE int volsensor1_errors(){return m_volsensor1_errors;}
    Q_INVOKABLE int volsensor2_errors(){return m_volsensor2_errors;}
    Q_INVOKABLE int volsensor3_errors(){return m_volsensor3_errors;}
    Q_INVOKABLE int volsensor4_errors(){return m_volsensor4_errors;}
    Q_INVOKABLE int volsensor5_errors(){return m_volsensor5_errors;}
    Q_INVOKABLE int volsensor6_errors(){return m_volsensor6_errors;}
    Q_INVOKABLE int volsensor7_errors(){return m_volsensor7_errors;}
    Q_INVOKABLE int temp1_avg(){return m_temp1_avg;}
    Q_INVOKABLE int temp1_min(){return m_temp1_min;}
    Q_INVOKABLE int temp1_max(){return m_temp1_max;}
    Q_INVOKABLE int temp2_avg(){return m_temp2_avg;}
    Q_INVOKABLE int temp2_min(){return m_temp2_min;}
    Q_INVOKABLE int temp2_max(){return m_temp2_max;}
    Q_INVOKABLE int temp3_avg(){return m_temp3_avg;}
    Q_INVOKABLE int temp3_min(){return m_temp3_min;}
    Q_INVOKABLE int temp3_max(){return m_temp3_max;}
    Q_INVOKABLE int temp4_avg(){return m_temp4_avg;}
    Q_INVOKABLE int temp4_min(){return m_temp4_min;}
    Q_INVOKABLE int temp4_max(){return m_temp4_max;}
    Q_INVOKABLE int humi1_avg(){return m_humi1_avg;}
    Q_INVOKABLE int humi1_min(){return m_humi1_min;}
    Q_INVOKABLE int humi1_max(){return m_humi1_max;}
    Q_INVOKABLE int humi2_avg(){return m_humi2_avg;}
    Q_INVOKABLE int humi2_min(){return m_humi2_min;}
    Q_INVOKABLE int humi2_max(){return m_humi2_max;}
    Q_INVOKABLE int humi3_avg(){return m_humi3_avg;}
    Q_INVOKABLE int humi3_min(){return m_humi3_min;}
    Q_INVOKABLE int humi3_max(){return m_humi3_max;}
    Q_INVOKABLE int humi4_avg(){return m_humi4_avg;}
    Q_INVOKABLE int humi4_min(){return m_humi4_min;}
    Q_INVOKABLE int humi4_max(){return m_humi4_max;}
    Q_INVOKABLE int sysvol_avg(){return m_sysvol_avg;}
    Q_INVOKABLE int sysvol_min(){return m_sysvol_min;}
    Q_INVOKABLE int sysvol_max(){return m_sysvol_max;}
    Q_INVOKABLE int sysele_avg(){return m_sysele_avg;}
    Q_INVOKABLE int sysele_min(){return m_sysele_min;}
    Q_INVOKABLE int sysele_max(){return m_sysele_max;}
    Q_INVOKABLE int loadvol_avg(){return m_loadvol_avg;}
    Q_INVOKABLE int loadvol_min(){return m_loadvol_min;}
    Q_INVOKABLE int loadvol_max(){return m_loadvol_max;}
    Q_INVOKABLE int loadele_avg(){return m_loadele_avg;}
    Q_INVOKABLE int loadele_min(){return m_loadele_min;}
    Q_INVOKABLE int loadele_max(){return m_loadele_max;}
    Q_INVOKABLE int dcvol_avg(){return m_dcvol_avg;}
    Q_INVOKABLE int dcvol_min(){return m_dcvol_min;}
    Q_INVOKABLE int dcvol_max(){return m_dcvol_max;}
    Q_INVOKABLE int aircool1_avg(){return m_aircool1_avg;}
    Q_INVOKABLE int aircool1_min(){return m_aircool1_min;}
    Q_INVOKABLE int aircool1_max(){return m_aircool1_max;}
    Q_INVOKABLE int aircool2_avg(){return m_aircool2_avg;}
    Q_INVOKABLE int aircool2_min(){return m_aircool2_min;}
    Q_INVOKABLE int aircool2_max(){return m_aircool2_max;}
    Q_INVOKABLE int aircool3_avg(){return m_aircool3_avg;}
    Q_INVOKABLE int aircool3_min(){return m_aircool3_min;}
    Q_INVOKABLE int aircool3_max(){return m_aircool3_max;}
    Q_INVOKABLE int aircool4_avg(){return m_aircool4_avg;}
    Q_INVOKABLE int aircool4_min(){return m_aircool4_min;}
    Q_INVOKABLE int aircool4_max(){return m_aircool4_max;}
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
    Q_INVOKABLE void setLoadoff_errors(int loadoff_errors){m_loadoff_errors = loadoff_errors;}
    Q_INVOKABLE void setCharge_errors(int charge_errors){m_charge_errors = charge_errors;}
    Q_INVOKABLE void setRunning_errors(int running_errors){m_running_errors = running_errors;}
    Q_INVOKABLE void setCompensation_errors(int compensation_errors){m_compensation_errors = compensation_errors;}
    Q_INVOKABLE void setMaintenance_errors(int maintenance_errors){m_maintenance_errors = maintenance_errors;}
    Q_INVOKABLE void setStatus_errors(int status_errors){m_status_errors = status_errors;}
    Q_INVOKABLE void setOvervol_storage1(int overvol_storage1){m_overtemp_storage1 = overvol_storage1;}
    Q_INVOKABLE void setOvervol_storage2(int overvol_storage2){m_overtemp_storage2 = overvol_storage2;}
    Q_INVOKABLE void setOvervol_storage3(int overvol_storage3){m_overtemp_storage3 = overvol_storage3;}
    Q_INVOKABLE void setOvervol_storage4(int overvol_storage4){m_overtemp_storage4 = overvol_storage4;}
    Q_INVOKABLE void setOvervol_storage5(int overvol_storage5){m_overtemp_storage5 = overvol_storage5;}
    Q_INVOKABLE void setOvervol_storage6(int overvol_storage6){m_overtemp_storage6 = overvol_storage6;}
    Q_INVOKABLE void setOvervol_storage7(int overvol_storage7){m_overtemp_storage7 = overvol_storage7;}
    Q_INVOKABLE void setOvervol_storage8(int overvol_storage8){m_overtemp_storage8 = overvol_storage8;}
    Q_INVOKABLE void setOvervol_storage9(int overvol_storage9){m_overtemp_storage9 = overvol_storage9;}
    Q_INVOKABLE void setOvervol_storage10(int overvol_storage10){m_overtemp_storage10 = overvol_storage10;}
    Q_INVOKABLE void setOvertemp_storage1(int overtemp_storage1){m_overtemp_storage1 = overtemp_storage1;}
    Q_INVOKABLE void setOvertemp_storage2(int overtemp_storage2){m_overtemp_storage2 = overtemp_storage2;}
    Q_INVOKABLE void setOvertemp_storage3(int overtemp_storage3){m_overtemp_storage3 = overtemp_storage3;}
    Q_INVOKABLE void setOvertemp_storage4(int overtemp_storage4){m_overtemp_storage4 = overtemp_storage4;}
    Q_INVOKABLE void setOvertemp_storage5(int overtemp_storage5){m_overtemp_storage5 = overtemp_storage5;}
    Q_INVOKABLE void setOvertemp_storage6(int overtemp_storage6){m_overtemp_storage6 = overtemp_storage6;}
    Q_INVOKABLE void setOvertemp_storage7(int overtemp_storage7){m_overtemp_storage7 = overtemp_storage7;}
    Q_INVOKABLE void setOvertemp_storage8(int overtemp_storage8){m_overtemp_storage8 = overtemp_storage8;}
    Q_INVOKABLE void setOvertemp_storage9(int overtemp_storage9){m_overtemp_storage9 = overtemp_storage9;}
    Q_INVOKABLE void setOvertemp_storage10(int overtemp_storage10){m_overtemp_storage10 = overtemp_storage10;}
    Q_INVOKABLE void setOvervol_powerdevice1(int overvol_powerdevice1){m_overvol_powerdevice1 = overvol_powerdevice1;}
    Q_INVOKABLE void setOvervol_powerdevice2(int overvol_powerdevice2){m_overvol_powerdevice2 = overvol_powerdevice2;}
    Q_INVOKABLE void setOvervol_powerdevice3(int overvol_powerdevice3){m_overvol_powerdevice3 = overvol_powerdevice3;}
    Q_INVOKABLE void setOvervol_powerdevice4(int overvol_powerdevice4){m_overvol_powerdevice4 = overvol_powerdevice4;}
    Q_INVOKABLE void setOvervol_powerdevice5(int overvol_powerdevice5){m_overvol_powerdevice5 = overvol_powerdevice5;}
    Q_INVOKABLE void setOvervol_powerdevice6(int overvol_powerdevice6){m_overvol_powerdevice6 = overvol_powerdevice6;}
    Q_INVOKABLE void setOvervol_powerdevice7(int overvol_powerdevice7){m_overvol_powerdevice7 = overvol_powerdevice7;}
    Q_INVOKABLE void setOvervol_powerdevice8(int overvol_powerdevice8){m_overvol_powerdevice8 = overvol_powerdevice8;}
    Q_INVOKABLE void setOvervol_powerdevice9(int overvol_powerdevice9){m_overvol_powerdevice9 = overvol_powerdevice9;}
    Q_INVOKABLE void setOvervol_powerdevice10(int overvol_powerdevice10){m_overvol_powerdevice10 = overvol_powerdevice10;}
    Q_INVOKABLE void setLowvol_powerdevice1(int lowvol_powerdevice1){m_lowvol_powerdevice1 = lowvol_powerdevice1;}
    Q_INVOKABLE void setLowvol_powerdevice2(int lowvol_powerdevice2){m_lowvol_powerdevice2 = lowvol_powerdevice2;}
    Q_INVOKABLE void setLowvol_powerdevice3(int lowvol_powerdevice3){m_lowvol_powerdevice3 = lowvol_powerdevice3;}
    Q_INVOKABLE void setLowvol_powerdevice4(int lowvol_powerdevice4){m_lowvol_powerdevice4 = lowvol_powerdevice4;}
    Q_INVOKABLE void setLowvol_powerdevice5(int lowvol_powerdevice5){m_lowvol_powerdevice5 = lowvol_powerdevice5;}
    Q_INVOKABLE void setLowvol_powerdevice6(int lowvol_powerdevice6){m_lowvol_powerdevice6 = lowvol_powerdevice6;}
    Q_INVOKABLE void setLowvol_powerdevice7(int lowvol_powerdevice7){m_lowvol_powerdevice7 = lowvol_powerdevice7;}
    Q_INVOKABLE void setLowvol_powerdevice8(int lowvol_powerdevice8){m_lowvol_powerdevice8 = lowvol_powerdevice8;}
    Q_INVOKABLE void setLowvol_powerdevice9(int lowvol_powerdevice9){m_lowvol_powerdevice9 = lowvol_powerdevice9;}
    Q_INVOKABLE void setLowvol_powerdevice10(int lowvol_powerdevice10){m_lowvol_powerdevice10 = lowvol_powerdevice10;}
    Q_INVOKABLE void setOverele_powerdevice1(int overele_powerdevice1){m_overele_powerdevice1 = overele_powerdevice1;}
    Q_INVOKABLE void setOverele_powerdevice2(int overele_powerdevice2){m_overele_powerdevice2 = overele_powerdevice2;}
    Q_INVOKABLE void setOverele_powerdevice3(int overele_powerdevice3){m_overele_powerdevice3 = overele_powerdevice3;}
    Q_INVOKABLE void setOverele_powerdevice4(int overele_powerdevice4){m_overele_powerdevice4 = overele_powerdevice4;}
    Q_INVOKABLE void setOverele_powerdevice5(int overele_powerdevice5){m_overele_powerdevice5 = overele_powerdevice5;}
    Q_INVOKABLE void setOverele_powerdevice6(int overele_powerdevice6){m_overele_powerdevice6 = overele_powerdevice6;}
    Q_INVOKABLE void setOverele_powerdevice7(int overele_powerdevice7){m_overele_powerdevice7 = overele_powerdevice7;}
    Q_INVOKABLE void setOverele_powerdevice8(int overele_powerdevice8){m_overele_powerdevice8 = overele_powerdevice8;}
    Q_INVOKABLE void setOverele_powerdevice9(int overele_powerdevice9){m_overele_powerdevice9 = overele_powerdevice9;}
    Q_INVOKABLE void setOverele_powerdevice10(int overele_powerdevice10){m_overele_powerdevice10 = overele_powerdevice10;}
    Q_INVOKABLE void setOvertemp_powerdevice1(int overtemp_powerdevice1){m_overtemp_powerdevice1 = overtemp_powerdevice1;}
    Q_INVOKABLE void setOvertemp_powerdevice2(int overtemp_powerdevice2){m_overtemp_powerdevice2 = overtemp_powerdevice2;}
    Q_INVOKABLE void setOvertemp_powerdevice3(int overtemp_powerdevice3){m_overtemp_powerdevice3 = overtemp_powerdevice3;}
    Q_INVOKABLE void setOvertemp_powerdevice4(int overtemp_powerdevice4){m_overtemp_powerdevice4 = overtemp_powerdevice4;}
    Q_INVOKABLE void setOvertemp_powerdevice5(int overtemp_powerdevice5){m_overtemp_powerdevice5 = overtemp_powerdevice5;}
    Q_INVOKABLE void setOvertemp_powerdevice6(int overtemp_powerdevice6){m_overtemp_powerdevice6 = overtemp_powerdevice6;}
    Q_INVOKABLE void setOvertemp_powerdevice7(int overtemp_powerdevice7){m_overtemp_powerdevice7 = overtemp_powerdevice7;}
    Q_INVOKABLE void setOvertemp_powerdevice8(int overtemp_powerdevice8){m_overtemp_powerdevice8 = overtemp_powerdevice8;}
    Q_INVOKABLE void setOvertemp_powerdevice9(int overtemp_powerdevice9){m_overtemp_powerdevice9 = overtemp_powerdevice9;}
    Q_INVOKABLE void setOvertemp_powerdevice10(int overtemp_powerdevice10){m_overtemp_powerdevice10 = overtemp_powerdevice10;}
    Q_INVOKABLE void setElesensor1_errors(int elesensor1_errors){m_elesensor1_errors = elesensor1_errors;}
    Q_INVOKABLE void setElesensor2_errors(int elesensor2_errors){m_elesensor2_errors = elesensor2_errors;}
    Q_INVOKABLE void setElesensor3_errors(int elesensor3_errors){m_elesensor3_errors = elesensor3_errors;}
    Q_INVOKABLE void setElesensor4_errors(int elesensor4_errors){m_elesensor4_errors = elesensor4_errors;}
    Q_INVOKABLE void setElesensor5_errors(int elesensor5_errors){m_elesensor5_errors = elesensor5_errors;}
    Q_INVOKABLE void setElesensor6_errors(int elesensor6_errors){m_elesensor6_errors = elesensor6_errors;}
    Q_INVOKABLE void setElesensor7_errors(int elesensor7_errors){m_elesensor7_errors = elesensor7_errors;}
    Q_INVOKABLE void setElesensor8_errors(int elesensor8_errors){m_elesensor8_errors = elesensor8_errors;}
    Q_INVOKABLE void setElesensor9_errors(int elesensor9_errors){m_elesensor9_errors = elesensor9_errors;}
    Q_INVOKABLE void setElesensor10_errors(int elesensor10_errors){m_elesensor10_errors = elesensor10_errors;}
    Q_INVOKABLE void setElesensor11_errors(int elesensor11_errors){m_elesensor11_errors = elesensor11_errors;}
    Q_INVOKABLE void setElesensor12_errors(int elesensor12_errors){m_elesensor12_errors = elesensor12_errors;}
    Q_INVOKABLE void setElesensor13_errors(int elesensor13_errors){m_elesensor13_errors = elesensor13_errors;}
    Q_INVOKABLE void setElesensor14_errors(int elesensor14_errors){m_elesensor14_errors = elesensor14_errors;}

    Q_INVOKABLE void setVolsensor1_errors(int volsensor1_errors){m_volsensor1_errors = volsensor1_errors;}
    Q_INVOKABLE void setVolsensor2_errors(int volsensor2_errors){m_volsensor2_errors = volsensor2_errors;}
    Q_INVOKABLE void setVolsensor3_errors(int volsensor3_errors){m_volsensor3_errors = volsensor3_errors;}
    Q_INVOKABLE void setVolsensor4_errors(int volsensor4_errors){m_volsensor4_errors = volsensor4_errors;}
    Q_INVOKABLE void setVolsensor5_errors(int volsensor5_errors){m_volsensor5_errors = volsensor5_errors;}
    Q_INVOKABLE void setVolsensor6_errors(int volsensor6_errors){m_volsensor6_errors = volsensor6_errors;}
    Q_INVOKABLE void setVolsensor7_errors(int volsensor7_errors){m_volsensor7_errors = volsensor7_errors;}
    Q_INVOKABLE void setTemp1_avg(int temp1_avg){m_temp1_avg = temp1_avg;}
    Q_INVOKABLE void setTemp1_min(int temp1_min){m_temp1_min = temp1_min;}
    Q_INVOKABLE void setTemp1_max(int temp1_max){m_temp1_max = temp1_max;}
    Q_INVOKABLE void setTemp2_avg(int temp2_avg){m_temp2_avg = temp2_avg;}
    Q_INVOKABLE void setTemp2_min(int temp2_min){m_temp2_min = temp2_min;}
    Q_INVOKABLE void setTemp2_max(int temp2_max){m_temp2_max = temp2_max;}
    Q_INVOKABLE void setTemp3_avg(int temp3_avg){m_temp3_avg = temp3_avg;}
    Q_INVOKABLE void setTemp3_min(int temp3_min){m_temp3_min = temp3_min;}
    Q_INVOKABLE void setTemp3_max(int temp3_max){m_temp3_max = temp3_max;}
    Q_INVOKABLE void setTemp4_avg(int temp4_avg){m_temp4_avg = temp4_avg;}
    Q_INVOKABLE void setTemp4_min(int temp4_min){m_temp4_min = temp4_min;}
    Q_INVOKABLE void setTemp4_max(int temp4_max){m_temp4_max = temp4_max;}
    Q_INVOKABLE void setHumi1_avg(int humi1_avg){m_humi1_avg = humi1_avg;}
    Q_INVOKABLE void setHumi1_min(int humi1_min){m_humi1_min = humi1_min;}
    Q_INVOKABLE void setHumi1_max(int humi1_max){m_humi1_max = humi1_max;}
    Q_INVOKABLE void setHumi2_avg(int humi2_avg){m_humi2_avg = humi2_avg;}
    Q_INVOKABLE void setHumi2_min(int humi2_min){m_humi2_min = humi2_min;}
    Q_INVOKABLE void setHumi2_max(int humi2_max){m_humi2_max = humi2_max;}
    Q_INVOKABLE void setHumi3_avg(int humi3_avg){m_humi3_avg = humi3_avg;}
    Q_INVOKABLE void setHumi3_min(int humi3_min){m_humi3_min = humi3_min;}
    Q_INVOKABLE void setHumi3_max(int humi3_max){m_humi3_max = humi3_max;}
    Q_INVOKABLE void setHumi4_avg(int humi4_avg){m_humi4_avg = humi4_avg;}
    Q_INVOKABLE void setHumi4_min(int humi4_min){m_humi4_min = humi4_min;}
    Q_INVOKABLE void setHumi4_max(int humi4_max){m_humi4_max = humi4_max;}
    Q_INVOKABLE void setSysvol_avg(int sysvol_avg){m_sysvol_avg = sysvol_avg;}
    Q_INVOKABLE void setSysvol_min(int sysvol_min){m_sysvol_min = sysvol_min;}
    Q_INVOKABLE void setSysvol_max(int sysvol_max){m_sysvol_max = sysvol_max;}
    Q_INVOKABLE void setSysele_avg(int sysele_avg){m_sysele_avg = sysele_avg;}
    Q_INVOKABLE void setSysele_min(int sysele_min){m_sysele_min = sysele_min;}
    Q_INVOKABLE void setSysele_max(int sysele_max){m_sysele_max = sysele_max;}
    Q_INVOKABLE void setLoadvol_avg(int loadvol_avg){m_loadvol_avg = loadvol_avg;}
    Q_INVOKABLE void setLoadvol_min(int loadvol_min){m_loadvol_min = loadvol_min; }
    Q_INVOKABLE void setLoadvol_max(int loadvol_max){m_loadvol_max = loadvol_max;}
    Q_INVOKABLE void setLoadele_avg(int loadele_avg){m_loadele_avg = loadele_avg;}
    Q_INVOKABLE void setLoadele_min(int loadele_min){m_loadele_min = loadele_min;}
    Q_INVOKABLE void setLoadele_max(int loadele_max){m_loadele_max = loadele_max;}
    Q_INVOKABLE void setDcvol_avg(int dcvol_avg){m_dcvol_avg = dcvol_avg;}
    Q_INVOKABLE void setDcvol_min(int dcvol_min){m_dcvol_min = dcvol_min;}
    Q_INVOKABLE void setDcvol_max(int dcvol_max){m_dcvol_max = dcvol_max;}
    Q_INVOKABLE void setAircool1_avg(int aircool1_avg){m_aircool1_avg = aircool1_avg;}
    Q_INVOKABLE void setAircool1_min(int aircool1_min){m_aircool1_min = aircool1_min;}
    Q_INVOKABLE void setAircool1_max(int aircool1_max){m_aircool1_max = aircool1_max;}
    Q_INVOKABLE void setAircool2_avg(int aircool2_avg){m_aircool2_avg = aircool2_avg;}
    Q_INVOKABLE void setAircool2_min(int aircool2_min){m_aircool2_min = aircool2_min;}
    Q_INVOKABLE void setAircool2_max(int aircool2_max){m_aircool2_max = aircool2_max;}
    Q_INVOKABLE void setAircool3_avg(int aircool3_avg){m_aircool3_avg = aircool3_avg;}
    Q_INVOKABLE void setAircool3_min(int aircool3_min){m_aircool3_min = aircool3_min;}
    Q_INVOKABLE void setAircool3_max(int aircool3_max){m_aircool3_max = aircool3_max;}
    Q_INVOKABLE void setAircool4_avg(int aircool4_avg){m_aircool4_avg = aircool4_avg;}
    Q_INVOKABLE void setAircool4_min(int aircool4_min){m_aircool4_min = aircool4_min;}
    Q_INVOKABLE void setAircool4_max(int aircool4_max){m_aircool4_max = aircool4_max;}
    Q_INVOKABLE void setAttr1(int attr1){m_attr1 = attr1;}
    Q_INVOKABLE void setAttr2(int attr2){m_attr2 = attr2;}
    Q_INVOKABLE void setAttr3(int attr3){m_attr3 = attr3;}
    Q_INVOKABLE void setAttr4(int attr4){m_attr4 = attr4;}
    Q_INVOKABLE void setAttr5(int attr5){m_attr5 = attr5;}
    Q_INVOKABLE void setAttr6(int attr6){m_attr6 = attr6;}
    Q_INVOKABLE void setAttr7(int attr7){m_attr7 = attr7;}
    Q_INVOKABLE void setAttr8(int attr8){m_attr8 = attr8;}
    Q_INVOKABLE void setAttr9(int attr9){m_attr9 = attr9;}
    Q_INVOKABLE void setAttr10(int attr10){m_attr10 = attr10;}


private:
    int m_id;
    QString m_timestamp;
    int m_loadoff_errors;
    int m_charge_errors;
    int m_running_errors;
    int m_compensation_errors;
    int m_maintenance_errors;
    int m_status_errors;
    int m_overvol_storage1;
    int m_overvol_storage2;
    int m_overvol_storage3;
    int m_overvol_storage4;
    int m_overvol_storage5;
    int m_overvol_storage6;
    int m_overvol_storage7;
    int m_overvol_storage8;
    int m_overvol_storage9;
    int m_overvol_storage10;
    int m_overtemp_storage1;
    int m_overtemp_storage2;
    int m_overtemp_storage3;
    int m_overtemp_storage4;
    int m_overtemp_storage5;
    int m_overtemp_storage6;
    int m_overtemp_storage7;
    int m_overtemp_storage8;
    int m_overtemp_storage9;
    int m_overtemp_storage10;
    int m_overvol_powerdevice1;
    int m_overvol_powerdevice2;
    int m_overvol_powerdevice3;
    int m_overvol_powerdevice4;
    int m_overvol_powerdevice5;
    int m_overvol_powerdevice6;
    int m_overvol_powerdevice7;
    int m_overvol_powerdevice8;
    int m_overvol_powerdevice9;
    int m_overvol_powerdevice10;
    int m_lowvol_powerdevice1;
    int m_lowvol_powerdevice2;
    int m_lowvol_powerdevice3;
    int m_lowvol_powerdevice4;
    int m_lowvol_powerdevice5;
    int m_lowvol_powerdevice6;
    int m_lowvol_powerdevice7;
    int m_lowvol_powerdevice8;
    int m_lowvol_powerdevice9;
    int m_lowvol_powerdevice10;
    int m_overele_powerdevice1;
    int m_overele_powerdevice2;
    int m_overele_powerdevice3;
    int m_overele_powerdevice4;
    int m_overele_powerdevice5;
    int m_overele_powerdevice6;
    int m_overele_powerdevice7;
    int m_overele_powerdevice8;
    int m_overele_powerdevice9;
    int m_overele_powerdevice10;

    int m_overtemp_powerdevice1;
    int m_overtemp_powerdevice2;
    int m_overtemp_powerdevice3;
    int m_overtemp_powerdevice4;
    int m_overtemp_powerdevice5;
    int m_overtemp_powerdevice6;
    int m_overtemp_powerdevice7;
    int m_overtemp_powerdevice8;
    int m_overtemp_powerdevice9;
    int m_overtemp_powerdevice10;
    int m_elesensor1_errors;
    int m_elesensor2_errors;
    int m_elesensor3_errors;
    int m_elesensor4_errors;
    int m_elesensor5_errors;
    int m_elesensor6_errors;
    int m_elesensor7_errors;
    int m_elesensor8_errors;
    int m_elesensor9_errors;
    int m_elesensor10_errors;
    int m_elesensor11_errors;
    int m_elesensor12_errors;
    int m_elesensor13_errors;
    int m_elesensor14_errors;

    int m_volsensor1_errors;
    int m_volsensor2_errors;
    int m_volsensor3_errors;
    int m_volsensor4_errors;
    int m_volsensor5_errors;
    int m_volsensor6_errors;
    int m_volsensor7_errors;

    int m_temp1_avg;
    int m_temp1_min;
    int m_temp1_max;
    int m_temp2_avg;
    int m_temp2_min;
    int m_temp2_max;
    int m_temp3_avg;
    int m_temp3_min;
    int m_temp3_max;
    int m_temp4_avg;
    int m_temp4_min;
    int m_temp4_max;
    int m_humi1_avg;
    int m_humi1_min;
    int m_humi1_max;
    int m_humi2_avg;
    int m_humi2_min;
    int m_humi2_max;
    int m_humi3_avg;
    int m_humi3_min;
    int m_humi3_max;
    int m_humi4_avg;
    int m_humi4_min;
    int m_humi4_max;
    int m_sysvol_avg;
    int m_sysvol_min;
    int m_sysvol_max;
    int m_sysele_avg;
    int m_sysele_min;
    int m_sysele_max;
    int m_loadvol_avg;
    int m_loadvol_min;
    int m_loadvol_max;
    int m_loadele_avg;
    int m_loadele_min;
    int m_loadele_max;
    int m_dcvol_avg;
    int m_dcvol_min;
    int m_dcvol_max;
    int m_aircool1_avg;
    int m_aircool1_min;
    int m_aircool1_max;
    int m_aircool2_avg;
    int m_aircool2_min;
    int m_aircool2_max;
    int m_aircool3_avg;
    int m_aircool3_min;
    int m_aircool3_max;
    int m_aircool4_avg;
    int m_aircool4_min;
    int m_aircool4_max;
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

#endif // U_DEVICE_DAY_REPORT_H
