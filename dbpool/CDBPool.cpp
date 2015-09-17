#include "CDBPool.h"

using namespace std;

CDBPool *CDBPool::cdbPool = NULL;
QMutex CDBPool::mutex;
CDBPool::CDBPool()
{
    log_pooldb = Log4Qt::Logger::logger("DB");
}

void CDBPool::InitConnection(int iInitialSize)
{
    mutex.lock();
    for(int i=0;i<iInitialSize;i++)
    {
        ProxyConnection *proxyconn = CreateConnection(i);
        QSqlDatabase conn = proxyconn->qsqldatabase;
        if(conn.isOpen())
        {
            connhash.insert(i,proxyconn);
            //connlist.push_back(conn);
            this->__curSize++ ;
        }
        else
        {
            qDebug()<<"InitConnection Error:Cannot open database!";
            this->log_pooldb->error("InitConnection Error:Cannot open database!");
        }
    }
    mutex.unlock();
}

CDBPool* CDBPool::GetInstance(QString &errorMessage)
{
    if(cdbPool == NULL)
    {
        mutex.lock();
        if(cdbPool == NULL)
        {
            cdbPool = new CDBPool();
        }
        mutex.unlock();
        if(cdbPool->ReadSettings() == R_ERROR)
        {
            qDebug()<<"DBSetting Error!";
            errorMessage = "DBSetting Error!";
        }
        else
        {
            errorMessage = "";
        }
    }
    return cdbPool;
}
//?如果qsqdatabase.open失败，qsqldatabase里还有那个链接吗？是否会消耗内存
ProxyConnection* CDBPool::CreateConnection(int idx)
{
    QString strConnName="";
    strConnName = QString("conn_%1").arg(idx);

    QSqlDatabase conn = QSqlDatabase::addDatabase(this->__strDbType,strConnName);
    conn.setHostName(this->__strSerName);
    if(this->__iPort != 0)
    {
        conn.setPort(this->__iPort);
    }
    conn.setDatabaseName(this->__strDbName);
    conn.setUserName(this->__strDbUser);
    conn.setPassword(this->__strDbPassword);

    if(conn.open() == false)
    {
        qDebug()<<"Database connection open error!";
        this->log_pooldb->error("Database connection open error!");
    }
    ProxyConnection *proxyconn = new ProxyConnection(conn);
    return proxyconn;
}

int CDBPool::GetConnection(int &ikey, ProxyConnection **proxyconn)
{
    ikey = -99999;
    *proxyconn = NULL;
    mutex.lock();
    if(connhash.size()> 0)//如果连接池中还有连接
    {
        *proxyconn = connhash.constBegin().value();
        QSqlDatabase conn = connhash.constBegin().value()->qsqldatabase;//得到第一个
        ikey = connhash.constBegin().key();
        connhash.remove(ikey);//移除第一个
        if(!conn.isOpen())//获取的连接已经关闭，重新建立一个
        {
            *proxyconn = CreateConnection(ikey);
            QSqlDatabase conn = (*proxyconn)->qsqldatabase;
            if(!conn.isOpen())
            {
                this->__curSize--;
            }
        }
        mutex.unlock();
        return R_SUCCESS;
    }
    else
    {
        if(this->__curSize < this->__maxSize)//还可以创建新的连接
        {
            ikey = this->__curSize + 1;
            *proxyconn = CreateConnection(ikey);
            QSqlDatabase conn = (*proxyconn)->qsqldatabase;
            if(conn.isOpen())
            {
                this->__curSize++;
                mutex.unlock();
                return R_SUCCESS;
            }
            else
            {
                mutex.unlock();
                return R_ERROR;
            }
        }
        else//达到maxSize无法再创建新的连接
        {
            mutex.unlock();
            return R_ERROR;
        }
    }
}

void CDBPool::ReleaseConnection(int ikey,ProxyConnection **proxyconn)
{
    mutex.lock();
    connhash.insert(ikey,(*proxyconn));
    mutex.unlock();
}


