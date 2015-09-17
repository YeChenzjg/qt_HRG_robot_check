/****************************************************************************
**
** Copyright (C) 2013 Digia Plc and/or its subsidiary(-ies).
** Contact: http://www.qt-project.org/legal
**
** This file is part of the examples of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:BSD$
** You may use this file under the terms of the BSD license as follows:
**
** "Redistribution and use in source and binary forms, with or without
** modification, are permitted provided that the following conditions are
** met:
**   * Redistributions of source code must retain the above copyright
**     notice, this list of conditions and the following disclaimer.
**   * Redistributions in binary form must reproduce the above copyright
**     notice, this list of conditions and the following disclaimer in
**     the documentation and/or other materials provided with the
**     distribution.
**   * Neither the name of Digia Plc and its Subsidiary(-ies) nor the names
**     of its contributors may be used to endorse or promote products derived
**     from this software without specific prior written permission.
**
**
** THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
** "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
** LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
** A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
** OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
** SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
** LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
** DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
** THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
** (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
** OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE."
**
** $QT_END_LICENSE$
**
****************************************************************************/
#define QT_QML_DEBUG
#include <QGuiApplication>
#include <QQuickView>
#include <QtQml/QQmlContext>
#include <QtQml>
#include <QQuickItem>
#include <QTextCodec>
#include "appLayer/transaction.h"
#include "cqmlsettings.h"
#include "setting.h"
#include "comu/cclienthread.h"
//测试
#include <QTimer>
#include <QLibraryInfo>
int main(int argc, char *argv[])
{
    //start appliacation
    QGuiApplication a(argc, argv);
    //settings
    CQmlSettings settings(QCoreApplication::applicationDirPath() + "/qmlConfigure.xml");
    if(settings.errorMap.count() > 0)
        exit(0);

    DVRSettings dvrSetting;
    dvrSetting.IP = settings.node("IP");
    dvrSetting.server_port = settings.node("serverPort").toInt();

    //事物层对象初始化
    CTransaction transaction;

    //初始化clientThread
    ClientThread receiveDataThread(&transaction, dvrSetting);
    receiveDataThread.start();
    QQuickView view;
    view.rootContext()->setContextProperty("transaction", &transaction);
    view.rootContext()->setContextProperty("settings", &settings);
    view.rootContext()->setContextProperty("mainWindow", &view);
    view.setSource(QUrl("qrc:/robo/qml/hitRobotGroup/MainPage.qml"));
//    view.setFlags(Qt::FramelessWindowHint|
//                  Qt::Window
//                  );


    view.show();

    return a.exec();


}
