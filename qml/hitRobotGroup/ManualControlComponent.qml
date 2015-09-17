import QtQuick 2.0
import QtQuick.Controls 1.1
Rectangle {
    width: 800
    height: 600
    property int robotCurrentNum: parent.currentRobotNum
    function controlAllBtns(enable){
        forwardBtn.enabled = enable
        tleftBtn.enabled = enable
        trightBtn.enabled = enable
        bacBtn.enabled = enable
        stopBtn.enabled = enable
    }
    Connections{
        target:transaction
        onRespondControl: controlAllBtns(true)
    }

    Row{
        anchors.fill: parent
        Rectangle{
            width: parent.width*2/3
            height: parent.height
            Text {
                id: centTitle
                width: parent.height/3
                height: parent.height/3
                anchors.centerIn: parent
                text: qsTr("小车控制")
                verticalAlignment: Text.AlignVCenter
                horizontalAlignment: Text.AlignHCenter
                wrapMode: Text.Wrap
            }
            Button{
                id: forwardBtn
                anchors.left: centTitle.left
                anchors.right: centTitle.right
                anchors.top: parent.top
                anchors.bottom: centTitle.top
                anchors.margins: 2
                iconSource: "qrc:/img/img/up.png"
                onClicked: {
                    if(robotCurrentNum > 0){
                        transaction.sendManualControlDataFromQML(robotCurrentNum,
                              speed_model.get(speed_box.currentIndex).value,
                                             roadYes.checked?0x01:0x00,0x00,
                                     mp3Model.get(mp3_box.currentIndex).num)
                        controlAllBtns(false)
                    }
                }
            }
            Button{
                id:tleftBtn
                anchors.left: parent.left
                anchors.right: centTitle.left
                anchors.top: centTitle.top
                anchors.bottom: centTitle.bottom
                anchors.margins: 2
                iconSource: "qrc:/img/img/t_left.png"
                onClicked: {
                    if(robotCurrentNum > 0){
                        transaction.sendManualControlDataFromQML(robotCurrentNum,
                                 0x00,roadYes.checked?0x01:0x00,
                              speed_model.get(speed_box.currentIndex).value,
                                     mp3Model.get(mp3_box.currentIndex).num)
                        controlAllBtns(false)
                    }
                }
            }
            Button{
                id: trightBtn
                anchors.left: centTitle.right
                anchors.top: centTitle.top
                anchors.bottom: centTitle.bottom
                anchors.right: parent.right
                anchors.margins: 2
                iconSource: "qrc:/img/img/t_right.png"
                onClicked: {
                    if(robotCurrentNum > 0){
                        transaction.sendManualControlDataFromQML(robotCurrentNum,
                                 0x00,roadYes.checked?0x01:0x00,
                         ~(speed_model.get(speed_box.currentIndex).value)+1,
                                     mp3Model.get(mp3_box.currentIndex).num)
                        controlAllBtns(false)
                    }
                }
            }
            Button{
                id: stopBtn
                anchors.fill: centTitle
                anchors.margins: 2
                iconSource: "qrc:/img/img/stop.png"
                onClicked: {
                    if(robotCurrentNum > 0){
                        transaction.sendManualControlDataFromQML(robotCurrentNum,
                                 0x00,0x00,0x00,0)
                        controlAllBtns(false)
                    }
                }
            }
            Button{
                id: bacBtn
                anchors.left: centTitle.left
                anchors.right: centTitle.right
                anchors.bottom: parent.bottom
                anchors.top: centTitle.bottom
                anchors.margins: 2
                iconSource: "qrc:/img/img/up.png"
                rotation: 180
                onClicked: {
                    if(robotCurrentNum > 0){
                        transaction.sendManualControlDataFromQML(robotCurrentNum,
                                 ~speed_model.get(speed_box.currentIndex).value+1,
                                                                 0x00,0x00,0)
                    }
                }
            }
        }
        Rectangle{
            width: parent.width/3
            height: parent.height/3
            Column{
                anchors.fill: parent
                spacing: 2
                Rectangle{
                    width: parent.width
                    height: parent.height/4 - 2
                    Row{
                        anchors.fill: parent
                        Label{
                            width: parent.width/3
                            height: parent.height
                            text: "行进速度："
                            verticalAlignment: Text.AlignVCenter
                            horizontalAlignment: Text.AlignHCenter
                        }
                        ComboBox{
                            id: speed_box
                            width: parent.width*2/3
                            height: parent.height
                            textRole: "num"
                            currentIndex: 2
                            model:ListModel{
                                id:speed_model
                                ListElement{num:1;value:0x01}
                                ListElement{num:2;value:0x02}
                                ListElement{num:3;value:0x03}
                                ListElement{num:4;value:0x04}
                                ListElement{num:5;value:0x05}
                                ListElement{num:6;value:0x06}
                                ListElement{num:7;value:0x07}
                                ListElement{num:8;value:0x08}
                                ListElement{num:9;value:0x09}
                                ListElement{num:10;value:0x0a}
                            }
                        }
                    }
                }
                Rectangle{
                    width: parent.width
                    height: parent.height/4 - 2
                    Row{
                        anchors.fill: parent
                        Label{
                            text: "是否循迹:"
                            width: parent.width/3
                            height: parent.height
                            verticalAlignment: Text.AlignVCenter
                            horizontalAlignment: Text.AlignHCenter
                        }
                        ExclusiveGroup{id:roadGroup}
                        RadioButton{
                            id: roadYes
                            width: parent.width/3
                            height: parent.height
                            exclusiveGroup: roadGroup
                            text: "yes"
                        }
                        RadioButton{
                            id: roadNo
                            width: parent.width/3
                            height: parent.height
                            exclusiveGroup: roadGroup
                            text: "no"
                            checked: true
                        }
                    }
                }
                Rectangle{
                    width: parent.width
                    height: parent.height/4 - 2
                    Row{
                        anchors.fill: parent
                        Label{
                            text: "有卡提示:"
                            width: parent.width/3
                            height: parent.height
                            verticalAlignment: Text.AlignVCenter
                            horizontalAlignment: Text.AlignHCenter
                        }
                        ExclusiveGroup{id:cardGroup}
                        RadioButton{
                            id: cardYes
                            width: parent.width/3
                            height: parent.height
                            exclusiveGroup: cardGroup
                            text: "yes"
                        }
                        RadioButton{
                            id: cardNo
                            width: parent.width/3
                            height: parent.height
                            exclusiveGroup: cardGroup
                            text: "no"
                            checked: true
                        }
                    }
                }
                Rectangle{
                    width: parent.width
                    height: parent.height/4
                    Row{
                        anchors.fill: parent
                        Label{
                            width: parent.width/3
                            height: parent.height
                            text: "MP3"
                            verticalAlignment: Text.AlignVCenter
                            horizontalAlignment: Text.AlignHCenter
                        }
                        ComboBox{
                            id: mp3_box
                            width: parent.width*2/3
                            height: parent.height
                            textRole: "num"
                            model:ListModel{
                                id: mp3Model
                                ListElement{num:0}
                                ListElement{num:1}
                                ListElement{num:2}
                                ListElement{num:3}
                                ListElement{num:4}
                                ListElement{num:5}
                                ListElement{num:6}
                                ListElement{num:7}
                                ListElement{num:8}
                                ListElement{num:9}
                                ListElement{num:10}
                            }
                        }
                    }
                }
            }
        }
    }
}
