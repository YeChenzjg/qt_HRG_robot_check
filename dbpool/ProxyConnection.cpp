#include "ProxyConnection.h"

ProxyConnection::ProxyConnection()
{
}

ProxyConnection::ProxyConnection(QSqlDatabase conn)
{

    this->qsqldatabase = conn;
    QString errorMsg;
    this->cdbPool = CDBPool::GetInstance(errorMsg);
    this->db = Log4Qt::Logger::logger("DB");
}

ProxyConnection::~ProxyConnection()
{

}

void ProxyConnection::close(int ikey, ProxyConnection **proxyconn)
{
    this->cdbPool->ReleaseConnection(ikey,proxyconn);
}

bool ProxyConnection::open()
{
    return this->qsqldatabase.open();
}

bool ProxyConnection::isOpen()
{
    return this->qsqldatabase.isOpen();
}

QList< QMap<QString, QString> > ProxyConnection::selectValue(QObject *obj)
{
    const QMetaObject* metaObj = obj->metaObject();
    QString tableName = metaObj->className();
    int propertyCount = metaObj->propertyCount();
    QString strSelect = "select * from " + tableName + " order by id desc";

    QList< QMap<QString, QString> > datalist;
    QMap<QString,QString> field_map;

    if (qsqldatabase.isOpen())
    {
        QSqlQuery query(qsqldatabase);
        if (query.exec(strSelect))
        {

            //存字段名称和类型
            for(int i = 1; i<propertyCount; i++)
            {
                QMetaProperty objProperty = metaObj->property(i);
                field_map.insert(objProperty.name(),objProperty.typeName());
            }
            datalist.push_back(field_map);
            field_map.clear();

            while(query.next())
            {
                //存字段名称和字段值
                for(int i = 1; i < propertyCount; i++ )
                {
                    QMetaProperty objProperty = metaObj->property(i);
                    if(QString(QLatin1String(objProperty.name())) == "mtimestamp")
                    {
                        field_map.insert(objProperty.name(),query.value(i-1).toDateTime().toString("yyyy-MM-dd hh:mm:ss"));
                    }
                    else
                    {
                        field_map.insert(objProperty.name(),query.value(i-1).toString());
                    }
                }
                datalist.push_back(field_map);
                field_map.clear();
            }
        }
        else
        {
            qDebug()<<"Execute sql selectValue error!";
            db->error("Execute sql selectValue error!");
        }
        query.clear();

    }
    return datalist;
}

QList< QMap<QString, QString> > ProxyConnection::selectValueById(QObject *obj,int id)
{
    const QMetaObject* metaObj = obj->metaObject();
    QString tableName = metaObj->className();
    int propertyCount = metaObj->propertyCount();
    QString strSelect = "select * from " + tableName + " WHERE ID = " + QString("%1").arg(id);

    QList< QMap<QString, QString> > datalist;
    QMap<QString,QString> field_map;

    if (qsqldatabase.isOpen())
    {
        QSqlQuery query(qsqldatabase);
        if (query.exec(strSelect))
        {

            //存字段名称和类型
            for(int i = 1; i<propertyCount; i++)
            {
                QMetaProperty objProperty = metaObj->property(i);
                field_map.insert(objProperty.name(),objProperty.typeName());
            }
            datalist.push_back(field_map);
            field_map.clear();

            while(query.next())
            {
                //存字段名称和字段值
                for(int i = 1; i < propertyCount; i++ )
                {
                    QMetaProperty objProperty = metaObj->property(i);
                    if(QString(QLatin1String(objProperty.name())) == "mtimestamp")
                    {
                        field_map.insert(objProperty.name(),query.value(i-1).toDateTime().toString("yyyy-MM-dd hh:mm:ss"));
                    }
                    else
                    {
                        field_map.insert(objProperty.name(),query.value(i-1).toString());
                    }
                }
                datalist.push_back(field_map);
                field_map.clear();
            }
        }
        else
        {
            qDebug()<<"Execute sql selectValueById error!";
            db->error("Execute sql selectValueById error!");
        }
        query.clear();

    }
    return datalist;
}

