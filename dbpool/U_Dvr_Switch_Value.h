#ifndef U_DVR_SWITCH_VALUE_H
#define U_DVR_SWITCH_VALUE_H

#include <QObject>
#include "appLayer/structData.h"
class U_DVR_Switch_Value : public QObject
{
    Q_OBJECT
    Q_PROPERTY(int id READ id WRITE setID)
    Q_PROPERTY(QString mtimestamp READ timestamp WRITE setTimestamp)
    Q_PROPERTY(int dvr_status READ dvr_status WRITE setDvr_status )
    Q_PROPERTY(int dvr_bypass_cabinet_blower READ dvr_bypass_cabinet_blower WRITE setDvr_bypass_cabinet_blower)
    Q_PROPERTY(int dvr_transformer_status READ dvr_transformer_status WRITE setDvr_transformer_status)
    Q_PROPERTY(int dvr_controller_power_1 READ dvr_controller_power_1 WRITE setDvr_controller_power_1)
    Q_PROPERTY(int dvr_controller_power_2 READ dvr_controller_power_2 WRITE setDvr_controller_power_2)
    Q_PROPERTY(int dvr_15v_1 READ dvr_15v_1 WRITE setDvr_15v_1)
    Q_PROPERTY(int dvr_15v_2 READ dvr_15v_2 WRITE setDvr_15v_2)
    Q_PROPERTY(int dvr_ac380 READ dvr_ac380 WRITE setDvr_ac380)
    Q_PROPERTY(int dvr_plc_link READ dvr_plc_link WRITE setDvr_plc_link)
    Q_PROPERTY(int dvr_pc_link READ dvr_pc_link WRITE setDvr_pc_link)
    Q_PROPERTY(int dvr_plc_heartrate READ dvr_plc_heartrate WRITE setDvr_plc_heartrate)
    Q_PROPERTY(int dvr_system_pt_a READ dvr_system_pt_a WRITE setDvr_system_pt_a)
    Q_PROPERTY(int dvr_system_pt_b READ dvr_system_pt_b WRITE setDvr_system_pt_b)
    Q_PROPERTY(int dvr_system_pt_c READ dvr_system_pt_c WRITE setDvr_system_pt_c)
    Q_PROPERTY(int dvr_system_ct_a READ dvr_system_ct_a WRITE setDvr_system_ct_a)
    Q_PROPERTY(int dvr_system_ct_b READ dvr_system_ct_b WRITE setDvr_system_ct_b)
    Q_PROPERTY(int dvr_system_ct_c READ dvr_system_ct_c WRITE setDvr_system_ct_c)
    Q_PROPERTY(int dvr_output_pt_a READ dvr_output_pt_a WRITE setDvr_output_pt_a)
    Q_PROPERTY(int dvr_output_pt_b READ dvr_output_pt_b WRITE setDvr_output_pt_b)
    Q_PROPERTY(int dvr_output_pt_c READ dvr_output_pt_c WRITE setDvr_output_pt_c)
    Q_PROPERTY(int dvr_load_pt_a READ dvr_load_pt_a WRITE setDvr_load_pt_a)
    Q_PROPERTY(int dvr_load_pt_b READ dvr_load_pt_b WRITE setDvr_load_pt_b)
    Q_PROPERTY(int dvr_load_pt_c READ dvr_load_pt_c WRITE setDvr_load_pt_c)
    Q_PROPERTY(int dvr_fault1 READ dvr_fault1 WRITE setDvr_fault1)
    Q_PROPERTY(int dvr_fault2 READ dvr_fault2 WRITE setDvr_fault2)
    Q_PROPERTY(int dvr_sag_voltage_a_flag READ dvr_sag_voltage_a_flag WRITE setDvr_sag_voltage_a_flag )
    Q_PROPERTY(int dvr_sag_voltage_b_flag READ dvr_sag_voltage_b_flag WRITE setDvr_sag_voltage_b_flag )
    Q_PROPERTY(int dvr_sag_voltage_c_flag READ dvr_sag_voltage_c_flag WRITE setDvr_sag_voltage_c_flag )
    Q_PROPERTY(int dvr_source_current_a_flag READ dvr_source_current_a_flag WRITE setDvr_source_current_a_flag )
    Q_PROPERTY(int dvr_source_current_b_flag READ dvr_source_current_b_flag WRITE setDvr_source_current_b_flag )
    Q_PROPERTY(int dvr_source_current_c_flag READ dvr_source_current_c_flag WRITE setDvr_source_current_c_flag )
    Q_PROPERTY(int dvr_load_output_voltage_a_flag READ dvr_load_output_voltage_a_flag WRITE setDvr_load_output_voltage_a_flag )
    Q_PROPERTY(int dvr_load_output_voltage_b_flag READ dvr_load_output_voltage_b_flag WRITE setDvr_load_output_voltage_b_flag )
    Q_PROPERTY(int dvr_load_output_voltage_c_flag READ dvr_load_output_voltage_c_flag WRITE setDvr_load_output_voltage_c_flag )
    Q_PROPERTY(int dvr_load_output_current_a_flag READ dvr_load_output_current_a_flag WRITE setDvr_load_output_current_a_flag )
    Q_PROPERTY(int dvr_load_output_current_b_flag READ dvr_load_output_current_b_flag WRITE setDvr_load_output_current_b_flag )
    Q_PROPERTY(int dvr_load_output_current_c_flag READ dvr_load_output_current_c_flag WRITE setDvr_load_output_current_c_flag )
    Q_PROPERTY(int dvr_power_group_output_voltage_a_flag READ dvr_power_group_output_voltage_a_flag WRITE setDvr_power_group_output_voltage_a_flag )
    Q_PROPERTY(int dvr_power_group_output_voltage_b_flag READ dvr_power_group_output_voltage_b_flag WRITE setDvr_power_group_output_voltage_b_flag )
    Q_PROPERTY(int dvr_power_group_output_voltage_c_flag READ dvr_power_group_output_voltage_c_flag WRITE setDvr_power_group_output_voltage_c_flag )
    Q_PROPERTY(int dvr_power_group_output_current_a_flag READ dvr_power_group_output_current_a_flag WRITE setDvr_power_group_output_current_a_flag )
    Q_PROPERTY(int dvr_power_group_output_current_b_flag READ dvr_power_group_output_current_b_flag WRITE setDvr_power_group_output_current_b_flag )
    Q_PROPERTY(int dvr_power_group_output_current_c_flag READ dvr_power_group_output_current_c_flag WRITE setDvr_power_group_output_current_c_flag )
    Q_PROPERTY(int dvr_ebt_current_a_flag READ dvr_ebt_current_a_flag WRITE setDvr_ebt_current_a_flag )
    Q_PROPERTY(int dvr_ebt_current_b_flag READ dvr_ebt_current_b_flag WRITE setDvr_ebt_current_b_flag )
    Q_PROPERTY(int dvr_ebt_current_c_flag READ dvr_ebt_current_c_flag WRITE setDvr_ebt_current_c_flag )

