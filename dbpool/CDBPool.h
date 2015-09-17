#ifndef CDBPOOL_H
#define CDBPOOL_H
#include <QString>
#include "stdarg.h"
#include <QMap>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlRecord>
#include <QtSql/QSqlField>
#include <QtSql/QSqlDriver>
#include <QFile>
#include <QTextStream>
#include <QDateTime>
#include <QDir>
#include <QCoreApplication>
#include <QDebug>
#include <QtSql/QSqlError>
#include <QtSql/QSqlQuery>
#include <QStringList>
#include <QMutex>
#include <QTime>
#include <QMetaProperty>
#include "ProxyConnection.h"
#include "cqmlsettings.h"
#include "log4qt/logger.h"
#include "log4qt/basicconfigurator.h"
#include "log4qt/propertyconfigurator.h"

#define R_ERROR -1
#define R_SUCCESS 0
class ProxyConnection;
class CDBPool
{
private:
    QString __strDbType;        //数据库类型
    QString __strSerName;       //服务器名称
    int __iPort;              //端口
    QString __strDbName;        //数据库名
    QString __strDbUser;        //用户名
    QString __strDbPassword;    //密码

    int __curSize;              //当前已建立的数据库连接数量
    int __maxSize;              //连接池中定义的最大数据库连接数
    QHash<int,ProxyConnection*> connhash;
    static QMutex mutex;
    static CDBPool *cdbPool;   //单例模式唯一实例
    Log4Qt::Logger *log_pooldb;
    ProxyConnection* CreateConnection(int idx);
    void InitConnection(int iInitialSize);
    void DestroyConnection(ProxyConnection *conn);
    void DestroyCDBPool();
    int ReadSettings();


public:
    CDBPool();//构造方法是私有的
    ~CDBPool();
    int GetConnection(int &ikey, ProxyConnection **proxyconn);
    void ReleaseConnection(int ikey, ProxyConnection **proxyconn);
    static CDBPool *GetInstance(QString &errorMessage);//外部调用获取实例唯一方法

    int getPoolCurSize(){return __curSize;}
    int getPoolMaxSize(){return __maxSize;}
    //for test
    static void destoryPool();
    void tst_destoryConnection(ProxyConnection *conn);
    void tst_destoryCDBPool();
};
#endif // CDBPOOL_H
