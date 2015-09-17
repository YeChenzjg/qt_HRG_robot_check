import QtQuick 2.0

Rectangle {
    width: 100
    height: 62
    property string icon: ""
    property string describe: ""
    Image {
        id: image
        source: icon
        anchors.left: parent.left
        anchors.leftMargin: 10
        anchors.verticalCenter: parent.verticalCenter
    }

}