    Q_PROPERTY(int dvr_hbridge_power_unit_a1 READ dvr_hbridge_power_unit_a1 WRITE setDvr_hbridge_power_unit_a1 )
    Q_PROPERTY(int dvr_hbridge_power_unit_a2 READ dvr_hbridge_power_unit_a2 WRITE setDvr_hbridge_power_unit_a2 )
    Q_PROPERTY(int dvr_hbridge_power_unit_a3 READ dvr_hbridge_power_unit_a3 WRITE setDvr_hbridge_power_unit_a3 )
    Q_PROPERTY(int dvr_hbridge_power_unit_a4 READ dvr_hbridge_power_unit_a4 WRITE setDvr_hbridge_power_unit_a4 )
    Q_PROPERTY(int dvr_hbridge_power_unit_a5 READ dvr_hbridge_power_unit_a5 WRITE setDvr_hbridge_power_unit_a5 )
    Q_PROPERTY(int dvr_hbridge_power_unit_a6 READ dvr_hbridge_power_unit_a6 WRITE setDvr_hbridge_power_unit_a6 )
    Q_PROPERTY(int dvr_hbridge_power_unit_b1 READ dvr_hbridge_power_unit_b1 WRITE setDvr_hbridge_power_unit_b1 )
    Q_PROPERTY(int dvr_hbridge_power_unit_b2 READ dvr_hbridge_power_unit_b2 WRITE setDvr_hbridge_power_unit_b2 )
    Q_PROPERTY(int dvr_hbridge_power_unit_b3 READ dvr_hbridge_power_unit_b3 WRITE setDvr_hbridge_power_unit_b3 )
    Q_PROPERTY(int dvr_hbridge_power_unit_b4 READ dvr_hbridge_power_unit_b4 WRITE setDvr_hbridge_power_unit_b4)
    Q_PROPERTY(int dvr_hbridge_power_unit_b5 READ dvr_hbridge_power_unit_b5 WRITE setDvr_hbridge_power_unit_b5 )
    Q_PROPERTY(int dvr_hbridge_power_unit_b6 READ dvr_hbridge_power_unit_b6 WRITE setDvr_hbridge_power_unit_b6 )
    Q_PROPERTY(int dvr_hbridge_power_unit_c1 READ dvr_hbridge_power_unit_c1 WRITE setDvr_hbridge_power_unit_c1 )
    Q_PROPERTY(int dvr_hbridge_power_unit_c2 READ dvr_hbridge_power_unit_c2 WRITE setDvr_hbridge_power_unit_c2 )
    Q_PROPERTY(int dvr_hbridge_power_unit_c3 READ dvr_hbridge_power_unit_c3 WRITE setDvr_hbridge_power_unit_c3 )
    Q_PROPERTY(int dvr_hbridge_power_unit_c4 READ dvr_hbridge_power_unit_c4 WRITE setDvr_hbridge_power_unit_c4 )
    Q_PROPERTY(int dvr_hbridge_power_unit_c5 READ dvr_hbridge_power_unit_c5 WRITE setDvr_hbridge_power_unit_c5 )
    Q_PROPERTY(int dvr_hbridge_power_unit_c6 READ dvr_hbridge_power_unit_c6 WRITE setDvr_hbridge_power_unit_c6 )

