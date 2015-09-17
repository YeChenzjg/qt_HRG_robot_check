import QtQuick 2.0
import QtQuick.Controls 1.1
Rectangle {
    width: 100
    height: 62
    color: "lightsteelblue"
    Row{
        anchors.fill: parent
        anchors.margins: 1
        Rectangle{
            id: set_label
            width: parent.width/4
            height: parent.height
            color: "transparent"
            Column{
                anchors.fill: parent
                Row{
                    width: parent.width
                    height: parent.height/2
                    Label{
                        width: parent.width/3
                        height: parent.height
                        verticalAlignment: Text.AlignVCenter
                        horizontalAlignment: Text.AlignHCenter
                        text:"Server:"
                    }
                    TextInput{
                        id: serverIP
                        width: parent.width*2/3
                        height: parent.height
                        cursorVisible: true
                        text: "192.168.1.230"
                        verticalAlignment: TextInput.AlignVCenter
                    }
                }
                Row{
                    width: parent.width
                    height: parent.height/2
                    Label{
                        width: parent.width/3
                        height: parent.height
                        verticalAlignment: Text.AlignVCenter
                        horizontalAlignment: Text.AlignHCenter
                        text:"  Port:"
                    }
                    TextInput{
                        id: serverPort
                        width: parent.width*2/3
                        height: parent.height
                        text: "8888"
                        verticalAlignment: TextInput.AlignVCenter
                    }
                }
            }
        }
        Button{
            width: 50
            height: 50
            id: connectBtn
            text: "连接"
        }
        Button{
            id: disconnectBtn
            width: 50
            height: 50
            text: "断线"
        }
        TextArea{
            id:textArea
            width: 200
            height: parent.height
        }
        Connections{
            target: connectBtn
            onClicked:{
                if(serverIP.text === "")
                    textArea.append("请输入server IP")
                else if(serverPort.text === "")
                    textArea.append("请输入server port")
                else{
                    textArea.append("连接服务器"+serverIP.text+":"+serverPort.text)
                    transaction.connectToServer(serverIP.text, Number(serverPort.text))
                }
            }
        }
        Connections{
            target: disconnectBtn
            onClicked:{
                textArea.append("断开连接")
                transaction.disConnectFromServer()
            }
        }
        Connections{
            target: transaction
            onServerConnected:{
                textArea.append("连接成功")
                serverIP.enabled = false
                serverPort.enabled = false
                set_label.color = "gray"
            }
        }
        Connections{
            target: transaction
            onServerDisConnected:{
                textArea.append("断开连接成功")
                serverIP.enabled = true
                serverPort.enabled = true
                set_label.color= "transparent"
            }
        }
    }
}
