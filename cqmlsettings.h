#ifndef CQMLSETTINGS_H
#define CQMLSETTINGS_H

#include <QObject>
#include <QMap>
#include <QFile>
#include <QDomDocument>

class CQmlSettings : public QObject
{
    Q_OBJECT
public:
    CQmlSettings(QString fileName, QObject *parent = 0);
    //获取指定节点value
    Q_INVOKABLE QString node(QString);
    //修改指定节点value
    Q_INVOKABLE int setNode(QString oldName, QString newName);
private:
    //读取配置文件
    void initDom(QString fileName);
    //循环遍历
    QString recursion(QDomNode n, QString tagName);
    //备份文件
    void backup();
    //删除备份
    int clearBackup();
private:
    QDomDocument xmlDocument;
    QString m_file;
public:
    QMap<int, QString> errorMap;
};

#endif // CQMLSETTINGS_H