    Q_PROPERTY(int dvr_bypass_circurt_a1 READ dvr_bypass_circurt_a1 WRITE setDvr_bypass_circurt_a1 )
    Q_PROPERTY(int dvr_bypass_circurt_a2 READ dvr_bypass_circurt_a2 WRITE setDvr_bypass_circurt_a2 )
    Q_PROPERTY(int dvr_bypass_circurt_a3 READ dvr_bypass_circurt_a3 WRITE setDvr_bypass_circurt_a3 )
    Q_PROPERTY(int dvr_bypass_circurt_a4 READ dvr_bypass_circurt_a4 WRITE setDvr_bypass_circurt_a4 )
    Q_PROPERTY(int dvr_bypass_circurt_a5 READ dvr_bypass_circurt_a5 WRITE setDvr_bypass_circurt_a5 )
    Q_PROPERTY(int dvr_bypass_circurt_a6 READ dvr_bypass_circurt_a6 WRITE setDvr_bypass_circurt_a6 )
    Q_PROPERTY(int dvr_bypass_circurt_b1 READ dvr_bypass_circurt_b1 WRITE setDvr_bypass_circurt_b1 )
    Q_PROPERTY(int dvr_bypass_circurt_b2 READ dvr_bypass_circurt_b2 WRITE setDvr_bypass_circurt_b2 )
    Q_PROPERTY(int dvr_bypass_circurt_b3 READ dvr_bypass_circurt_b3 WRITE setDvr_bypass_circurt_b3 )
    Q_PROPERTY(int dvr_bypass_circurt_b4 READ dvr_bypass_circurt_b4 WRITE setDvr_bypass_circurt_b4 )
    Q_PROPERTY(int dvr_bypass_circurt_b5 READ dvr_bypass_circurt_b5 WRITE setDvr_bypass_circurt_b5 )
    Q_PROPERTY(int dvr_bypass_circurt_b6 READ dvr_bypass_circurt_b6 WRITE setDvr_bypass_circurt_b6 )
    Q_PROPERTY(int dvr_bypass_circurt_c1 READ dvr_bypass_circurt_c1 WRITE setDvr_bypass_circurt_c1 )
    Q_PROPERTY(int dvr_bypass_circurt_c2 READ dvr_bypass_circurt_c2 WRITE setDvr_bypass_circurt_c2 )
    Q_PROPERTY(int dvr_bypass_circurt_c3 READ dvr_bypass_circurt_c3 WRITE setDvr_bypass_circurt_c3 )
    Q_PROPERTY(int dvr_bypass_circurt_c4 READ dvr_bypass_circurt_c4 WRITE setDvr_bypass_circurt_c4 )
    Q_PROPERTY(int dvr_bypass_circurt_c5 READ dvr_bypass_circurt_c5 WRITE setDvr_bypass_circurt_c5 )
    Q_PROPERTY(int dvr_bypass_circurt_c6 READ dvr_bypass_circurt_c6 WRITE setDvr_bypass_circurt_c6 )

    Q_PROPERTY(int dvr_km_1 READ dvr_km_1 WRITE setDvr_km_1 )
    Q_PROPERTY(int dvr_km_2 READ dvr_km_2 WRITE setDvr_km_2 )
    Q_PROPERTY(int dvr_km_3 READ dvr_km_3 WRITE setDvr_km_3 )
    Q_PROPERTY(int dvr_km_4 READ dvr_km_4 WRITE setDvr_km_4 )
    Q_PROPERTY(int dvr_qf_1 READ dvr_qf_1 WRITE setDvr_qf_1 )
    Q_PROPERTY(int dvr_qs_1 READ dvr_qs_1 WRITE setDvr_qs_1 )
    Q_PROPERTY(int dvr_qs_2 READ dvr_qs_2 WRITE setDvr_qs_2 )
    Q_PROPERTY(int dvr_qs_3 READ dvr_qs_3 WRITE setDvr_qs_3 )
    Q_PROPERTY(int dvr_qs_4 READ dvr_qs_4 WRITE setDvr_qs_4 )
    Q_PROPERTY(int dvr_qs_5 READ dvr_qs_5 WRITE setDvr_qs_5 )
    Q_PROPERTY(int dvr_d_01 READ dvr_d_01 WRITE setDvr_d_01)
    Q_PROPERTY(int dvr_d_02 READ dvr_d_02 WRITE setDvr_d_02)
    Q_PROPERTY(int dvr_f_02 READ dvr_f_02 WRITE setDvr_f_02)
    Q_PROPERTY(int dvr_f_03 READ dvr_f_03 WRITE setDvr_f_03)

