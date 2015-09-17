#ifndef ROBOTCONTROLFRAME_H
#define ROBOTCONTROLFRAME_H

#include <QObject>
#include <QByteArray>
#include <QDebug>
#include "structData.h"

#define MANUAL_CONTROL_LENGTH 16
class robotControlFrame : public QObject
{
    Q_OBJECT
public:
    explicit robotControlFrame(QObject *parent = 0);
    QByteArray robotManualFrame(MANUAL_DATA data);
    QByteArray robotAutoFrame(AUTO_DATA data);
    unsigned char Sum(QByteArray);
signals:

public slots:

};

#endif // ROBOTCONTROLFRAME_H
