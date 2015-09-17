import QtQuick 2.0
import QtQuick.Controls 1.1
import QtQuick.Controls.Styles 1.1
import "robotDataOperation.js" as RobotOP
Rectangle {
    id: root
    width: 600
    height: 480
    property int fontSize: 12
    property string tabSelectColor: "green"
    property string tabReleaseColor: "white"
    property bool serverConnected: false
    property string dialogText: {
        if(!serverConnected)
            "网络连接中...."
        else
            "等待设备连接..."

    }

    signal cpu_changed()
    TabView{
        id: tabView
        anchors.fill: parent
        style: TabViewStyle{
            frameOverlap: 1
            tab:Rectangle{
                color: styleData.selected ? tabSelectColor:tabReleaseColor
                border.color: color
                implicitWidth: Math.max(text.width+4,Math.min(50, root.width/(tabModel.count+1)))
                implicitHeight: 30
                radius: 2
                BorderImage {
                    id: selected
                    source: "qrc:/img/img/header.png"
                    anchors.fill: parent
                }
                SequentialAnimation {
                    running: true; loops: Animation.Infinite
                    NumberAnimation { target:selected; property: "opacity"; to: 1.0; duration: 900}
                    NumberAnimation { target:selected; property: "opacity"; to: 0.5; duration: 900}
                }
                Text {
                    id: text
                    anchors.centerIn: parent
                    text: "编号"+styleData.title
                    color: styleData.selected ? "black" : "gray"
                    font.pixelSize: 15
                }
            }
        }

        Connections{
            target:transaction
            onUploadRobotDevice:{
                RobotOP.addRobotStatus(tabModel, tabView,
                                       tabDelegate, t_device)
            }
            onOffLine:{
                RobotOP.deleteOFFlineData(tabView, tabModel,num)
            }
        }
    }

    Loader{
        id: page_load
        anchors.fill: parent
        sourceComponent: loaderPage
        active: !tabModel.count
    }

    BorderImage {
        id: name
        source: "qrc:/img/img/header.png"
        anchors.fill: parent
        opacity: 0.2
    }
    Component{
        id: loaderPage
        Rectangle{
            Text {
                anchors.left: parent.left
                anchors.right: parent.right
                anchors.top: parent.top
                verticalAlignment: Text.AlignVCenter
                horizontalAlignment: Text.AlignHCenter
                font.pixelSize: 20
                wrapMode: Text.Wrap
                text: dialogText
            }
            Image {
                anchors.centerIn: parent
                source: "qrc:/img/img/WaitNote.png"
                NumberAnimation on rotation {
                    loops: Animation.Infinite
                    from: 0
                    to: 360
                    duration: 1500
                }
            }
        }
    }
    Connections{
        target:transaction
        onServerConnected:{
            serverConnected = true
            if(serverConnected && tabModel.count){
                page_load.source = ""
                page_load.active = false
            }
        }
    }
//    Connections{
//        target: transaction
//        onServerDisConnected:{
//            page_load.sourceComponent = loaderPage
//            page_load.active = true
//            console.log("disconnected")
//        }
//    }

    ListModel{
        id:tabModel
    }
    Component{
        id:tabDelegate
        Rectangle{
            id:comRec
            border.color: "green"
            color: "black"
            border.width: 2
            radius: 2
            property int rowWidth: width/4
            property int labelWidth: rowWidth - 2
            property int labelHeight: height/6 > 48?48:height/6
            Row{
                id: status_row
                anchors.fill: parent
                anchors.margins: 2
                spacing: 2
                Column{
                    width: comRec.rowWidth*2
                    height: parent.height
                    spacing: 2
                    Row{
                        id : img_row
                        width: parent.width
                        height: comRec.labelHeight*4+6
                        spacing: 2
                        RobotFace {
                            id: robotFace
                            width: parent.width/2
                            height: parent.height
                        }
                        Column{
                           width: comRec.rowWidth
                           height: parent.height
                           spacing: 2
                           RobInfoLabel{
                               id: id_label
                               width: comRec.labelWidth
                               height: comRec.labelHeight
                               text:"卡号"

                           }
                           RobInfoLabel{
                               id: x_label
                               width: comRec.labelWidth
                               height: comRec.labelHeight
                               text: "相对坐标x"
                           }
                           RobInfoLabel{
                               id: y_label
                               width: comRec.labelWidth
                               height: comRec.labelHeight
                               text: "相对坐标y"

                           }
                           RobInfoLabel{
                               id: r_label
                               width: comRec.labelWidth
                               height: comRec.labelHeight
                               text: "相对弧度"

                           }
                        }
                    }
                    Row{
                        width: parent.width
                        height: parent.height - img_row.height - 2
                        spacing: 4
                        Rectangle{
                            width: comRec.labelWidth
                            height: (parent.height)
                            color: "transparent"
                            border.color: "green"
                            radius: 2
                            RobInfoLabel{
                                id: cpu_idle
                                text: "CPU空闲计数"
                                anchors{
                                    left: parent.left
                                    top: parent.top
                                }
                                width: comRec.labelWidth
                                height: comRec.labelHeight

                            }
                            Rectangle{
                                color: "transparent"
                                anchors{
                                    left: parent.left
                                    right: parent.right
                                    top: cpu_idle.bottom
                                    bottom: parent.bottom
                                }
                                CPUBoard{
                                    id: idle_board
                                    colorChange: false
                                    anchors.centerIn: parent
                                    width: parent.width>parent.height?parent.height-1:parent.width-1
                                    height: width

                                }
                            }
                        }

                        Rectangle{
                            width: comRec.labelWidth
                            height: (parent.height)
                            color: "transparent"
                            border.color: "green"
                            radius: 2
                            RobInfoLabel{
                                id: cpu_used
                                text: "CPU使用率"
                                anchors{
                                    left: parent.left
                                    top: parent.top
                                }
                                width: comRec.labelWidth
                                height: comRec.labelHeight
                            }
                            Rectangle{
                                color: "transparent"
                                anchors{
                                    left: parent.left
                                    right: parent.right
                                    top: cpu_used.bottom
                                    bottom: parent.bottom

                                }
                                CPUBoard{
                                    id: used_board
                                    anchors.centerIn: parent
                                    width: parent.width>parent.height?parent.height - 1:parent.width - 1
                                    height: width

                                }
                            }
                        }
                    }
                }
                Column{
                   width: comRec.rowWidth
                   height: parent.height
                   spacing: 2
                   RobInfoLabel{
                       id:fs_label
                       width: comRec.labelWidth
                       height: comRec.labelHeight
                       text: "前进速度"
                   }
                   RobInfoLabel{
                       id:rs_label
                       width: comRec.labelWidth
                       height: comRec.labelHeight
                       text: "转向速度"

                   }
                   RobInfoLabel{
                       id:status_label
                       width: comRec.labelWidth
                       height: comRec.labelHeight
                       text: "状态"

                   }
                   RobInfoLabel{
                       id:sm_label
                       width: comRec.labelWidth
                       height: comRec.labelHeight
                       text: "状态机"

                   }
                   RobInfoLabel{
                       id:ms_label
                       width: comRec.labelWidth
                       height: comRec.labelHeight
                       text: "磁条位置"

                   }
                   RobInfoLabel{
                       id:battery_label
                       width: comRec.labelWidth
                       height: comRec.labelHeight
                       text: "电池电压"
                   }

                }
                Rectangle{
                    width: comRec.rowWidth
                    height: parent.height-2
                    border.color: "green"
                    color: "transparent"
                    Rectangle{
                        id:errorTitle
                        anchors{
                            left:parent.left
                            right: parent.right
                            top:parent.top
                        }
                        height: comRec.labelHeight
                        color: "green"
                        radius: 2
                        Label{
                            anchors.fill: parent
                            color: "white"
                            text: "停止错误"
                            horizontalAlignment: Text.AlignHCenter
                            verticalAlignment: Text.AlignVCenter
                        }
                    }
                    Rectangle{
                        color: "transparent"
                        anchors{
                            left: parent.left
                            right: parent.right
                            top:errorTitle.bottom
                            bottom: parent.bottom
                        }
                        Label{
                            id: error_label
                            anchors.fill: parent
                            horizontalAlignment: Text.AlignHCenter
                            verticalAlignment: Text.AlignVCenter
                            color: "white"
                        }
                    }
                }
            }
            //更新机器人数据
            function updateRobData(num){
                for(var i = 0; i < tabModel.count; i++){
                    if(tabModel.get(i).tabNum === num){
                        cpu_idle.value = RobotOP.formatfloat(Number(tabModel.get(i).rob_CPU_idle)*100/72000,0).toString()+"%"
                        idle_board.changeValue(RobotOP.formatfloat(Number(tabModel.get(i).rob_CPU_idle)*100/72000,0))
                        cpu_used.value =  RobotOP.formatfloat((1-Number(tabModel.get(i).rob_CPU_idle)/72000)*100,0).toString()+"%"
                        used_board.changeValue(RobotOP.formatfloat((100-Number(tabModel.get(i).rob_CPU_idle)*100/72000),0))
                        id_label.value = tabModel.get(i).rob_IDCard
                        x_label.value = tabModel.get(i).rob_x+"mm"
                        y_label.value = tabModel.get(i).rob_y+"mm"
                        r_label.value = tabModel.get(i).rob_round
                        fs_label.value = tabModel.get(i).rob_forward_speed*0.1+"m/s"
                        rs_label.value = tabModel.get(i).rob_turn_speed
                        status_label.value = RobotOP.carState(tabModel.get(i).rob_car_status)
                        sm_label.value = RobotOP.carSM(tabModel.get(i).rob_car_status_machine)
                        ms_label.value = tabModel.get(i).rob_ms_position
                        battery_label.value = tabModel.get(i).rob_power
                        error_label.text = RobotOP.carError(tabModel.get(i).rob_error_id)
                        robotFace.setStatus(tabModel.get(i).rob_error_id)
                        break;
                    }
                }
            }
            Connections{
                target: transaction
                onUploadRobotDevice:comRec.updateRobData(tabView.currentIndex)
            }
            Component.onCompleted: {
                comRec.updateRobData(tabView.currentIndex)
            }
        }
    }
}