    Q_PROPERTY(int status_empty1 READ status_empty1 WRITE setStatus_empty1)
    Q_PROPERTY(int status_empty2 READ status_empty2 WRITE setStatus_empty2)
    Q_PROPERTY(int status_empty3 READ status_empty3 WRITE setStatus_empty3)
    Q_PROPERTY(int status_empty4 READ status_empty4 WRITE setStatus_empty4)
    Q_PROPERTY(int status_empty5 READ status_empty5 WRITE setStatus_empty5)
    Q_PROPERTY(int status_empty6 READ status_empty6 WRITE setStatus_empty6)
public:
    U_DVR_Switch_Value(QObject *parent = 0);
    U_DVR_Switch_Value(DVR_DEVICE_DATA data, QObject* parent = 0);
    Q_INVOKABLE int id(){return m_id;}
    Q_INVOKABLE QString timestamp(){return m_timestamp;}
    Q_INVOKABLE void setID(int id){m_id = id;}
    Q_INVOKABLE void setTimestamp(QString time){m_timestamp = time;}
    Q_INVOKABLE int dvr_status(){return data.dvr_status;}
    Q_INVOKABLE int dvr_bypass_cabinet_blower(){return data.dvr_bypass_cabinet_blower;}
    Q_INVOKABLE int dvr_transformer_status(){return data.dvr_transformer_status;}
    Q_INVOKABLE int dvr_controller_power_1(){return data.dvr_controller_power_1;}
    Q_INVOKABLE int dvr_controller_power_2(){return data.dvr_controller_power_2;}
    Q_INVOKABLE int dvr_15v_1(){return data.dvr_15v_1;}
    Q_INVOKABLE int dvr_15v_2(){return data.dvr_15v_2;}
    Q_INVOKABLE int dvr_ac380(){return data.dvr_ac380;}
    Q_INVOKABLE int dvr_plc_link(){return data.dvr_plc_link;}
    Q_INVOKABLE int dvr_pc_link(){return data.dvr_pc_link;}
    Q_INVOKABLE int dvr_plc_heartrate(){return data.dvr_plc_heartrate;}
    Q_INVOKABLE int dvr_system_pt_a(){return data.dvr_system_pt_a;}
    Q_INVOKABLE int dvr_system_pt_b(){return data.dvr_system_pt_b;}
    Q_INVOKABLE int dvr_system_pt_c(){return data.dvr_system_pt_c;}
    Q_INVOKABLE int dvr_system_ct_a(){return data.dvr_system_ct_a;}
    Q_INVOKABLE int dvr_system_ct_b(){return data.dvr_system_ct_b;}
    Q_INVOKABLE int dvr_system_ct_c(){return data.dvr_system_ct_c;}
    Q_INVOKABLE int dvr_output_pt_a(){return data.dvr_output_pt_a;}
    Q_INVOKABLE int dvr_output_pt_b(){return data.dvr_output_pt_b;}
    Q_INVOKABLE int dvr_output_pt_c(){return data.dvr_output_pt_c;}
    Q_INVOKABLE int dvr_load_pt_a(){return data.dvr_load_pt_a;}
    Q_INVOKABLE int dvr_load_pt_b(){return data.dvr_load_pt_b;}
    Q_INVOKABLE int dvr_load_pt_c(){return data.dvr_load_pt_c;}
    Q_INVOKABLE int dvr_fault1(){return data.dvr_fault1;}
    Q_INVOKABLE int dvr_fault2(){return data.dvr_fault2;}
    Q_INVOKABLE int dvr_sag_voltage_a_flag(){return data.dvr_sag_voltage_a_flag;}
    Q_INVOKABLE int dvr_sag_voltage_b_flag(){return data.dvr_sag_voltage_b_flag;}
    Q_INVOKABLE int dvr_sag_voltage_c_flag(){return data.dvr_sag_voltage_c_flag;}
    Q_INVOKABLE int dvr_source_current_a_flag(){return data.dvr_source_current_a_flag;}
    Q_INVOKABLE int dvr_source_current_b_flag(){return data.dvr_source_current_b_flag;}
    Q_INVOKABLE int dvr_source_current_c_flag(){return data.dvr_source_current_c_flag;}
    Q_INVOKABLE int dvr_load_output_voltage_a_flag(){return data.dvr_load_output_voltage_a_flag;}
    Q_INVOKABLE int dvr_load_output_voltage_b_flag(){return data.dvr_load_output_voltage_b_flag;}
    Q_INVOKABLE int dvr_load_output_voltage_c_flag(){return data.dvr_load_output_voltage_c_flag;}
    Q_INVOKABLE int dvr_load_output_current_a_flag(){return data.dvr_load_output_current_a_flag;}
    Q_INVOKABLE int dvr_load_output_current_b_flag(){return data.dvr_load_output_current_b_flag;}
    Q_INVOKABLE int dvr_load_output_current_c_flag(){return data.dvr_load_output_current_c_flag;}
    Q_INVOKABLE int dvr_power_group_output_current_a_flag(){return data.dvr_power_group_output_current_a_flag;}
    Q_INVOKABLE int dvr_power_group_output_current_b_flag(){return data.dvr_power_group_output_current_b_flag;}
    Q_INVOKABLE int dvr_power_group_output_current_c_flag(){return data.dvr_power_group_output_current_c_flag;}
    Q_INVOKABLE int dvr_power_group_output_voltage_a_flag(){return data.dvr_power_group_output_voltage_a_flag;}
    Q_INVOKABLE int dvr_power_group_output_voltage_b_flag(){return data.dvr_power_group_output_voltage_b_flag;}
    Q_INVOKABLE int dvr_power_group_output_voltage_c_flag(){return data.dvr_power_group_output_voltage_c_flag;}
    Q_INVOKABLE int dvr_ebt_current_a_flag(){return data.dvr_ebt_current_a_flag;}
    Q_INVOKABLE int dvr_ebt_current_b_flag(){return data.dvr_ebt_current_b_flag;}
    Q_INVOKABLE int dvr_ebt_current_c_flag(){return data.dvr_ebt_current_c_flag;}

