# Add more folders to ship with the application, here
#folder_01.source = qml/waveFormPage
#folder_01.target = qml
#DEPLOYMENTFOLDERS = folder_01
QT+=qml xml core
INCLUDEPATH += comu appLayer
TARGET = HRG_PAD_TOOLS
#CONFIG += console

# Additional import path used to resolve QML modules in Creator's code model
QML_IMPORT_PATH =

# The .cpp file which was generated for your project. Feel free to hack it.
SOURCES += main.cpp \
    appLayer/transaction.cpp \
    cqmlsettings.cpp \
    comu/robotclientsocket.cpp \
    comu/robotcheckframe.cpp \
    appLayer/robotstatusdata.cpp \
    comu/cclienthread.cpp \
    comu/robotcontrolframe.cpp

# Installation path
# target.path =

# Please do not modify the following two lines. Required for deployment.
include(qtquick2applicationviewer/qtquick2applicationviewer.pri)
qtcAddDeployment()

HEADERS += \
    appLayer/transaction.h \
    cqmlsettings.h \
    appLayer/structData.h \
    setting.h \
    comu/robotclientsocket.h \
    comu/robotcheckframe.h \
    appLayer/robotstatusdata.h \
    comu/cclienthread.h \
    comu/robotcontrolframe.h


RESOURCES += \
    graph.qrc

OTHER_FILES += \
    qml/hitRobotGroup/RobotStausPage.qml \
    qml/hitRobotGroup/robotDataOperation.js \
    qml/hitRobotGroup/CPUBoard.qml \
    qml/hitRobotGroup/RobInfoLabel.qml \
    qml/hitRobotGroup/RobotFace.qml \
    qml/hitRobotGroup/RobotView.qml \
    qml/hitRobotGroup/RobErrorLabel.qml \
    qml/hitRobotGroup/ErrorLabel.qml \
    qml/hitRobotGroup/ServerConnectedRectangle.qml \
    qml/hitRobotGroup/ToolBar.qml \
    qml/hitRobotGroup/RobotStatusComponent.qml \
    qml/hitRobotGroup/MainPage.qml \
    qml/hitRobotGroup/InfoComponent.qml \
    qml/hitRobotGroup/HomeInfoPage.qml \
    qml/hitRobotGroup/RobInfoPage.qml \
    qml/hitRobotGroup/ExitPage.qml \
    qml/hitRobotGroup/RobSysConfigure.qml \
    robot.rc \
    qml/hitRobotGroup/RobControlPage.qml \
    qml/hitRobotGroup/ManualControlComponent.qml \
    qml/hitRobotGroup/AutoControlComponent.qml
RC_FILE = \
    robot.rc
