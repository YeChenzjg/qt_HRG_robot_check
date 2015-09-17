#ifndef U_EVENT_WAVE_H
#define U_EVENT_WAVE_H

#include <QObject>
#include "appLayer/structData.h"
class U_Event_Wave : public QObject
{
    Q_OBJECT
    Q_PROPERTY(int id READ id WRITE setId)
    Q_PROPERTY(long eid READ eid WRITE setEid)
    Q_PROPERTY(QString phase READ phase WRITE setPhase)
    Q_PROPERTY(QString wavedata READ wavedata WRITE setWavedata)

public:
    explicit U_Event_Wave(QObject *parent = 0);
    U_Event_Wave(EVENT_WAVE_DATA data, QObject *parent = 0);
signals:

public slots:
public:
    Q_INVOKABLE int id(){return data.id;}
    Q_INVOKABLE long eid(){return data.eid;}
    Q_INVOKABLE QString phase(){return data.phase;}
    Q_INVOKABLE QString wavedata(){return data.wavedata;}

    Q_INVOKABLE void setId(int id){data.id = id;}
    Q_INVOKABLE void setEid(long eid){data.eid = eid;}
    Q_INVOKABLE void setPhase(QString phase){data.phase = phase;}
    Q_INVOKABLE void setWavedata(QString wavedata){data.wavedata = wavedata;}

private:
    EVENT_WAVE_DATA data;
};

#endif // U_EVENT_WAVE_H