    Q_INVOKABLE int dvr_hbridge_power_unit_a1(){return data.dvr_hbridge_power_unit_a1;}
    Q_INVOKABLE int dvr_hbridge_power_unit_a2(){return data.dvr_hbridge_power_unit_a2;}
    Q_INVOKABLE int dvr_hbridge_power_unit_a3(){return data.dvr_hbridge_power_unit_a3;}
    Q_INVOKABLE int dvr_hbridge_power_unit_a4(){return data.dvr_hbridge_power_unit_a4;}
    Q_INVOKABLE int dvr_hbridge_power_unit_a5(){return data.dvr_hbridge_power_unit_a5;}
    Q_INVOKABLE int dvr_hbridge_power_unit_a6(){return data.dvr_hbridge_power_unit_a6;}
    Q_INVOKABLE int dvr_hbridge_power_unit_b1(){return data.dvr_hbridge_power_unit_b1;}
    Q_INVOKABLE int dvr_hbridge_power_unit_b2(){return data.dvr_hbridge_power_unit_b2;}
    Q_INVOKABLE int dvr_hbridge_power_unit_b3(){return data.dvr_hbridge_power_unit_b3;}
    Q_INVOKABLE int dvr_hbridge_power_unit_b4(){return data.dvr_hbridge_power_unit_b4;}
    Q_INVOKABLE int dvr_hbridge_power_unit_b5(){return data.dvr_hbridge_power_unit_b5;}
    Q_INVOKABLE int dvr_hbridge_power_unit_b6(){return data.dvr_hbridge_power_unit_b6;}
    Q_INVOKABLE int dvr_hbridge_power_unit_c1(){return data.dvr_hbridge_power_unit_c1;}
    Q_INVOKABLE int dvr_hbridge_power_unit_c2(){return data.dvr_hbridge_power_unit_c2;}
    Q_INVOKABLE int dvr_hbridge_power_unit_c3(){return data.dvr_hbridge_power_unit_c3;}
    Q_INVOKABLE int dvr_hbridge_power_unit_c4(){return data.dvr_hbridge_power_unit_c4;}
    Q_INVOKABLE int dvr_hbridge_power_unit_c5(){return data.dvr_hbridge_power_unit_c5;}
    Q_INVOKABLE int dvr_hbridge_power_unit_c6(){return data.dvr_hbridge_power_unit_c6;}
    Q_INVOKABLE int dvr_bypass_circurt_a1(){return data.dvr_bypass_circurt_a1;}
    Q_INVOKABLE int dvr_bypass_circurt_a2(){return data.dvr_bypass_circurt_a2;}
    Q_INVOKABLE int dvr_bypass_circurt_a3(){return data.dvr_bypass_circurt_a3;}
    Q_INVOKABLE int dvr_bypass_circurt_a4(){return data.dvr_bypass_circurt_a4;}
    Q_INVOKABLE int dvr_bypass_circurt_a5(){return data.dvr_bypass_circurt_a5;}
    Q_INVOKABLE int dvr_bypass_circurt_a6(){return data.dvr_bypass_circurt_a6;}
    Q_INVOKABLE int dvr_bypass_circurt_b1(){return data.dvr_bypass_circurt_b1;}
    Q_INVOKABLE int dvr_bypass_circurt_b2(){return data.dvr_bypass_circurt_b2;}
    Q_INVOKABLE int dvr_bypass_circurt_b3(){return data.dvr_bypass_circurt_b3;}
    Q_INVOKABLE int dvr_bypass_circurt_b4(){return data.dvr_bypass_circurt_b4;}
    Q_INVOKABLE int dvr_bypass_circurt_b5(){return data.dvr_bypass_circurt_b5;}
    Q_INVOKABLE int dvr_bypass_circurt_b6(){return data.dvr_bypass_circurt_b6;}
    Q_INVOKABLE int dvr_bypass_circurt_c1(){return data.dvr_bypass_circurt_c1;}
    Q_INVOKABLE int dvr_bypass_circurt_c2(){return data.dvr_bypass_circurt_c2;}
    Q_INVOKABLE int dvr_bypass_circurt_c3(){return data.dvr_bypass_circurt_c3;}
    Q_INVOKABLE int dvr_bypass_circurt_c4(){return data.dvr_bypass_circurt_c4;}
    Q_INVOKABLE int dvr_bypass_circurt_c5(){return data.dvr_bypass_circurt_c5;}
    Q_INVOKABLE int dvr_bypass_circurt_c6(){return data.dvr_bypass_circurt_c6;}

