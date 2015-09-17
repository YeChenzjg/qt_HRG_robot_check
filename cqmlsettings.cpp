#include "cqmlsettings.h"
#include <QStringList>
#include <QDebug>

CQmlSettings::CQmlSettings(QString fileName, QObject *parent) :
    QObject(parent)
{
    m_file = fileName;
    initDom( fileName );
}


void CQmlSettings::initDom(QString fileName)
{
    if(fileName.isEmpty())
    {
        errorMap.insert(1, QString("Can't find file named: ")+fileName);
        return ;
    }

    QFile xmlFile(fileName);
    if(!xmlFile.open(QFile::ReadOnly | QFile::Text))
    {
        errorMap.insert(2, QString("Can't read file named: ")+fileName);
        return ;
    }
    QString domError;
    int errorRow = 0;
    int errorCol = 0;
    if(!xmlDocument.setContent(&xmlFile, false, &domError, &errorRow, &errorCol))
    {
        errorMap.insert(3, QString("XML error ")+QString::number(errorRow)+
                        QString("/")+QString::number(errorCol)+QString(":")+
                        domError);
        return;
    }

    if(xmlDocument.isNull())
    {
        errorMap.insert(4, fileName+QString(" is null!"));
        return;
    }

}

QString CQmlSettings::recursion(QDomNode n, QString tagName)
{
    QString tagText;
    if(n.isElement())
    {
        QDomElement e = n.toElement();
        if(e.childNodes().count() == 1 &&
                e.childNodes().at(0).nodeType() == QDomNode::TextNode)
        {
            if(e.tagName() == tagName)
            {
                return e.text();
            }
            else return "";
        }
        else
        {
            QDomNodeList list = e.childNodes();
            for(int i = 0; i < list.count(); i++)
            {
                tagText = recursion(list.at(i), tagName);
                if(!tagText.isEmpty())
                    return tagText;
            }
            return "";
        }
    }
    else return "";
}

QString CQmlSettings::node(QString name)
{
    if(errorMap.count() > 0)
        return "undefined";

    QDomElement root = xmlDocument.documentElement();
    QDomNode n = root.firstChildElement();
    //解析name，如果name是单个tag搜索整个dom找到第一个符合的tag返回tag的text
    //如果name是tag/subtag这种格式，tag属于root下的第一层element，subtag属于
    //tag的子element，tag也只匹配第一个找到的，所以xml格式文件root下最好不要出现相同
    //名字的element
    QStringList tagList = name.split("/", QString::SkipEmptyParts);
    if(tagList.count() == 1)
    {
        while(!n.isNull())
        {
            QString value = recursion(n, name);
            if(!value.isEmpty())
                return value;
            else
            {
                n = n.nextSibling();
            }
        }
        return "undefined";
    }
    else if(tagList.count() > 1)
    {
        QDomNode subNode = root.namedItem(tagList.at(0));

        if(subNode.isNull())
        {
            return "undefined";
        }
        QDomNode tmpNode;
        for(int i = 1; i < tagList.count(); i++)
        {
            tmpNode = subNode.namedItem(tagList.at(i));
            if(tmpNode.isNull())
                return "undefined";
            else subNode = tmpNode;
        }
        if(subNode.isElement() && subNode.childNodes().count() == 1 &&
                subNode.childNodes().at(0).nodeType() == QDomNode::TextNode)
        {
            QDomElement e = subNode.toElement();
            return e.text();
        }
        return "undefined";
    }
    else return "undefined";
}

int CQmlSettings::setNode(QString oldName, QString newName)
{
    oldName = "";
    newName = "";
    //QDomDocument bacDoc = xmlDocument;
    //旧文件内容备份
    backup();
    //查找旧节点位置

    //更新旧节点


    //文件重写保存


    return 0;
}

void CQmlSettings::backup()
{
    //清除已有备份文件
    if(clearBackup())
        errorMap.insert(4,"clear backup failed!");
    //核心代码：Dom方式写xml文件
    QFile fileBac(m_file+".bac");
    QTextStream out(&fileBac);
    xmlDocument.save(out,4);
    fileBac.close();
}

int CQmlSettings::clearBackup()
{
    bool flag = QFile::remove(m_file+".bac");
    return flag?0:1;
}