QList< QMap<QString, QString> > ProxyConnection::selectValueByEidandParse(QObject *obj, int eid, QString parse)
{
    const QMetaObject* metaObj = obj->metaObject();
    QString tableName = metaObj->className();
    int propertyCount = metaObj->propertyCount();
    QString strSelect = "select * from " + tableName + " WHERE eid = " + QString::number(eid) + " and phase = \""+ parse +"\" order by id desc";

    QList< QMap<QString, QString> > datalist;
    QMap<QString,QString> field_map;

    if (qsqldatabase.isOpen())
    {
        QSqlQuery query(qsqldatabase);
        if (query.exec(strSelect))
        {

            //存字段名称和类型
            for(int i = 1; i<propertyCount; i++)
            {
                QMetaProperty objProperty = metaObj->property(i);
                field_map.insert(objProperty.name(),objProperty.typeName());
            }
            datalist.push_back(field_map);
            field_map.clear();

            while(query.next())
            {
                //存字段名称和字段值
                for(int i = 1; i < propertyCount; i++ )
                {
                    QMetaProperty objProperty = metaObj->property(i);
                    if(QString(QLatin1String(objProperty.name())) == "mtimestamp")
                    {
                        field_map.insert(objProperty.name(),query.value(i-1).toDateTime().toString("yyyy-MM-dd hh:mm:ss"));
                    }
                    else
                    {
                        field_map.insert(objProperty.name(),query.value(i-1).toString());
                    }
                }
                datalist.push_back(field_map);
                field_map.clear();
            }
        }
        else
        {
            qDebug()<<"Execute sql selectValueByEid error!";
            db->error("Execute sql selectValueByEid error!");
        }
        query.clear();

    }
    return datalist;
}

QList< QMap<QString, QString> > ProxyConnection::selectValueByType(QObject *obj, QString type)
{
    const QMetaObject* metaObj = obj->metaObject();
    QString tableName = metaObj->className();
    int propertyCount = metaObj->propertyCount();
    QString strSelect = "select * from " + tableName + " WHERE type = \"" + type + "\" order by id desc";

    QList< QMap<QString, QString> > datalist;
    QMap<QString,QString> field_map;

    if (qsqldatabase.isOpen())
    {
        QSqlQuery query(qsqldatabase);
        if (query.exec(strSelect))
        {

            //存字段名称和类型
            for(int i = 1; i<propertyCount; i++)
            {
                QMetaProperty objProperty = metaObj->property(i);
                field_map.insert(objProperty.name(),objProperty.typeName());
            }
            datalist.push_back(field_map);
            field_map.clear();

            while(query.next())
            {
                //存字段名称和字段值
                for(int i = 1; i < propertyCount; i++ )
                {
                    QMetaProperty objProperty = metaObj->property(i);
                    if(QString(QLatin1String(objProperty.name())) == "mtimestamp")
                    {
                        field_map.insert(objProperty.name(),query.value(i-1).toDateTime().toString("yyyy-MM-dd hh:mm:ss"));
                    }
                    else
                    {
                        field_map.insert(objProperty.name(),query.value(i-1).toString());
                    }
                }
                datalist.push_back(field_map);
                field_map.clear();
            }
        }
        else
        {
            qDebug()<<"Execute sql selectValueByType error!";
            db->error("Execute sql selectValueByType error!");
        }
        query.clear();

    }
    return datalist;
}

QList< QMap<QString, QString> > ProxyConnection::selectTopValue(QObject *obj, int topCount)
{
    const QMetaObject* metaObj = obj->metaObject();
    QString tableName = metaObj->className();
    int propertyCount = metaObj->propertyCount();
    QString strSelect = "select * from ( select * from " + tableName + " order by id desc ) a limit " + QString("%1").arg(topCount);

    QList< QMap<QString, QString> > datalist;
    QMap<QString,QString> field_map;

    if (qsqldatabase.isOpen())
    {
        QSqlQuery query(qsqldatabase);
        if (query.exec(strSelect))
        {

            //存字段名称和类型
            for(int i = 1; i<propertyCount; i++)
            {
                QMetaProperty objProperty = metaObj->property(i);
                field_map.insert(objProperty.name(),objProperty.typeName());
            }
            datalist.push_back(field_map);
            field_map.clear();

            while(query.next())
            {
                //存字段名称和字段值
                for(int i = 1; i < propertyCount; i++ )
                {
                    QMetaProperty objProperty = metaObj->property(i);
                    if(QString(QLatin1String(objProperty.name())) == "mtimestamp")
                    {
                        field_map.insert(objProperty.name(),query.value(i-1).toDateTime().toString("yyyy-MM-dd hh:mm:ss"));
                    }
                    else
                    {
                        field_map.insert(objProperty.name(),query.value(i-1).toString());
                    }
                }
                datalist.push_back(field_map);
                field_map.clear();
            }
        }
        else
        {
            qDebug()<<"Execute sql selectTopValue error!";
            db->error("Execute sql selectTopValue error!");
        }
        query.clear();

    }
    return datalist;
}