    Q_INVOKABLE int dvr_km_1(){return data.dvr_km_1;}
    Q_INVOKABLE int dvr_km_2(){return data.dvr_km_2;}
    Q_INVOKABLE int dvr_km_3(){return data.dvr_km_3;}
    Q_INVOKABLE int dvr_km_4(){return data.dvr_km_4;}
    Q_INVOKABLE int dvr_qf_1(){return data.dvr_qf_1;}

    Q_INVOKABLE int dvr_qs_1(){return data.dvr_qs_1;}
    Q_INVOKABLE int dvr_qs_2(){return data.dvr_qs_2;}
    Q_INVOKABLE int dvr_qs_3(){return data.dvr_qs_3;}
    Q_INVOKABLE int dvr_qs_4(){return data.dvr_qs_4;}
    Q_INVOKABLE int dvr_qs_5(){return data.dvr_qs_5;}
    Q_INVOKABLE int dvr_d_01(){return data.dvr_d_01;}
    Q_INVOKABLE int dvr_d_02(){return data.dvr_d_02;}
    Q_INVOKABLE int dvr_f_02(){return data.dvr_f_02;}
    Q_INVOKABLE int dvr_f_03(){return data.dvr_f_03;}

    Q_INVOKABLE int status_empty1(){return data.status_empty1;}
    Q_INVOKABLE int status_empty2(){return data.status_empty2;}
    Q_INVOKABLE int status_empty3(){return data.status_empty3;}
    Q_INVOKABLE int status_empty4(){return data.status_empty4;}
    Q_INVOKABLE int status_empty5(){return data.status_empty5;}
    Q_INVOKABLE int status_empty6(){return data.status_empty6;}
    Q_INVOKABLE void setDvr_status(int n){data.dvr_status = n;}
    Q_INVOKABLE void setDvr_bypass_cabinet_blower(int n){data.dvr_bypass_cabinet_blower = n;}
    Q_INVOKABLE void setDvr_transformer_status(int n){data.dvr_transformer_status = n;}
    Q_INVOKABLE void setDvr_controller_power_1(int n){data.dvr_controller_power_1 = n;}
    Q_INVOKABLE void setDvr_controller_power_2(int n){data.dvr_controller_power_2 = n;}
    Q_INVOKABLE void setDvr_15v_1(int n){data.dvr_15v_1 = n;}
    Q_INVOKABLE void setDvr_15v_2(int n){data.dvr_15v_2 = n;}
    Q_INVOKABLE void setDvr_ac380(int n){data.dvr_ac380 = n;}
    Q_INVOKABLE void setDvr_plc_link(int n){data.dvr_plc_link = n;}
    Q_INVOKABLE void setDvr_pc_link(int n){data.dvr_pc_link = n;}
    Q_INVOKABLE void setDvr_plc_heartrate(int n){data.dvr_plc_heartrate = n;}
    Q_INVOKABLE void setDvr_system_pt_a(int n){data.dvr_system_pt_a = n;}
    Q_INVOKABLE void setDvr_system_pt_b(int n){data.dvr_system_pt_b = n;}
    Q_INVOKABLE void setDvr_system_pt_c(int n){data.dvr_system_pt_c = n;}
    Q_INVOKABLE void setDvr_system_ct_a(int n){data.dvr_system_ct_a = n;}
    Q_INVOKABLE void setDvr_system_ct_b(int n){data.dvr_system_ct_b = n;}
    Q_INVOKABLE void setDvr_system_ct_c(int n){data.dvr_system_ct_c = n;}
    Q_INVOKABLE void setDvr_output_pt_a(int n){data.dvr_output_pt_a = n;}
    Q_INVOKABLE void setDvr_output_pt_b(int n){data.dvr_output_pt_b = n;}
    Q_INVOKABLE void setDvr_output_pt_c(int n){data.dvr_output_pt_c = n;}
    Q_INVOKABLE void setDvr_load_pt_a(int n){data.dvr_load_pt_a = n;}
    Q_INVOKABLE void setDvr_load_pt_b(int n){data.dvr_load_pt_b = n;}
    Q_INVOKABLE void setDvr_load_pt_c(int n){data.dvr_load_pt_c = n;}
    Q_INVOKABLE void setDvr_fault1(int n){data.dvr_fault1 = n;}
    Q_INVOKABLE void setDvr_fault2(int n){data.dvr_fault2 = n;}
    Q_INVOKABLE void setDvr_sag_voltage_a_flag(int n){data.dvr_sag_voltage_a_flag = n;}
    Q_INVOKABLE void setDvr_sag_voltage_b_flag(int n){data.dvr_sag_voltage_b_flag = n;}
    Q_INVOKABLE void setDvr_sag_voltage_c_flag(int n){data.dvr_sag_voltage_c_flag = n;}
    Q_INVOKABLE void setDvr_source_current_a_flag(int n){data.dvr_source_current_a_flag = n;}
    Q_INVOKABLE void setDvr_source_current_b_flag(int n){data.dvr_source_current_b_flag = n;}
    Q_INVOKABLE void setDvr_source_current_c_flag(int n){data.dvr_source_current_c_flag = n;}
    Q_INVOKABLE void setDvr_load_output_voltage_a_flag(int n){data.dvr_load_output_voltage_a_flag = n;}
    Q_INVOKABLE void setDvr_load_output_voltage_b_flag(int n){data.dvr_load_output_voltage_b_flag = n;}
    Q_INVOKABLE void setDvr_load_output_voltage_c_flag(int n){data.dvr_load_output_voltage_c_flag = n;}
    Q_INVOKABLE void setDvr_load_output_current_a_flag(int n){data.dvr_load_output_current_a_flag = n;}
    Q_INVOKABLE void setDvr_load_output_current_b_flag(int n){data.dvr_load_output_current_b_flag = n;}
    Q_INVOKABLE void setDvr_load_output_current_c_flag(int n){data.dvr_load_output_current_c_flag = n;}
    Q_INVOKABLE void setDvr_power_group_output_current_a_flag(int n){data.dvr_power_group_output_current_a_flag = n;}
    Q_INVOKABLE void setDvr_power_group_output_current_b_flag(int n){data.dvr_power_group_output_current_b_flag = n;}
    Q_INVOKABLE void setDvr_power_group_output_current_c_flag(int n){data.dvr_power_group_output_current_c_flag = n;}
    Q_INVOKABLE void setDvr_power_group_output_voltage_a_flag(int n){data.dvr_power_group_output_voltage_a_flag = n;}
    Q_INVOKABLE void setDvr_power_group_output_voltage_b_flag(int n){data.dvr_power_group_output_voltage_b_flag = n;}
    Q_INVOKABLE void setDvr_power_group_output_voltage_c_flag(int n){data.dvr_power_group_output_voltage_c_flag = n;}
    Q_INVOKABLE void setDvr_ebt_current_a_flag(int n){data.dvr_ebt_current_a_flag = n;}
    Q_INVOKABLE void setDvr_ebt_current_b_flag(int n){data.dvr_ebt_current_b_flag = n;}
    Q_INVOKABLE void setDvr_ebt_current_c_flag(int n){data.dvr_ebt_current_c_flag = n;}

