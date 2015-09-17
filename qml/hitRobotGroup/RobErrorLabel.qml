import QtQuick 2.0
import QtQuick.Controls 1.1
import "robotDataOperation.js" as RobotOP
Rectangle {
    id: root
    width: 100
    height: 62
    radius: 3
    property int num: -1
    property int errorCode: 0
    property string rob_status: ""
    property int leftoff: 0
    property int rightoff: 0
    property int offLine: 0
    border.width: 2
    signal choosen(int num)
    enabled: offLine?false:true
    visible: offLine?false:true

    Column{
        anchors.fill: parent
        spacing: 1
        enabled: parent.enabled
        Row{
            enabled: parent.enabled
            width: parent.width
            height: parent.height/6
            Label{
                enabled: parent.enabled
                id: num_lable
                width: parent.width/2
                height: parent.height
                verticalAlignment: Text.AlignVCenter
                horizontalAlignment: Text.AlignHCenter
                text: "编号:"+RobotOP.padLeft(num.toString(16),"0",4)
            }
            Label{
                enabled: parent.enabled
                id: st_label
                width: parent.width/2
                height: parent.height
                verticalAlignment: Text.AlignVCenter
                horizontalAlignment: Text.AlignHCenter
            }
        }
        Rectangle{
            enabled: parent.enabled
            width: parent.width
            height: parent.height - st_label.height - 1
            border.width: 2
            radius: 3
            Grid{
                enabled: parent.enabled
                id: grid
                columns: 2
                rows: 6
                spacing: 1
                anchors.fill: parent
                anchors.leftMargin: 2
                anchors.rightMargin: 2
                anchors.topMargin: 2
                property int labelWidth: (width-0.5)/2
                property int labelHeight: (height-3.9)/6
                ErrorLabel{
                    id: error_0
                    enabled: parent.enabled
                    width: grid.labelWidth
                    height: grid.labelHeight
                    labelText: "左轮断线"
                    normalText: "左轮在线"
                    state: {

                            if(leftoff)
                                "unnormal"
                            else "normal"

                    }
                }
                ErrorLabel{
                    id: error_4
                    enabled: parent.enabled
                    width: grid.labelWidth
                    height: grid.labelHeight
                    labelText: "右轮断线"
                    normalText: "右轮在线"
                    state: {
                            if(rightoff)
                                "unnormal"
                            else "normal"
                    }
                }
                ErrorLabel{
                    id: error_1
                    enabled: parent.enabled
                    width: grid.labelWidth
                    height: grid.labelHeight
                    labelText: "左轮未学习"
                    normalText: "左轮已学习"
                    state: {
                        if(leftoff)
                            "disable"
                        else{
                            if((errorCode & 0x03) === 0x01)//1
                                "unnormal"
                            else "normal"
                        }

                    }
                }
                ErrorLabel{
                    id: error_5
                    enabled: parent.enabled
                    width: grid.labelWidth
                    height: grid.labelHeight
                    labelText: "右轮未学习"
                    normalText: "右轮已学习"
                    state: {
                        if(leftoff)
                            "disable"
                        else{
                            if(((errorCode>>2) & 0x03) === 1 )//4
                                "unnormal"
                            else "normal"
                        }

                    }
                }
                ErrorLabel{
                    id: error_2
                    enabled: parent.enabled
                    width: grid.labelWidth
                    height: grid.labelHeight
                    labelText: "左轮子堵转"
                    normalText: "左轮转正常"
                    state: {
                        if(leftoff)
                            "disable"
                        else{
                            if((errorCode & 0x03) === 0x02 )//2
                                "unnormal"
                            else "normal"
                        }
                    }
                }
                ErrorLabel{
                    id: error_6
                    enabled: parent.enabled
                    width: grid.labelWidth
                    height: grid.labelHeight
                    labelText: "右轮子堵转"
                    normalText: "右轮转正常"
                    state: {
                        if(leftoff)
                            "disable"
                        else{
                            if(((errorCode>>2) & 0x03) === 2 )//8
                                "unnormal"
                            else "normal"
                        }

                    }
                }
                ErrorLabel{
                    id: error_3
                    enabled: parent.enabled
                    width: grid.labelWidth
                    height: grid.labelHeight
                    labelText: "左霍尔错误"
                    normalText: "左霍尔正常"
                    state: {
                        if(leftoff)
                            "disable"
                        else{
                            if((errorCode & 0x03) === 0x03 )//3
                                "unnormal"
                            else "normal"
                        }

                    }
                }
                ErrorLabel{
                    id: error_7
                    enabled: parent.enabled
                    width: grid.labelWidth
                    height: grid.labelHeight
                    labelText: "右霍尔错误"
                    normalText: "右霍尔正常"
                    state: {
                        if(leftoff)
                            "disable"
                        else{
                            if(((errorCode>>2) & 0x03) === 3 )//12
                                "unnormal"
                            else "normal"
                        }
                    }
                }
                ErrorLabel{
                    id: error_8
                    enabled: parent.enabled
                    width: grid.labelWidth
                    height: grid.labelHeight
                    labelText: "紧急制动开"
                    normalText: "紧急制动关"
                    state: {
                        if(rightoff)
                            "disable"
                        else{
                            if(((errorCode>>4) & 0x01) === 1 )//16
                                "unnormal"
                            else "normal"
                        }
                    }
                }
                ErrorLabel{
                    id: error_9
                    enabled: parent.enabled
                    width: grid.labelWidth
                    height: grid.labelHeight
                    labelText: "读卡器异常"
                    normalText: "读卡器正常"
                    state: {
                        if(rightoff)
                            "disable"
                        else{
                            if((errorCode >> 5) & 0x01 === 0x01)//32
                                "unnormal"
                            else "normal"
                        }
                    }
                }
                ErrorLabel{
                    id: error_10
                    enabled: parent.enabled
                    width: grid.labelWidth
                    height: grid.labelHeight+2.5
                    labelText: "磁传感异常"
                    normalText: "磁传感正常"
                    state: {
                        if(rightoff)
                            "disable"
                        else{
                            if(((errorCode>>6) & 0x01) === 1 )//64
                                "unnormal"
                            else "normal"
                        }
                    }

                }
                ErrorLabel{
                    id: error_11
                    enabled: parent.enabled
                    width: grid.labelWidth
                    height: grid.labelHeight+2.5
                    labelText: "超声波异常"
                    normalText: "超声波正常"
                    state: {
                        if(rightoff)
                            "disable"
                        else{
                            if(((errorCode>>7) & 0x01) === 1 )//128
                                "unnormal"
                            else "normal"
                        }
                    }
                }
            }
        }
    }

    SequentialAnimation on color{
        id: animate
        running: false
        loops:Animation.Infinite
        PropertyAnimation{to: "red";duration: 1000}
        PropertyAnimation{to: "white";duration: 1000}
    }
    states: [
        State {
            name: "normal"
            PropertyChanges {
                target: animate
                running: false
            }
            PropertyChanges {
                target: root
                color: "green"
            }
            PropertyChanges {
                target: st_label
                text: rob_status
            }
        },
        State {
            name: "unnormal"
            PropertyChanges {
                target: animate
                running: true
            }
            PropertyChanges {
                target: st_label
                text: "错误"
            }
        }
    ]
    MouseArea{
        enabled: parent.enabled
        anchors.fill: parent
        onClicked: root.choosen(num)
    }
}
