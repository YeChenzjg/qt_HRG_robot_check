#include "cclienthread.h"

#include <assert.h>
//#define SERVERIP    "127.0.0.1"
/**************************************************\
功能:	多线程类构造函数
参数:	parent:父进程
返回:	无
作者:	张庆磊
时间:	2014-7-16
\**************************************************/
ClientThread::ClientThread( CTransaction* pTransaction,DVRSettings pSetting,QObject *parent /* = NULL */ )
    : QThread( parent )
{
     m_pClient = NULL;
     m_pTransaction = pTransaction;
     m_pSetting = pSetting;
}
/**************************************************\
功能:	多线程类析构函数
参数:	无
返回:	无
作者:	张庆磊
时间:	2014-7-16
\**************************************************/
 ClientThread::~ClientThread()
 {
    this->quit();
    this->wait();
 }

/**************************************************\
功能:	多线程类启动函数
参数:	无
返回:	无
作者:	张庆磊
时间:	2014-7-16
\**************************************************/
void ClientThread::run()
{
    m_pClient = new robotClientSocket( m_pTransaction, m_pSetting);
    exec();
}

void ClientThread::connectToServer()
{
//    while(1)
//    {
//        m_pClient->connectToHost(m_pSetting->IP, m_pSetting->server_port);
//        if (m_pClient->waitForConnected(5000))
//        {
//            qDebug() << "sokcet thread connected";
//            break;
//            //sendData("GetMember");
//        }
//        else
//        {
//           qDebug() << "sokcet thread fault";
//           sleep(1);
//        }
//    }
}

void ClientThread::reconnect()
{
    connectToServer();
}