    Q_INVOKABLE void setDvr_hbridge_power_unit_a1(int n){data.dvr_hbridge_power_unit_a1 = n;}
    Q_INVOKABLE void setDvr_hbridge_power_unit_a2(int n){data.dvr_hbridge_power_unit_a2 = n;}
    Q_INVOKABLE void setDvr_hbridge_power_unit_a3(int n){data.dvr_hbridge_power_unit_a3 = n;}
    Q_INVOKABLE void setDvr_hbridge_power_unit_a4(int n){data.dvr_hbridge_power_unit_a4 = n;}
    Q_INVOKABLE void setDvr_hbridge_power_unit_a5(int n){data.dvr_hbridge_power_unit_a5 = n;}
    Q_INVOKABLE void setDvr_hbridge_power_unit_a6(int n){data.dvr_hbridge_power_unit_a6 = n;}
    Q_INVOKABLE void setDvr_hbridge_power_unit_b1(int n){data.dvr_hbridge_power_unit_b1 = n;}
    Q_INVOKABLE void setDvr_hbridge_power_unit_b2(int n){data.dvr_hbridge_power_unit_b2 = n;}
    Q_INVOKABLE void setDvr_hbridge_power_unit_b3(int n){data.dvr_hbridge_power_unit_b3 = n;}
    Q_INVOKABLE void setDvr_hbridge_power_unit_b4(int n){data.dvr_hbridge_power_unit_b4 = n;}
    Q_INVOKABLE void setDvr_hbridge_power_unit_b5(int n){data.dvr_hbridge_power_unit_b5 = n;}
    Q_INVOKABLE void setDvr_hbridge_power_unit_b6(int n){data.dvr_hbridge_power_unit_b6 = n;}
    Q_INVOKABLE void setDvr_hbridge_power_unit_c1(int n){data.dvr_hbridge_power_unit_c1 = n;}
    Q_INVOKABLE void setDvr_hbridge_power_unit_c2(int n){data.dvr_hbridge_power_unit_c2 = n;}
    Q_INVOKABLE void setDvr_hbridge_power_unit_c3(int n){data.dvr_hbridge_power_unit_c3 = n;}
    Q_INVOKABLE void setDvr_hbridge_power_unit_c4(int n){data.dvr_hbridge_power_unit_c4 = n;}
    Q_INVOKABLE void setDvr_hbridge_power_unit_c5(int n){data.dvr_hbridge_power_unit_c5 = n;}
    Q_INVOKABLE void setDvr_hbridge_power_unit_c6(int n){data.dvr_hbridge_power_unit_c6 = n;}

