#ifndef U_HELP_INFO_H
#define U_HELP_INFO_H

#include <QObject>

class U_Help_Info : public QObject
{
    Q_OBJECT
    Q_PROPERTY(int id READ id WRITE setId)
    Q_PROPERTY(QString type READ type WRITE setType)
    Q_PROPERTY(QString desc READ desc WRITE setDesc)
    Q_PROPERTY(QString detail READ detail WRITE setDetail)
    Q_PROPERTY(QString attr1 READ attr1 WRITE setAttr1)
    Q_PROPERTY(QString attr2 READ attr2 WRITE setAttr2)
    Q_PROPERTY(QString attr3 READ attr3 WRITE setAttr3)
    Q_PROPERTY(QString attr4 READ attr4 WRITE setAttr4)
    Q_PROPERTY(QString attr5 READ attr5 WRITE setAttr5)

public:
    explicit U_Help_Info(QObject *parent = 0);

signals:

public slots:
public:
    Q_INVOKABLE int id(){return m_id;}
    Q_INVOKABLE QString type(){return m_type;}
    Q_INVOKABLE QString desc(){return m_desc;}
    Q_INVOKABLE QString detail(){return m_detail;}
    Q_INVOKABLE QString attr1(){return m_attr1;}
    Q_INVOKABLE QString attr2(){return m_attr2;}
    Q_INVOKABLE QString attr3(){return m_attr3;}
    Q_INVOKABLE QString attr4(){return m_attr4;}
    Q_INVOKABLE QString attr5(){return m_attr5;}

    Q_INVOKABLE void setId(int id){m_id = id;}
    Q_INVOKABLE void setType(QString type){m_type = type;}
    Q_INVOKABLE void setDesc(QString desc){m_desc = desc;}
    Q_INVOKABLE void setDetail(QString detail){m_detail = detail;}
    Q_INVOKABLE void setAttr1(QString attr1){m_attr1 = attr1;}
    Q_INVOKABLE void setAttr2(QString attr2){m_attr2 = attr2;}
    Q_INVOKABLE void setAttr3(QString attr3){m_attr3 = attr3;}
    Q_INVOKABLE void setAttr4(QString attr4){m_attr4 = attr4;}
    Q_INVOKABLE void setAttr5(QString attr5){m_attr5 = attr5;}
private:
    int m_id;
    QString m_type;
    QString m_desc;
    QString m_detail;
    QString m_attr1;
    QString m_attr2;
    QString m_attr3;
    QString m_attr4;
    QString m_attr5;
};

#endif // U_HELP_INFO_H
