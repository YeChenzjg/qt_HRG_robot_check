#ifndef CClientThread_H
#define CClientThread_H

#include <QThread>
#include "robotclientsocket.h"
#include "../setting.h"
//#define DEFAULT_PORT4    3008
//多线程类
class ClientThread : public QThread
{
    Q_OBJECT

public:
    explicit ClientThread(CTransaction* pTransaction,DVRSettings pSetting,QObject *parent = 0);
    ~ClientThread();
    void connectToServer();
public slots:
    void reconnect();
public:
    void run();
public:
    robotClientSocket *m_pClient;
    CTransaction *m_pTransaction;
    DVRSettings m_pSetting;
};


#endif // CClientThread_H