QList< QMap<QString, QString> > ProxyConnection::selectValueByHour(QObject *obj, QString beginDatetime, QString endDatetime)
{
    const QMetaObject* metaObj = obj->metaObject();
    QString tableName = metaObj->className();
    int propertyCount = metaObj->propertyCount();
    QString strSelect = "select * from " + tableName + " where mtimestamp between '" + beginDatetime + "' and '" + endDatetime + "' order by id desc";

    QList< QMap<QString, QString> > datalist;
    QMap<QString,QString> field_map;

    if (qsqldatabase.isOpen())
    {
        QSqlQuery query(qsqldatabase);
        if (query.exec(strSelect))
        {

            //存字段名称和类型
            for(int i = 1; i<propertyCount; i++)
            {
                QMetaProperty objProperty = metaObj->property(i);
                field_map.insert(objProperty.name(),objProperty.typeName());
            }
            datalist.push_back(field_map);
            field_map.clear();

            while(query.next())
            {
                //存字段名称和字段值
                for(int i = 1; i < propertyCount; i++ )
                {
                    QMetaProperty objProperty = metaObj->property(i);
                    if(QString(QLatin1String(objProperty.name())) == "mtimestamp")
                    {
                        field_map.insert(objProperty.name(),query.value(i-1).toDateTime().toString("yyyy-MM-dd hh:mm:ss"));
                    }
                    else
                    {
                        field_map.insert(objProperty.name(),query.value(i-1).toString());
                    }
                }
                datalist.push_back(field_map);
                field_map.clear();
            }
        }
        else
        {
            qDebug()<<"Execute sql selectValueByHour error!";
            db->error("Execute sql selectValueByHour error!");
        }
        query.clear();

    }
    return datalist;
}

QList< QMap<QString, QString> > ProxyConnection::selectValueByMonth(QObject *obj, QString month)
{
    const QMetaObject* metaObj = obj->metaObject();
    QString tableName = metaObj->className();
    int propertyCount = metaObj->propertyCount();
    QString strSelect = "select * from " + tableName + " where date_format(mtimestamp,'%Y-%m') = '" + month + "' order by id desc";

    QList< QMap<QString, QString> > datalist;
    QMap<QString,QString> field_map;

    if (qsqldatabase.isOpen())
    {
        QSqlQuery query(qsqldatabase);
        if (query.exec(strSelect))
        {

            //存字段名称和类型
            for(int i = 1; i<propertyCount; i++)
            {
                QMetaProperty objProperty = metaObj->property(i);
                field_map.insert(objProperty.name(),objProperty.typeName());
            }
            datalist.push_back(field_map);
            field_map.clear();

            while(query.next())
            {
                //存字段名称和字段值
                for(int i = 1; i < propertyCount; i++ )
                {
                    QMetaProperty objProperty = metaObj->property(i);
                    if(QString(QLatin1String(objProperty.name())) == "mtimestamp")
                    {
                        field_map.insert(objProperty.name(),query.value(i-1).toDateTime().toString("yyyy-MM-dd hh:mm:ss"));
                    }
                    else
                    {
                        field_map.insert(objProperty.name(),query.value(i-1).toString());
                    }
                }
                datalist.push_back(field_map);
                field_map.clear();
            }
        }
        else
        {
            qDebug()<<"Execute sql selectValueByMonth error!";
            db->error("Execute sql selectValueByMonth error!");
        }
        query.clear();

    }
    return datalist;
}