CDBPool::~CDBPool()
{
    this->DestroyCDBPool();
}

void CDBPool::DestroyCDBPool()
{
    QHash<int,ProxyConnection*>::const_iterator iterIndex;
    mutex.lock();
    for(iterIndex=connhash.constBegin();iterIndex!=connhash.constEnd();iterIndex++)
    {
        this->DestroyConnection(iterIndex.value());//销毁连接池中的连接
    }
    this->__curSize = 0;
    this->connhash.clear();//清空连接池连接
    mutex.unlock();
}

void CDBPool::DestroyConnection(ProxyConnection *proxyconn)
{
    QSqlDatabase conn = proxyconn->qsqldatabase;
    if(conn.isOpen())
    {
        conn.close();
    }
}

int CDBPool::ReadSettings()
{
    CQmlSettings settings(QCoreApplication::applicationDirPath() + "/qmlConfigure.xml");
    if(settings.errorMap.count() > 0)
    {
        return R_ERROR;
    }
    QString maxSize = settings.node("DBPoolMaxSize");
    QString dbType = settings.node("DBType");
    QString serName = settings.node("DBServer");
    QString port = settings.node("DBPort");
    QString dbName = settings.node("DBName");
    QString dbUser = settings.node("DBUser");
    QString dbPassword = settings.node("DBPassword");

    if(maxSize == "empty"|| maxSize == "ERROR")
    {
        this->__maxSize = 10;
    }
    else
    {
        this->__maxSize = maxSize.toInt();
    }
    this->__curSize = 0;

    if(dbType == "empty" || dbType == "ERROR")
    {
        this->__strDbType = "QMYSQL";
    }
    else
    {
        this->__strDbType = dbType;
    }

    if(serName == "empty" || serName == "ERROR")
    {
        this->__strSerName = "127.0.0.1";
    }
    else
    {
        this->__strSerName = serName;
    }
    if(port == "empty" || port == "ERROR")
    {
        this->__iPort = 3306;
    }
    else
    {
        this->__iPort = port.toInt();
    }

    if(dbName == "empty" || dbName == "ERROR")
    {
        this->__strDbName = "PPCDB";
    }
    else
    {
        this->__strDbName = dbName;
    }
    if(dbUser == "empty" || dbUser == "ERROR")
    {
        this->__strDbUser = "root";
    }
    else
    {
        this->__strDbUser = dbUser;
    }
    if(dbPassword == "empty" || dbPassword == "ERROR")
        this->__strDbPassword = "";
    else
        this->__strDbPassword = dbPassword;

    if(maxSize == "" || dbType == "" || serName == "" || dbName == "" || dbUser == "")
    {
        return R_ERROR;
    }
    else
    {
        //判断QT支持数据库类型
        QStringList drivers = QSqlDatabase::drivers();
        bool flag = drivers.contains(__strDbType);
        if(!flag)
        {
            qDebug()<<"No database driver"<<__strDbType;
            this->log_pooldb->error(QString("No database driver:%1").arg(__strDbType));
            return R_ERROR;
        }
        else
        {
            this->InitConnection(__maxSize/2);
            return R_SUCCESS;
        }
    }
}

//for test
void CDBPool::destoryPool()
{
    cdbPool = NULL;
}

void CDBPool::tst_destoryCDBPool()
{
    QHash<int,ProxyConnection*>::const_iterator iterIndex;
    mutex.lock();
    for(iterIndex=connhash.constBegin();iterIndex!=connhash.constEnd();iterIndex++)
    {
        this->tst_destoryConnection(iterIndex.value());//销毁连接池中的连接
    }
    this->__curSize = 0;
    this->connhash.clear();//清空连接池连接
    mutex.unlock();
}

void CDBPool::tst_destoryConnection(ProxyConnection *proxyconn)
{
    QSqlDatabase conn = proxyconn->qsqldatabase;
    conn.close();
    QString connName = conn.connectionName();
    conn = QSqlDatabase();
    conn.removeDatabase(connName);
}
