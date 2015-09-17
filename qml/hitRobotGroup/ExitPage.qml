import QtQuick 2.0
import QtQuick.Controls 1.1
Rectangle {
    width: 100
    height: 62
    property ListModel datamodel: null
    property int currentNum: -1
    Label{
        id: textLabel
        text: "退出系统？"
        verticalAlignment: Text.AlignVCenter
        horizontalAlignment: Text.AlignHCenter
        font.pixelSize: 15
        anchors.verticalCenter: parent.verticalCenter
        anchors.horizontalCenter: parent.horizontalCenter
        width: parent.width/3
        height: 30
    }
    Row{
        id: btnRow
        anchors.left: textLabel.left
        anchors.right: textLabel.right
        anchors.top: textLabel.bottom
        height:50
        Button{
            text: "确定"
            width: parent.width/2
            height: parent.height
            onClicked: transaction.exitSys()
        }
        Button{
            text: "取消"
            width: parent.width/2
            height: parent.height
        }
    }
}