QList< QMap<QString, QString> > ProxyConnection::selectValueByYear(QObject *obj, QString year)
{
    const QMetaObject* metaObj = obj->metaObject();
    QString tableName = metaObj->className();
    int propertyCount = metaObj->propertyCount();
    QString strSelect = "select * from " + tableName + " where date_format(mtimestamp,'%Y') = '" + year + "' order by id desc";

    QList< QMap<QString, QString> > datalist;
    QMap<QString,QString> field_map;

    if (qsqldatabase.isOpen())
    {
        QSqlQuery query(qsqldatabase);
        if (query.exec(strSelect))
        {

            //存字段名称和类型
            for(int i = 1; i<propertyCount; i++)
            {
                QMetaProperty objProperty = metaObj->property(i);
                field_map.insert(objProperty.name(),objProperty.typeName());
            }
            datalist.push_back(field_map);
            field_map.clear();

            while(query.next())
            {
                //存字段名称和字段值
                for(int i = 1; i < propertyCount; i++ )
                {
                    QMetaProperty objProperty = metaObj->property(i);
                    if(QString(QLatin1String(objProperty.name())) == "mtimestamp")
                    {
                        field_map.insert(objProperty.name(),query.value(i-1).toDateTime().toString("yyyy-MM-dd hh:mm:ss"));
                    }
                    else
                    {
                        field_map.insert(objProperty.name(),query.value(i-1).toString());
                    }
                }
                datalist.push_back(field_map);
                field_map.clear();
            }
        }
        else
        {
            qDebug()<<"Execute sql selectValueByYear error!";
            db->error("Execute sql selectValueByYear error!");
        }
        query.clear();
    }
    return datalist;
}

int ProxyConnection::queryTableRows(QObject *obj)
{
    const QMetaObject* metaObj = obj->metaObject();
    QString tableName = metaObj->className();
    int count = 0;
    QString strSelect = "select count(*) as value from " + tableName;

    if (qsqldatabase.isOpen())
    {

        QSqlQuery query(qsqldatabase);
        if (query.exec(strSelect))
        {
            query.next();
            count = query.value(0).toInt();
        }
        else
        {
            qDebug()<<"Execute sql query table rows error!";
            db->error("Execute sql query table rows error!");
        }
        query.clear();
    }
    return count;
}

int ProxyConnection::insertValue(QObject *obj,int &returnId)
{
    const QMetaObject* metaObj = obj->metaObject();
    QString tableName = metaObj->className();
    int propertyCount = metaObj->propertyCount();
    QString strInsert = "";
    QString strFields = "";
    QString strValues = "";

    //拼接字段字符串
    for(int i = 2; i<propertyCount; i++)
    {
        QMetaProperty objProperty = metaObj->property(i);
        if(obj->property(objProperty.name()).toInt() == -99999 || obj->property(objProperty.name()).toString() == "EMPTY")
        {
            ;
        }
        else
        {
            strFields = strFields + objProperty.name() + " , "  ;
        }
    }
    strFields = strFields.trimmed().left(strFields.trimmed().length() - 1);

    //拼接字段值
    for(int i = 2; i<propertyCount; i++)
    {
        QString strColumn = "";
        QMetaProperty objProperty = metaObj->property(i);
        if(obj->property(objProperty.name()).toInt() == -99999 || obj->property(objProperty.name()).toString() == "EMPTY")
        {
            ;
        }
        else
        {
            //判断字段类型
            if(QString(QLatin1String(objProperty.typeName())) == "QString" )
            {
                strColumn = "'" + obj->property(objProperty.name()).toString() + "'";
            }
            else
            {
                strColumn = obj->property(objProperty.name()).toString();
            }
            strValues = strValues + strColumn + " , " ;
        }
    }
    strValues = strValues.trimmed().left(strValues.trimmed().length() -1);
    //qDebug()<<"str values length:"<<strValues.length();
    strInsert = "insert into " + tableName + " ( " + strFields + " ) VALUES ( " + strValues + " )";
    //qDebug()<<strInsert;
    //qDebug()<<conn.isOpen();
    if(!qsqldatabase.isOpen())
    {
        return R_ERROR;
    }

    QSqlQuery query(qsqldatabase);
    if (query.exec(strInsert))
    {
        returnId = query.lastInsertId().toInt();
        qDebug()<<"Execute sql insertValue success!";
        db->info("Execute sql insertValue success!");
        query.clear();
        return R_SUCCESS;
    }
    else
    {
        qDebug()<<"Execute sql insertValue error!";
        db->error("Execute sql insertValue error!");
        query.clear();
        return R_ERROR;
    }
}

