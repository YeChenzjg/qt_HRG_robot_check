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
    property ListModel model: null
    property int r_num: -1
    Rectangle{
        id: title_label
        anchors.left: parent.left
        anchors.right: parent.right
        anchors.top: parent.top
        height: 40
        radius: 5
        color: "steelblue"
        Text {
            text: "机器人编号："+RobotOP.padLeft(r_num.toString(16),"0",4)
            verticalAlignment: Text.AlignVCenter
            horizontalAlignment: Text.AlignHCenter
            anchors.fill: parent
            font.pixelSize: 15
        }
    }

    Rectangle{
        id:comRec
        anchors.left:parent.left
        anchors.right: parent.right
        anchors.bottom: parent.bottom
        anchors.top: title_label.bottom
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
                    spacing: 2
                    Rectangle{
                        width: parent.width/2
                        height: parent.height
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
                                width: parent.width>parent.height?parent.height -2:parent.width -2
                                height: width

                            }
                        }
                    }
                    Rectangle{
                        width:  comRec.labelWidth
                        height: parent.height
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
                   fontSize: 20
               }
               RobInfoLabel{
                   id:battery_label
                   width: comRec.labelWidth
                   height: comRec.labelHeight
                   text: "电池电压"
               }
               RobInfoLabel{
                   id: r_forbiden
                   width: comRec.labelWidth
                   height: comRec.labelHeight
                   text: "当前禁区"
               }
            }
        }
    }
    //更新机器人数据
    function updateRobData(num){
        if(model===null)
            return;
        for(var i = 0; i < model.count; i++){
            if(model.get(i).rob_num === num){
                //cpu_idle.value = RobotOP.formatfloat(Number(model.get(i).rob_CPU_idle)*100/72000,0).toString()+"%"
                //idle_board.changeValue(RobotOP.formatfloat(Number(model.get(i).rob_CPU_idle)*100/72000,0))
                cpu_used.value =  RobotOP.formatfloat((1-Number(model.get(i).rob_CPU_idle)/72000)*100,0).toString()+"%"
                used_board.changeValue(RobotOP.formatfloat((1-Number(model.get(i).rob_CPU_idle)/72000)*100,0))
                id_label.value = model.get(i).rob_IDCard
                x_label.value = model.get(i).rob_x+"mm"
                y_label.value = model.get(i).rob_y+"mm"
                r_label.value = model.get(i).rob_round
                fs_label.value = model.get(i).rob_forward_speed*0.1+"m/s"
                rs_label.value = model.get(i).rob_turn_speed
                status_label.value = RobotOP.carState(model.get(i).rob_car_status)
                sm_label.value = RobotOP.carSM(model.get(i).rob_car_status_machine)
                ms_label.value = model.get(i).rob_ms_position
                battery_label.value = RobotOP.formatfloat(model.get(i).rob_power*0.1500,2)+"V"
                error_label.text = RobotOP.carError(model.get(i).rob_error_id)
                robotFace.setStatus(model.get(i).rob_error_id)
                r_forbiden.value = model.get(i).rob_forbiden
            }
        }
        gc()
    }
    Connections{
        target: transaction
        onUploadRobotDevice:updateRobData(r_num)
    }
    Component.onCompleted: {
        updateRobData(r_num)
    }
}
