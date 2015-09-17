import QtQuick 2.0
import QtQuick.Controls 1.1
import QtQuick.Window 2.0
import QtQuick.Layouts 1.1
import "robotDataOperation.js" as RobotOP
Rectangle {
    id: root
    height: 600
    width: 800
    property int btnWidth: width/btnModel.count - 5
    property int btnHeight: toolBar.height - 2
    property int btnSpace: 6
    property int dataCount: 0

    color: "lightsteelblue"
    ListModel{
        id: dataModel
    }
    ListModel{
        id: btnModel
        ListElement{
            name:"主页"
            num:0
            sourceURL:"qrc:/robo/qml/hitRobotGroup/HomeInfoPage.qml"
            smallSize:"qrc:/img/img/HomeSmall.png"
            datamodel: 1
        }
        ListElement{
            name:"机器人控制"
            num:2
            sourceURL:"qrc:/robo/qml/hitRobotGroup/RobControlPage.qml"
            smallSize:"qrc:/img/img/controlSmall.png"
            datamodel: 0
        }

        ListElement{
            name: "配置"
            num:3
            sourceURL:"qrc:/robo/qml/hitRobotGroup/RobSysConfigure.qml"
            smallSize: "qrc:/img/img/settingsSmall.png"
            datamodel: 0
        }
    }
    ToolBar{
        id: sysToolBar
        anchors.left: parent.left
        anchors.right: parent.right
        anchors.top: parent.top
        height: logo.height+7
//        DropArea{
//            anchors.left: parent.left
//            anchors.top: parent.top
//            anchors.bottom: parent.bottom
//            anchors.right: maxminBtn.left
//            MouseArea {
//                    id: dragRegion
//                    anchors.fill: parent
//                    property point clickPos: "0,0"
//                    onDoubleClicked: {
//                        root.state === "max"?root.state = "min":root.state = "max"
//                    }

//                    onPressed: {
//                        clickPos  = Qt.point(mouse.x,mouse.y)
//                        }
//                    onPositionChanged: {
//                    //鼠标偏移量
//                    var delta = Qt.point(mouse.x-clickPos.x, mouse.y-clickPos.y)
//                    //如果mainwindow继承自QWidget,用setPos
//                    mainWindow.setX(mainWindow.x+delta.x)
//                    mainWindow.setY(mainWindow.y+delta.y)
//                    }
//                }
        }

//        ToolButton{
//            id: maxminBtn
//            anchors.right: parent.right
//            anchors.top: parent.top
//            anchors.margins: 5
//            width: 40
//            height: 40
//            iconSource: "qrc:/img/img/minus.png"
//        }

//        Connections{
//            target: maxminBtn
//            onClicked:{
//                mainWindow.showMinimized()
//            }
//        }
//    }
    Image{
        id: logo
        height: parent.height/15
        width: 400
        anchors.topMargin: 2
        anchors.leftMargin: 10
        anchors.left: parent.left
        anchors.top: parent.top
        source: "qrc:/img/img/logo.png"
    }
    Loader{
        id: pathLoader
        property int currentNum: -1
        anchors.left: parent.left
        anchors.right: parent.right
        anchors.top: sysToolBar.bottom
        anchors.margins: 2
        anchors.topMargin: 0
        height: 3*parent.height/4
        clip: true
        source: "qrc:/robo/qml/hitRobotGroup/HomeInfoPage.qml"
        onLoaded: {
            if(pathLoader.item.datamodel !== "undefined")
                pathLoader.item.datamodel = dataModel
            if(pathLoader.item.currentNum !== "undefined" && pathLoader.currentNum > 0)
                pathLoader.item.currentNum = pathLoader.currentNum
        }
        Connections{
            ignoreUnknownSignals: true
            target: pathLoader.item
            onChoosen:{
                pathLoader.currentNum = c_num;
                pathLoader.source = "qrc:/robo/qml/hitRobotGroup/RobInfoPage.qml"
            }
        }
    }
    /*Rectangle{
        id:sideBar
        anchors.right: parent.right
        anchors.top: pathLoader.top
        anchors.bottom: pathLoader.bottom
        width: parent.width/40>5?parent.width/40:5
        Rectangle{
            id: sideBtn
            color: "steelblue"
            width: 40
            height: parent.height
            anchors.left: parent.left
            anchors.top: parent.top
            Text {
                id: sideTag
                anchors.centerIn: parent
                width: 40
                height: 20
                text: qsTr("<<")
                verticalAlignment: Text.AlignVCenter
                horizontalAlignment: Text.AlignHCenter
            }
            MouseArea{
                anchors.fill: parent
                onClicked: sideBar.state === "normal"?sideBar.state = "expand":sideBar.state = "normal"
            }
        }
        Rectangle{
            id: detailInfo
            color: "lightsteelblue"
            anchors.left: sideBtn.right
            anchors.top: parent.top
            anchors.bottom: parent.bottom
            anchors.right: parent.right
            TextArea {
                id: detailInfoArea
                anchors.fill: parent
                anchors.leftMargin: 2
                anchors.topMargin: 2
                anchors.bottomMargin: 2
                anchors.rightMargin: 2
            }
        }
        states: [
            State {
                name: "normal"
                PropertyChanges {
                    target: sideBar
                    width: 40
                }
                PropertyChanges {
                    target: sideTag
                    text: "<<"
                }
                PropertyChanges {
                    target: detailInfo
                    opacity: 0
                    enabled:false
                }
            },
            State {
                name: "expand"
                PropertyChanges {
                    target: sideBar
                    width: root.width/2
                }
                PropertyChanges {
                    target: sideTag
                    text: ">>"
                }
                PropertyChanges {
                    target: detailInfo
                    opacity: 1
                    enabled: true
                }
            }
        ]
        Component.onCompleted: state = "normal"
    }*/

    Rectangle{
        id: toolBar
        anchors.left: parent.left
        anchors.right: parent.right
        anchors.top: pathLoader.bottom
        anchors.bottom: parent.bottom
        anchors.topMargin: 2
        ListView{
            anchors.centerIn: parent
            width: btnModel.count*(btnWidth+btnSpace)-btnSpace
            height: btnHeight
            model: btnModel
            clip: true
            orientation: ListView.Horizontal
            spacing: btnSpace
            delegate: Component{
                Button{
                    width: btnWidth
                    height: btnHeight
                    iconSource: smallSize
                    onClicked: {
                        pathLoader.source = sourceURL
                    }
                }
            }
        }
    }
    Connections{
        target:transaction
        onUploadRobotDevice:{
            RobotOP.addRobotModelData(dataModel, t_device)
        }
        onOffLine:{
            RobotOP.setOffLineStatus(dataModel, num)
        }
        onServerDisConnected: dataModel.clear()
    }
    onStateChanged: {
        if(state === "max"){
            mainWindow.setX(0)
            mainWindow.setY(0)
        }
    }
    Connections{
        target: mainWindow
        onWidthChanged: width = mainWindow.width
        onHeightChanged: height = mainWindow.height
    }
}
