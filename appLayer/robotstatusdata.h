#ifndef ROBOTSTATUSDATA_H
#define ROBOTSTATUSDATA_H

#include <QObject>
#include "structData.h"
class robotStatusData : public QObject
{
    Q_OBJECT
    Q_PROPERTY(int rob_num READ rob_num WRITE setRob_num)
    Q_PROPERTY(int rob_x READ rob_x WRITE setRob_x)
    Q_PROPERTY(int rob_y READ rob_y WRITE setRob_y)
    Q_PROPERTY(int rob_round READ rob_round WRITE setRob_round)
    Q_PROPERTY(int rob_IDCard READ rob_IDCard WRITE setRob_IDCard)
    Q_PROPERTY(int rob_CPU_idle READ rob_CPU_idle WRITE setRob_CPU_idle)
    Q_PROPERTY(int rob_forward_speed READ rob_forward_speed WRITE setRob_forward_speed)
    Q_PROPERTY(int rob_turn_speed READ rob_turn_speed WRITE setRob_turn_speed)
    Q_PROPERTY(int rob_error_id READ rob_error_id WRITE setRob_error_id)
    Q_PROPERTY(int rob_car_status READ rob_car_status WRITE setRob_car_status)
    Q_PROPERTY(int rob_car_status_machine READ rob_car_status_machine WRITE setRob_car_status_machine)
    Q_PROPERTY(QString rob_ms_position READ rob_ms_position WRITE setRob_ms_position)
    Q_PROPERTY(int rob_power READ rob_power WRITE setRob_power)
    Q_PROPERTY(int rob_attr READ rob_attr WRITE setRob_attr)

public:
    explicit robotStatusData(QObject *parent = 0);
    robotStatusData(ROBOT_DATA ,QObject *parent = 0);
    int rob_num(){return data.hrg_num;}
    int rob_x(){return data.x;}
    int rob_y(){return data.y;}
    int rob_round(){return data.round;}
    int rob_IDCard(){return data.IDCard;}
    int rob_CPU_idle(){return data.CPU_idle;}
    int rob_forward_speed(){return data.forward_speed;}
    int rob_turn_speed(){return data.turn_speed;}
    int rob_error_id(){return data.error_id;}
    int rob_car_status(){return data.car_status;}
    int rob_car_status_machine(){return data.car_status_machine;}
    QString rob_ms_position(){return data.ms_position;}
    int rob_power(){return data.power;}
    int rob_attr(){return data.attr;}

    void setRob_x(int d){data.x = d;}
    void setRob_y(int d){data.y = d;}
    void setRob_round(int d){data.round = d;}
    void setRob_IDCard(int d){data.IDCard = d;}
    void setRob_CPU_idle(int d){data.CPU_idle = d;}
    void setRob_forward_speed(int t){data.forward_speed = t;}
    void setRob_turn_speed(int d){data.turn_speed = d;}
    void setRob_error_id(int d){data.error_id = d;}
    void setRob_car_status(int d){data.car_status= d;}
    void setRob_car_status_machine(int d){data.car_status_machine = d;}
    void setRob_ms_position(QString d){data.ms_position = d;}
    void setRob_power(int d){data.power = d;}
    void setRob_attr(int d){data.attr = d;}
    void setRob_num(int num){data.hrg_num = num;}


private:
    ROBOT_DATA data;

};

#endif // ROBOTSTATUSDATA_H
