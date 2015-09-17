#ifndef U_DVR_REAL_VALUE_H
#define U_DVR_REAL_VALUE_H

#include <QObject>
#include <appLayer/structData.h>
class U_DVR_Real_Value: public QObject
{
    Q_OBJECT
    Q_PROPERTY(int id READ id WRITE setID)
    Q_PROPERTY(QString mtimestamp READ timestamp WRITE setTimestamp)
    Q_PROPERTY(double dvr_sag_voltage_a READ dvr_sag_voltage_a WRITE setDvr_sag_voltage_a )
    Q_PROPERTY(double dvr_sag_voltage_b READ dvr_sag_voltage_b WRITE setDvr_sag_voltage_b )
    Q_PROPERTY(double dvr_sag_voltage_c READ dvr_sag_voltage_c WRITE setDvr_sag_voltage_c )
    Q_PROPERTY(double dvr_source_current_a READ dvr_source_current_a WRITE setDvr_source_current_a )
    Q_PROPERTY(double dvr_source_current_b READ dvr_source_current_b WRITE setDvr_source_current_b )
    Q_PROPERTY(double dvr_source_current_c READ dvr_source_current_c WRITE setDvr_source_current_c )
    Q_PROPERTY(double dvr_load_output_voltage_a READ dvr_load_output_voltage_a WRITE setDvr_load_output_voltage_a )
    Q_PROPERTY(double dvr_load_output_voltage_b READ dvr_load_output_voltage_b WRITE setDvr_load_output_voltage_b )
    Q_PROPERTY(double dvr_load_output_voltage_c READ dvr_load_output_voltage_c WRITE setDvr_load_output_voltage_c )
    Q_PROPERTY(double dvr_load_output_current_a READ dvr_load_output_current_a WRITE setDvr_load_output_current_a )
    Q_PROPERTY(double dvr_load_output_current_b READ dvr_load_output_current_b WRITE setDvr_load_output_current_b )
    Q_PROPERTY(double dvr_load_output_current_c READ dvr_load_output_current_c WRITE setDvr_load_output_current_c )
    Q_PROPERTY(double dvr_power_group_output_voltage_a READ dvr_power_group_output_voltage_a WRITE setDvr_power_group_output_voltage_a )
    Q_PROPERTY(double dvr_power_group_output_voltage_b READ dvr_power_group_output_voltage_b WRITE setDvr_power_group_output_voltage_b )
    Q_PROPERTY(double dvr_power_group_output_voltage_c READ dvr_power_group_output_voltage_c WRITE setDvr_power_group_output_voltage_c )
    Q_PROPERTY(double dvr_power_group_output_current_a READ dvr_power_group_output_current_a WRITE setDvr_power_group_output_current_a )
    Q_PROPERTY(double dvr_power_group_output_current_b READ dvr_power_group_output_current_b WRITE setDvr_power_group_output_current_b )
    Q_PROPERTY(double dvr_power_group_output_current_c READ dvr_power_group_output_current_c WRITE setDvr_power_group_output_current_c )
    Q_PROPERTY(double dvr_ebt_current_a READ dvr_ebt_current_a WRITE setDvr_ebt_current_a )
    Q_PROPERTY(double dvr_ebt_current_b READ dvr_ebt_current_b WRITE setDvr_ebt_current_b )
    Q_PROPERTY(double dvr_ebt_current_c READ dvr_ebt_current_c WRITE setDvr_ebt_current_c )

