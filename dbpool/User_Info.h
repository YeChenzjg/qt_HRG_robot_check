#ifndef USER_INFO_H
#define USER_INFO_H

#include <QObject>

class User_Info : public QObject
{
    Q_OBJECT
    Q_PROPERTY(int id READ id WRITE setId)
    Q_PROPERTY(int type READ type WRITE setType)
    Q_PROPERTY(QString name READ name WRITE setName)
    Q_PROPERTY(QString password READ password WRITE setPassword)
    Q_PROPERTY(QString attr1 READ attr1 WRITE setAttr1)
    Q_PROPERTY(QString attr2 READ attr2 WRITE setAttr2)
    Q_PROPERTY(QString attr3 READ attr3 WRITE setAttr3)
    Q_PROPERTY(QString attr4 READ attr4 WRITE setAttr4)
    Q_PROPERTY(QString attr5 READ attr5 WRITE setAttr5)

public:
    explicit User_Info(QObject *parent = 0);

signals:

public slots:
public:
    Q_INVOKABLE int id(){return m_id;}
    Q_INVOKABLE int type(){return m_type;}
    Q_INVOKABLE QString name(){return m_name;}
    Q_INVOKABLE QString password(){return m_password;}
    Q_INVOKABLE QString attr1() {return m_attr1;}
    Q_INVOKABLE QString attr2() {return m_attr2;}
    Q_INVOKABLE QString attr3() {return m_attr3;}
    Q_INVOKABLE QString attr4() {return m_attr4;}
    Q_INVOKABLE QString attr5() {return m_attr5;}

    Q_INVOKABLE void setId(int id){m_id = id;}
    Q_INVOKABLE void setType(int type){m_type = type;}
    Q_INVOKABLE void setName(const QString& name){m_name = name;}
    Q_INVOKABLE void setPassword(const QString& password){m_password = password;}
    Q_INVOKABLE void setAttr1(const QString& attr1) {m_attr1 = attr1;}
    Q_INVOKABLE void setAttr2(const QString& attr2) {m_attr1 = attr2;}
    Q_INVOKABLE void setAttr3(const QString& attr3) {m_attr1 = attr3;}
    Q_INVOKABLE void setAttr4(const QString& attr4) {m_attr1 = attr4;}
    Q_INVOKABLE void setAttr5(const QString& attr5) {m_attr1 = attr5;}

private:
    int m_id;
    int m_type;
    QString m_name;
    QString m_password;
    QString m_attr1;
    QString m_attr2;
    QString m_attr3;
    QString m_attr4;
    QString m_attr5;

};

#endif // USER_INFO_H
