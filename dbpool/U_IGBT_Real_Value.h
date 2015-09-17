#ifndef U_IGBT_REAL_VALUE_H
#define U_IGBT_REAL_VALUE_H

#include <QObject>

class U_IGBT_Real_Value : public QObject
{
    Q_OBJECT
    Q_PROPERTY(int id READ id WRITE setId)
    Q_PROPERTY(QString mtimestamp READ timestamp WRITE setTimestamp)

public:
    explicit U_IGBT_Real_Value(QObject *parent = 0);

signals:

public slots:
public:
    Q_INVOKABLE int id(){return m_id;}
    Q_INVOKABLE QString timestamp(){return m_timestamp;}

    Q_INVOKABLE void setId(int id){m_id = id;}
    Q_INVOKABLE void setTimestamp(QString timestamp){m_timestamp = timestamp;}
private:
    int m_id;
    QString m_timestamp;

};

#endif // U_IGBT_REAL_VALUE_H