    Q_PROPERTY(double dvr_dc_a1 READ dvr_dc_a1 WRITE setDvr_dc_a1)
    Q_PROPERTY(double dvr_dc_a2 READ dvr_dc_a1 WRITE setDvr_dc_a2)
    Q_PROPERTY(double dvr_dc_a3 READ dvr_dc_a1 WRITE setDvr_dc_a3)
    Q_PROPERTY(double dvr_dc_a4 READ dvr_dc_a1 WRITE setDvr_dc_a4)
    Q_PROPERTY(double dvr_dc_a5 READ dvr_dc_a1 WRITE setDvr_dc_a5)
    Q_PROPERTY(double dvr_dc_a6 READ dvr_dc_a1 WRITE setDvr_dc_a6)
    Q_PROPERTY(double dvr_dc_b1 READ dvr_dc_b1 WRITE setDvr_dc_b1)
    Q_PROPERTY(double dvr_dc_b2 READ dvr_dc_b2 WRITE setDvr_dc_b2)
    Q_PROPERTY(double dvr_dc_b3 READ dvr_dc_b3 WRITE setDvr_dc_b3)
    Q_PROPERTY(double dvr_dc_b4 READ dvr_dc_b4 WRITE setDvr_dc_b4)
    Q_PROPERTY(double dvr_dc_b5 READ dvr_dc_b5 WRITE setDvr_dc_b5)
    Q_PROPERTY(double dvr_dc_b6 READ dvr_dc_b6 WRITE setDvr_dc_b6)
    Q_PROPERTY(double dvr_dc_c1 READ dvr_dc_c1 WRITE setDvr_dc_c1)
    Q_PROPERTY(double dvr_dc_c2 READ dvr_dc_c2 WRITE setDvr_dc_c2)
    Q_PROPERTY(double dvr_dc_c3 READ dvr_dc_c3 WRITE setDvr_dc_c3)
    Q_PROPERTY(double dvr_dc_c4 READ dvr_dc_c4 WRITE setDvr_dc_c4)
    Q_PROPERTY(double dvr_dc_c5 READ dvr_dc_c5 WRITE setDvr_dc_c5)
    Q_PROPERTY(double dvr_dc_c6 READ dvr_dc_c6 WRITE setDvr_dc_c6)

    Q_PROPERTY(double dvr_value_empty1 READ dvr_value_empty1 WRITE setDvr_value_empty1)
    Q_PROPERTY(double dvr_value_empty2 READ dvr_value_empty2 WRITE setDvr_value_empty2)
    Q_PROPERTY(double dvr_value_empty3 READ dvr_value_empty3 WRITE setDvr_value_empty3)
    Q_PROPERTY(double dvr_value_empty4 READ dvr_value_empty4 WRITE setDvr_value_empty4)
    Q_PROPERTY(double dvr_value_empty5 READ dvr_value_empty5 WRITE setDvr_value_empty5)
    Q_PROPERTY(double dvr_value_empty6 READ dvr_value_empty6 WRITE setDvr_value_empty6)
public:
    U_DVR_Real_Value(QObject *parent = 0);
    U_DVR_Real_Value(DVR_DEVICE_DATA t, QObject *parent = 0);
    Q_INVOKABLE int id(){return m_id;}
    Q_INVOKABLE QString timestamp(){ return m_timestamp;}
    Q_INVOKABLE void setID(int d_id){m_id = d_id;}
    Q_INVOKABLE void setTimestamp(QString t_time){m_timestamp = t_time;}
    Q_INVOKABLE double dvr_sag_voltage_a(){return data.dvr_sag_voltage_a;}

    Q_INVOKABLE double dvr_sag_voltage_b(){return data.dvr_sag_voltage_b;}

    Q_INVOKABLE double dvr_sag_voltage_c(){return data.dvr_sag_voltage_c;}

    Q_INVOKABLE double dvr_source_current_a(){return data.dvr_source_current_a;}

    Q_INVOKABLE double dvr_source_current_b(){return data.dvr_source_current_b;}

    Q_INVOKABLE double dvr_source_current_c(){return data.dvr_source_current_c;}

    Q_INVOKABLE double dvr_load_output_voltage_a(){return data.dvr_load_output_voltage_a;}

    Q_INVOKABLE double dvr_load_output_voltage_b(){return data.dvr_load_output_voltage_b;}

    Q_INVOKABLE double dvr_load_output_voltage_c(){return data.dvr_load_output_voltage_c;}

    Q_INVOKABLE double dvr_load_output_current_a(){return data.dvr_load_output_current_a;}

    Q_INVOKABLE double dvr_load_output_current_b(){return data.dvr_load_output_current_b;}

    Q_INVOKABLE double dvr_load_output_current_c(){return data.dvr_load_output_current_c;}

    Q_INVOKABLE double dvr_power_group_output_current_a(){return data.dvr_power_group_output_current_a;}

