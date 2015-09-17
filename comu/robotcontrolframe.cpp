#include "robotcontrolframe.h"

robotControlFrame::robotControlFrame(QObject *parent) :
    QObject(parent)
{
}

QByteArray robotControlFrame::robotManualFrame(MANUAL_DATA data)
{
    char ch_data[MANUAL_CONTROL_LENGTH];
    ch_data[0] = (unsigned short)0xFD;
    ch_data[1] = 0x00;
    ch_data[2] = (unsigned char)(0x000000ff & data.num);
    ch_data[3] = 0x00;
    ch_data[4] = 0x55;
    ch_data[5] = 0x0b;
    ch_data[6] = 0x71;
    ch_data[7] = data.move_spped;
    ch_data[8] = data.is_tracking;
    ch_data[9] = data.turn_speed;
    ch_data[10] = (unsigned char)(0x000000ff & data.mp3_num);
    ch_data[11] = (unsigned char)((0x0000ff00 & data.mp3_num) >> 8);
    ch_data[12] = (unsigned char)((0x00ff0000 & data.mp3_num) >> 16);
    ch_data[13] = (unsigned char)((0xff000000 & data.mp3_num) >> 24);
    ch_data[14] = Sum(QByteArray(ch_data+6, 8));
    ch_data[15] = (unsigned short)0xaa;
    QByteArray array(ch_data, MANUAL_CONTROL_LENGTH);

    return array;
}
QByteArray robotControlFrame::robotAutoFrame(AUTO_DATA data)
{
    data;
    QByteArray array;
    return array;
}

unsigned char robotControlFrame::Sum(QByteArray data)
{
    unsigned char count = data.at(0);
    for(int i = 1; i < data.length(); i++)
    {
        count += data.at(i);
    }

    return count;
}
