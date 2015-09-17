#ifndef SETTING_H
#define SETTING_H

#include <QString>
typedef enum{
    deploy,
    debug
} runMode;
struct DVRSettings{
    //run mode
    runMode mode;
    //webscada settings
    QString IP;
    QString WebIP;
    QString port;
    int server_port;
    //database settings
    QString DBPoolMaxSize;
    QString DBType;
    QString DBServer;
    QString DBPort;
    QString DBName;
    QString DBUser;
    QString DBPassword;
};
#endif // SETTING_H