    Q_INVOKABLE double dvr_power_group_output_current_b(){return data.dvr_power_group_output_current_b;}

    Q_INVOKABLE double dvr_power_group_output_current_c(){return data.dvr_power_group_output_current_c;}

    Q_INVOKABLE double dvr_power_group_output_voltage_a(){return data.dvr_power_group_output_voltage_a;}

    Q_INVOKABLE double dvr_power_group_output_voltage_b(){return data.dvr_power_group_output_voltage_b;}

    Q_INVOKABLE double dvr_power_group_output_voltage_c(){return data.dvr_power_group_output_voltage_c;}

    Q_INVOKABLE double dvr_ebt_current_a(){return data.dvr_ebt_current_a;}
    Q_INVOKABLE double dvr_ebt_current_b(){return data.dvr_ebt_current_b;}
    Q_INVOKABLE double dvr_ebt_current_c(){return data.dvr_ebt_current_c;}
    Q_INVOKABLE double dvr_dc_a1(){return data.dvr_dc_a1;}
    Q_INVOKABLE double dvr_dc_a2(){return data.dvr_dc_a2;}
    Q_INVOKABLE double dvr_dc_a3(){return data.dvr_dc_a3;}
    Q_INVOKABLE double dvr_dc_a4(){return data.dvr_dc_a4;}
    Q_INVOKABLE double dvr_dc_a5(){return data.dvr_dc_a5;}
    Q_INVOKABLE double dvr_dc_a6(){return data.dvr_dc_a6;}
    Q_INVOKABLE double dvr_dc_b1(){return data.dvr_dc_b1;}
    Q_INVOKABLE double dvr_dc_b2(){return data.dvr_dc_b2;}
    Q_INVOKABLE double dvr_dc_b3(){return data.dvr_dc_b3;}
    Q_INVOKABLE double dvr_dc_b4(){return data.dvr_dc_b4;}
    Q_INVOKABLE double dvr_dc_b5(){return data.dvr_dc_b5;}
    Q_INVOKABLE double dvr_dc_b6(){return data.dvr_dc_b6;}
    Q_INVOKABLE double dvr_dc_c1(){return data.dvr_dc_c1;}
    Q_INVOKABLE double dvr_dc_c2(){return data.dvr_dc_c2;}
    Q_INVOKABLE double dvr_dc_c3(){return data.dvr_dc_c3;}
    Q_INVOKABLE double dvr_dc_c4(){return data.dvr_dc_c4;}
    Q_INVOKABLE double dvr_dc_c5(){return data.dvr_dc_c5;}
    Q_INVOKABLE double dvr_dc_c6(){return data.dvr_dc_c6;}
    Q_INVOKABLE double dvr_value_empty1(){return data.value_empty1;}
    Q_INVOKABLE double dvr_value_empty2(){return data.value_empty2;}
    Q_INVOKABLE double dvr_value_empty3(){return data.value_empty3;}
    Q_INVOKABLE double dvr_value_empty4(){return data.value_empty4;}
    Q_INVOKABLE double dvr_value_empty5(){return data.value_empty5;}
    Q_INVOKABLE double dvr_value_empty6(){return data.value_empty6;}
    Q_INVOKABLE void setDvr_sag_voltage_a(double d){data.dvr_sag_voltage_a = d;}
    Q_INVOKABLE void setDvr_sag_voltage_b(double d){data.dvr_sag_voltage_b = d;}
    Q_INVOKABLE void setDvr_sag_voltage_c(double d){data.dvr_sag_voltage_c = d;}
    Q_INVOKABLE void setDvr_source_current_a(double d){data.dvr_source_current_a =d;}
    Q_INVOKABLE void setDvr_source_current_b(double d){data.dvr_source_current_b = d;}
    Q_INVOKABLE void setDvr_source_current_c(double d){data.dvr_source_current_c = d;}
    Q_INVOKABLE void setDvr_load_output_voltage_a(double d){data.dvr_load_output_voltage_a = d;}
    Q_INVOKABLE void setDvr_load_output_voltage_b(double d){data.dvr_load_output_voltage_b = d;}
    Q_INVOKABLE void setDvr_load_output_voltage_c(double d){data.dvr_load_output_voltage_c = d;}
    Q_INVOKABLE void setDvr_load_output_current_a(double d){data.dvr_load_output_current_a = d;}
    Q_INVOKABLE void setDvr_load_output_current_b(double d){data.dvr_load_output_current_b = d;}
    Q_INVOKABLE void setDvr_load_output_current_c(double d){data.dvr_load_output_current_c = d;}
    Q_INVOKABLE void setDvr_power_group_output_current_a(double d){data.dvr_power_group_output_current_a = d;}
    Q_INVOKABLE void setDvr_power_group_output_current_b(double d){data.dvr_power_group_output_current_b = d;}
    Q_INVOKABLE void setDvr_power_group_output_current_c(double d){data.dvr_power_group_output_current_c = d;}
    Q_INVOKABLE void setDvr_power_group_output_voltage_a(double d){data.dvr_power_group_output_voltage_a = d;}
    Q_INVOKABLE void setDvr_power_group_output_voltage_b(double d){data.dvr_power_group_output_voltage_b = d;}
    Q_INVOKABLE void setDvr_power_group_output_voltage_c(double d){data.dvr_power_group_output_voltage_c = d;}
    Q_INVOKABLE void setDvr_ebt_current_a(double d){data.dvr_ebt_current_a = d;}
    Q_INVOKABLE void setDvr_ebt_current_b(double d){data.dvr_ebt_current_b = d;}
    Q_INVOKABLE void setDvr_ebt_current_c(double d){data.dvr_ebt_current_c = d;}
    Q_INVOKABLE void setDvr_dc_a1(double d){data.dvr_dc_a1 = d;}
    Q_INVOKABLE void setDvr_dc_a2(double d){data.dvr_dc_a2 = d;}
    Q_INVOKABLE void setDvr_dc_a3(double d){data.dvr_dc_a3 = d;}
    Q_INVOKABLE void setDvr_dc_a4(double d){data.dvr_dc_a4 = d;}
    Q_INVOKABLE void setDvr_dc_a5(double d){data.dvr_dc_a5 = d;}
    Q_INVOKABLE void setDvr_dc_a6(double d){data.dvr_dc_a6 = d;}
    Q_INVOKABLE void setDvr_dc_b1(double d){data.dvr_dc_b1 = d;}
    Q_INVOKABLE void setDvr_dc_b2(double d){data.dvr_dc_b2 = d;}
    Q_INVOKABLE void setDvr_dc_b3(double d){data.dvr_dc_b3 = d;}
    Q_INVOKABLE void setDvr_dc_b4(double d){data.dvr_dc_b4 = d;}
    Q_INVOKABLE void setDvr_dc_b5(double d){data.dvr_dc_b5 = d;}
    Q_INVOKABLE void setDvr_dc_b6(double d){data.dvr_dc_b6 = d;}
    Q_INVOKABLE void setDvr_dc_c1(double d){data.dvr_dc_c1 = d;}
    Q_INVOKABLE void setDvr_dc_c2(double d){data.dvr_dc_c2 = d;}
    Q_INVOKABLE void setDvr_dc_c3(double d){data.dvr_dc_c3 = d;}
    Q_INVOKABLE void setDvr_dc_c4(double d){data.dvr_dc_c4 = d;}
    Q_INVOKABLE void setDvr_dc_c5(double d){data.dvr_dc_c5 = d;}
    Q_INVOKABLE void setDvr_dc_c6(double d){data.dvr_dc_c6 = d;}
    Q_INVOKABLE void setDvr_value_empty1(double d){data.value_empty1 = d;}
    Q_INVOKABLE void setDvr_value_empty2(double d){data.value_empty2 = d;}
    Q_INVOKABLE void setDvr_value_empty3(double d){data.value_empty3 = d;}
    Q_INVOKABLE void setDvr_value_empty4(double d){data.value_empty4 = d;}
    Q_INVOKABLE void setDvr_value_empty5(double d){data.value_empty5 = d;}
    Q_INVOKABLE void setDvr_value_empty6(double d){data.value_empty6 = d;}
private:
    int m_id;
    QString m_timestamp;
    DVR_DEVICE_DATA data;
};

#endif // U_DVR_REAL_VALUE_H
