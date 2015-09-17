#ifndef PROXYCONNECTION_H
#define PROXYCONNECTION_H

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
#include <QSettings>
#include <QMutex>
#include <QTime>
#include <QMetaProperty>
#include "CDBPool.h"
#include "log4qt/logger.h"
#include "log4qt/basicconfigurator.h"
#include "log4qt/propertyconfigurator.h"

#define R_ERROR -1
#define R_SUCCESS 0
class CDBPool;
class ProxyConnection
{
public:
    QSqlDatabase qsqldatabase;
    CDBPool *cdbPool;
    Log4Qt::Logger *db;

    ProxyConnection();
    ProxyConnection(QSqlDatabase conn);
    ~ProxyConnection();

    void close(int ikey, ProxyConnection **proxyconn);
    bool isclose();
    bool isOpen();
    bool open();

    QList< QMap<QString,QString> > selectValue(QObject *obj);
    QList< QMap<QString,QString> > selectValueById(QObject *obj, int id);
    QList< QMap<QString,QString> > selectValueByEidandParse(QObject *obj, int eid, QString parse);
    QList< QMap<QString,QString> > selectValueByType(QObject *obj, QString type);
    QList< QMap<QString,QString> > selectTopValue(QObject *obj,int topCount);
    QList< QMap<QString,QString> > selectValueByHour(QObject *obj, QString beginDatetime, QString endDatetime);
    QList< QMap<QString,QString> > selectValueByMonth(QObject *obj, QString month);
    QList< QMap<QString,QString> > selectValueByYear(QObject *obj, QString year);

    int queryTableRows(QObject *obj);
    int insertValue(QObject *obj, int &returnId);
    int updateValue(QObject *obj, int id);
    int deleteValue(QObject *obj, int id);
    int callProc_DayReport(QString strDate);
};
#endif // PROXYCONNECTION_H