    Q_INVOKABLE void setDvr_bypass_circurt_a1(int n){data.dvr_bypass_circurt_a1 = n;}
    Q_INVOKABLE void setDvr_bypass_circurt_a2(int n){data.dvr_bypass_circurt_a2 = n;}
    Q_INVOKABLE void setDvr_bypass_circurt_a3(int n){data.dvr_bypass_circurt_a3 = n;}
    Q_INVOKABLE void setDvr_bypass_circurt_a4(int n){data.dvr_bypass_circurt_a4 = n;}
    Q_INVOKABLE void setDvr_bypass_circurt_a5(int n){data.dvr_bypass_circurt_a5 = n;}
    Q_INVOKABLE void setDvr_bypass_circurt_a6(int n){data.dvr_bypass_circurt_a6 = n;}
    Q_INVOKABLE void setDvr_bypass_circurt_b1(int n){data.dvr_bypass_circurt_b1 = n;}
    Q_INVOKABLE void setDvr_bypass_circurt_b2(int n){data.dvr_bypass_circurt_b2 = n;}
    Q_INVOKABLE void setDvr_bypass_circurt_b3(int n){data.dvr_bypass_circurt_b3 = n;}
    Q_INVOKABLE void setDvr_bypass_circurt_b4(int n){data.dvr_bypass_circurt_b4 = n;}
    Q_INVOKABLE void setDvr_bypass_circurt_b5(int n){data.dvr_bypass_circurt_b5 = n;}
    Q_INVOKABLE void setDvr_bypass_circurt_b6(int n){data.dvr_bypass_circurt_b6 = n;}
    Q_INVOKABLE void setDvr_bypass_circurt_c1(int n){data.dvr_bypass_circurt_c1 = n;}
    Q_INVOKABLE void setDvr_bypass_circurt_c2(int n){data.dvr_bypass_circurt_c2 = n;}
    Q_INVOKABLE void setDvr_bypass_circurt_c3(int n){data.dvr_bypass_circurt_c3 = n;}
    Q_INVOKABLE void setDvr_bypass_circurt_c4(int n){data.dvr_bypass_circurt_c4 = n;}
    Q_INVOKABLE void setDvr_bypass_circurt_c5(int n){data.dvr_bypass_circurt_c5 = n;}
    Q_INVOKABLE void setDvr_bypass_circurt_c6(int n){data.dvr_bypass_circurt_c6 = n;}

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

    Q_INVOKABLE void setDvr_km_1(int n){data.dvr_km_1 = n;}
    Q_INVOKABLE void setDvr_km_2(int n){data.dvr_km_2 = n;}
    Q_INVOKABLE void setDvr_km_3(int n){data.dvr_km_3 = n;}
    Q_INVOKABLE void setDvr_km_4(int n){data.dvr_km_4 = n;}
    Q_INVOKABLE void setDvr_qf_1(int n){data.dvr_qf_1 = n;}
    Q_INVOKABLE void setDvr_qs_1(int n){data.dvr_qs_1 = n;}
    Q_INVOKABLE void setDvr_qs_2(int n){data.dvr_qs_2 = n;}
    Q_INVOKABLE void setDvr_qs_3(int n){data.dvr_qs_3 = n;}
    Q_INVOKABLE void setDvr_qs_4(int n){data.dvr_qs_4 = n;}
    Q_INVOKABLE void setDvr_qs_5(int n){data.dvr_qs_5 = n;}
    Q_INVOKABLE void setDvr_d_01(int n){data.dvr_d_01 = n;}
    Q_INVOKABLE void setDvr_d_02(int n){data.dvr_d_02 = n;}
    Q_INVOKABLE void setDvr_f_02(int n){data.dvr_f_02 = n;}
    Q_INVOKABLE void setDvr_f_03(int n){data.dvr_f_03 = n;}

    Q_INVOKABLE void setStatus_empty1(int n){data.status_empty1 = n;}
    Q_INVOKABLE void setStatus_empty2(int n){data.status_empty2 = n;}
    Q_INVOKABLE void setStatus_empty3(int n){data.status_empty3 = n;}
    Q_INVOKABLE void setStatus_empty4(int n){data.status_empty4 = n;}
    Q_INVOKABLE void setStatus_empty5(int n){data.status_empty5 = n;}
    Q_INVOKABLE void setStatus_empty6(int n){data.status_empty6 = n;}
private:
    int m_id;
    QString m_timestamp;
    DVR_DEVICE_DATA data;
};

#endif // U_DVR_SWITCH_VALUE_H