int ProxyConnection::updateValue(QObject *obj,int id)
{
    const QMetaObject* metaObj = obj->metaObject();
    QString tableName = metaObj->className();
    int propertyCount = metaObj->propertyCount();
    QString strUpdate = "";
    QString strFields = "";
    QString strValues = "";

    for(int i=2; i<propertyCount; i++)
    {
        QString strColumn = "";
        QMetaProperty objProperty = metaObj->property(i);
        //判断哪个字段设定了值 需要修改
        //qDebug()<<obj->property(objProperty.name());
        if(obj->property(objProperty.name()).toString() == "-99999" || obj->property(objProperty.name()).toString() == "EMPTY")
        {
            ;
        }
        else
        {
            //判断字段类型
            if(QString(QLatin1String(objProperty.typeName())) == "QString" )
            {
                strColumn = QString(QLatin1String(objProperty.name())) + " = '" + obj->property(objProperty.name()).toString() + "' ";
            }
            else
            {
                strColumn = QString(QLatin1String(objProperty.name())) + " = " + obj->property(objProperty.name()).toString();
            }
            strValues = strValues + strColumn + " , " ;
        }
    }
    strValues = strValues.trimmed().left(strValues.trimmed().length() -1);

    strUpdate = "UPDATE " + tableName + " SET " + strValues + " WHERE ID = " + QString("%1").arg(id) ;
    //qDebug()<<strUpdate;
    //qDebug()<<conn.isOpen();
    if(!qsqldatabase.isOpen())
    {
        return R_ERROR;
    }

    QSqlQuery query(qsqldatabase);
    if (query.exec(strUpdate))
    {
        qDebug()<<"Execute sql updateValue success!";
        db->info("Execute sql updateValue success!");
        query.clear();
        return R_SUCCESS;
    }
    else
    {
        qDebug()<<"Execute sql updateValue error!";
        db->error("Execute sql updateValue error!");
        query.clear();
        return R_ERROR;
    }
}

int ProxyConnection::deleteValue(QObject *obj, int id)
{
    const QMetaObject* metaObj = obj->metaObject();
    QString tableName = metaObj->className();
    QString strDelete = "DELETE FROM " + tableName + " WHERE ID = " + QString("%1").arg(id);

    if(!qsqldatabase.isOpen())
    {
        return R_ERROR;
    }
    QSqlQuery query(qsqldatabase);
    if (query.exec(strDelete))
    {
        qDebug()<<"Execute sql deleteValue success!";
        db->info("Execute sql deleteValue success!");
        query.clear();
        return R_SUCCESS;
    }
    else
    {
        qDebug()<<"Execute sql deleteValue error!";
        db->error("Execute sql deleteValue error!");
        query.clear();
        return R_ERROR;
    }
}

int ProxyConnection::callProc_DayReport(QString strDate)
{
    QString strCallProc;
    strCallProc = "CALL proc_U_Device_Day_Report(?)";

    if(!qsqldatabase.isOpen())
    {
        return R_ERROR;
    }
    QSqlQuery query(qsqldatabase);
    //qDebug()<<query.prepare(strCallProc);
    query.prepare(strCallProc);
    query.bindValue(0,strDate);

    if(query.exec())
    {
        qDebug()<<"Execute sql callProc_DayReport success!";
        db->info("Execute sql callProc_DayReport success!");
        query.clear();
        return R_SUCCESS;
    }
    else
    {
        qDebug()<<"Execute sql callProc_DayReport error!";
        db->error("Execute sql callProc_DayReport error!");
        query.clear();
        return R_ERROR;
    }
}

