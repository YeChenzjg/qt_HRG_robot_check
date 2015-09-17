import QtQuick 2.0
import QtQuick.Controls 1.1
Rectangle{
    color: "green"
    property alias text: title.text
    property alias value: value_label.text
    property color fontColor: "white"
    property int fontSize: 15
    radius: 2

    Row{
        anchors.fill: parent
        Label{
            id: title
            width: parent.width/2
            height: parent.height
            horizontalAlignment: Text.AlignHCenter
            verticalAlignment: Text.AlignVCenter
            wrapMode: Text.Wrap
            color: fontColor
        }
        Label{
            id: value_label
            width: parent.width/2
            height: parent.height
            horizontalAlignment: Text.AlignHCenter
            verticalAlignment: Text.AlignVCenter
            color: fontColor
            wrapMode: Text.Wrap
            font.pixelSize: fontSize
        }
    }
}
