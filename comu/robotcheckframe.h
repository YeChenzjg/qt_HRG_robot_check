#ifndef ROBOTCHECKFRAME_H
#define ROBOTCHECKFRAME_H

#include <QObject>
#include <QDebug>
#include "structData.h"
class robotCheckFrame : public QObject
{
    Q_OBJECT
public:
    explicit robotCheckFrame(QObject *parent = 0);
    int checkFrame(QByteArray);
    QByteArray analyzeData(QByteArray);
    unsigned char checkSum(QByteArray);
    int BytetoInt(char* byte,int length);
signals:
    void robotData(ROBOT_DATA t_data, QByteArray sourceData);
public slots:

};

#endif // ROBOTCHECKFRAME_H
