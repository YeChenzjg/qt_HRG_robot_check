import QtQuick 2.0
import QtQuick.Controls 1.1
Rectangle {
    id:root
    width: 100
    height: 62
    signal home()
    signal clear()
    color: "lightsteelblue"
    Column{
        anchors.fill: parent
        anchors.margins: 1
        Rectangle{
            width: parent.width
            height: 50
            color: "transparent"
            Button{
                id: homeBtn
                width: 40
                height: 40
                anchors.centerIn: parent
                text: "主页"
                onClicked: root.home()
            }
        }
        Rectangle{
            width: parent.width
            height: 50
            color: "transparent"
            Button{
                id: clearBtn
                width: 40
                height: 40
                anchors.centerIn: parent
                text: "断线\n清除"
                onClicked: root.clear()
            }
        }
    }
}
