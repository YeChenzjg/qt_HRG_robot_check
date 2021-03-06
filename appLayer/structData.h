#ifndef STRUCTDATA_H
#define STRUCTDATA_H

#include <QString>
typedef enum{
    MANUAL, AUTO, DEPLOY
}controlType;
//自动控制数据结构
struct AUTO_DATA
{
    int num;
    unsigned char table_num;
    char car_speed;
    char rob_bgm;
    int dishes_num;
};
//手动控制数据结构
struct MANUAL_DATA
{
    int num;
    char move_spped;
    char is_tracking;
    char turn_speed;
    int mp3_num;
};
//配置数据结构
struct DEPLOY_DATA
{
    int data;
};
//配置桌号卡
//配置方向卡
//配置限速卡
//控制数据大结构
struct CONTROL_DATA
{
    controlType type;
    AUTO_DATA auto_data;
    MANUAL_DATA manual_data;
    DEPLOY_DATA deploy_data;
};

//机器人上传数据包
struct ROBOT_DATA
{
    int hrg_num;
    int x;		//小车相对坐标x（mm）
    int y;		//小车相对坐标y（mm）
    int round;  //小车相对弧度
    int IDCard; //当前读取到的卡号ID（后八位）
    int CPU_idle;    	//CPU 空闲计数

    unsigned int forward_speed;		//用以保存反馈的小车前进速度；0.1m/s
    unsigned int turn_speed;		//用以保存反馈的小车转向速度；  1-40
    unsigned int error_id;   //用以保存导致小车停止的错误号00：OK
    unsigned int car_status;   //用以保存小车状态（自动/手动）
    unsigned int car_status_machine;   //用以保存小车状态机。
    QString ms_position;		//当前磁条位置图形表示。
    unsigned int power;	//当前电池电压。
    unsigned int attr;   	//暂时保留  //禁区编号0；非禁区。

    void init()
    {
        hrg_num = 0;
        x = 0;
        y = 0;
        round = 0;
        IDCard = 0;
        CPU_idle = 0;
        forward_speed = 0;
        turn_speed = 0;
        error_id = 0;
        car_status = 0;
        car_status_machine = 0;
        power = 0;
        attr = 0;
        ms_position.clear();
    }
    bool operator==(const ROBOT_DATA &t)
    {
        if(     hrg_num == t.hrg_num &&
                      x == t.x &&
                      y == t.y &&
                  round == t.round &&
                 IDCard == t.IDCard &&
               CPU_idle == t.CPU_idle &&
          forward_speed == t.forward_speed &&
             turn_speed == t.turn_speed &&
               error_id == t.error_id &&
             car_status == t.car_status &&
     car_status_machine == t.car_status_machine &&
                ms_position == t.ms_position &&
                power == t.power &&
                attr == t.attr)
            return true;
        return false;
    }
};

#endif // STRUCTDATA_H
