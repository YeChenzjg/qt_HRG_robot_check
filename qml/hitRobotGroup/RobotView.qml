import QtQuick 2.0
import "robotDataOperation.js" as RobotOP

Rectangle {
    width: 800
    height: 600
    property int currentRobNum: -1
    ToolBar{
        id: btns
        anchors.left: parent.left
        anchors.top: parent.top
        anchors.bottom: parent.bottom
        width: 50

    }
    ServerConnectedRectangle{
        id: serverRec
        anchors.left: btns.right
        anchors.bottom: parent.bottom
        anchors.right: parent.right
        height: 50
    }
    Rectangle {
        id: logo_label
        anchors.top: parent.top
        anchors.left: btns.right
        anchors.right: parent.right
        height: 50
        Image{
            height: parent.height-2
            width: 400
            anchors.rightMargin: 10
            anchors.topMargin: 2
            anchors.right: parent.right
            anchors.top: parent.top
            source: "qrc:/img/img/logo.png"
        }
    }
    Loader{
        id: pageLoader
        anchors.left: btns.right
        anchors.top: logo_label.bottom
        anchors.right: parent.right
        anchors.bottom: serverRec.top
        sourceComponent: gridComponent
        anchors.topMargin: 2
    }

    ListModel{
        id: gridModel
    }
    Connections{
        target:transaction
        onUploadRobotDevice:{
            RobotOP.addRobotModelData(gridModel, t_device)
        }
        onOffLine:{
            RobotOP.setOffLineStatus(gridModel, num)
        }
    }
    Connections{
        target:btns
        onHome: pageLoader.sourceComponent = gridComponent
        onClear: RobotOP.clearOffLine(gridModel)
    }


    Component{
        id:infoComponent
        RobotStatusComponent{
            model: gridModel
            r_num: currentRobNum
        }
    }
    Component{
        id: gridComponent
        GridView{
            id: gridView
            cellHeight: 150
            cellWidth: 180
            model: gridModel
            delegate: gridDelegate
            Component{
                id: gridDelegate
                RobErrorLabel{
                    id: com_root
                    width: gridView.cellWidth - 5
                    height: gridView.cellHeight - 5
                    errorCode: rob_error_id
                    leftoff: rob_leftoff
                    rightoff: rob_rightoff
                    state: {
                        if(offline)
                            "offline"
                        else
                            rob_error_id === 0?"normal":"unnormal"
                    }

                    num: "编号:\n"+rob_num
                    rob_status: RobotOP.carState(rob_car_status)
                    Connections{
                        target: com_root
                        onClicked:{
                            currentRobNum = rob_num
                            pageLoader.sourceComponent = infoComponent

                        }
                    }
                }
            }
        }
    }

}
