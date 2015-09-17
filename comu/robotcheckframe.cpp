#include "robotcheckframe.h"

robotCheckFrame::robotCheckFrame(QObject *parent) :
    QObject(parent)
{
}
int robotCheckFrame::checkFrame(QByteArray)
{

    return 1;
}

QByteArray robotCheckFrame::analyzeData(QByteArray data)
{
    if(data.length() == 0)
        return data;
    int frame_length = 0;
    int r_num = -1;
    QByteArray frame_data;
    ROBOT_DATA r_data;
    r_data.init();
    while(data.length())
    {
        if(data.at(0) == 0x55)//找到桢头
        {
            if(data.length() > 1)
            {
                memcpy(&frame_length, data.data()+1,1);//判断帧头是否为最后一个数据，如果不是获取数据长度
                if(frame_length != 31)
                {
                    data.remove(0,2);
                    continue;
                }
                if(data.length() >= frame_length+2) //判断帧数据总长是否不小于frame_length,是否为1f
                {
                    if((data.at(frame_length) & 0x00ff) != 0xaa)//如果数据不是以aa结尾，删除之前的帧头，表明这是一帧坏数据
                    {
                        data.remove(0, 1);
                        return data;
                    }
                    if(checkSum(QByteArray(data.data()+2, frame_length - 3)) != (unsigned char)data.at(frame_length -1))//校验和
                    {
                        data.remove(0,frame_length);
                        continue;
                    }
                    //获取数据
                    frame_data = QByteArray(data.data()+2, frame_length -1);
                    //获取机器人网络编号
                    //memcpy(&r_num, data.data()+1+frame_length,2);
                    r_num = BytetoInt(data.data()+1+frame_length,2);
                    if(r_num <= 0)
                    {
                        data.remove(0, frame_length+2);
                        continue;
                    }
                    //构建机器人数据机构体
                    memcpy(&r_data.x, data.data()+2,4);
                    memcpy(&r_data.y, data.data()+6,4);
                    memcpy(&r_data.round, data.data()+10, 4);
                    memcpy(&r_data.IDCard, data.data()+14,1);
                    memcpy(&r_data.CPU_idle, data.data()+18,4);

                    memcpy(&r_data.forward_speed, data.data()+22,1);
                    memcpy(&r_data.turn_speed , data.data()+23,1);
                    memcpy(&r_data.error_id,data.data()+24,1);
                    memcpy(&r_data.car_status,data.data()+25,1);
                    memcpy(&r_data.car_status_machine, data.data()+26, 1);
                    //获取词条位置，构建图形字符串
                    (data.at(26) & 0x01) == 0x01?r_data.ms_position.append("Y"):r_data.ms_position.append("@");
                    (data.at(26) & 0x01) == 0x02?r_data.ms_position.append("Y"):r_data.ms_position.append("@");
                    (data.at(26) & 0x01) == 0x04?r_data.ms_position.append("Y"):r_data.ms_position.append("@");
                    (data.at(26) & 0x01) == 0x08?r_data.ms_position.append("Y"):r_data.ms_position.append("@");
                    (data.at(26) & 0x01) == 0x10?r_data.ms_position.append("Y"):r_data.ms_position.append("@");
                    (data.at(26) & 0x01) == 0x20?r_data.ms_position.append("Y"):r_data.ms_position.append("@");
                    (data.at(26) & 0x01) == 0x40?r_data.ms_position.append("Y"):r_data.ms_position.append("@");
                    (data.at(26) & 0x01) == 0x80?r_data.ms_position.append("Y"):r_data.ms_position.append("@");

                    memcpy(&r_data.power, data.data()+28,1);
                    memcpy(&r_data.attr, data.data()+29,1);
                    r_data.hrg_num = r_num;
                    emit robotData(r_data,QByteArray(data.data(), 34));
                    //清除解析过的数据
                    data.remove(0, frame_length+3);
                    r_data.init();
                }
                else
                {
                    return data;
                }
            }
            else
            {
                return data;
            }
        }
        else
        {
            data.remove(0,1);
        }
    }
    return data;
}
int robotCheckFrame::BytetoInt(char* byte,int length)
{
    int rtn = 0;
    int i;
    for(i=0;i<length;i++)
    {
        rtn |= (byte[i] << (length - 1 -i)*8);
    }
    return rtn;

}

unsigned char robotCheckFrame::checkSum(QByteArray data)
{
    unsigned char count = data.at(0);
    for(int i = 1; i < data.length(); i++)
    {
        count += data.at(i);
    }

    return count;
}
