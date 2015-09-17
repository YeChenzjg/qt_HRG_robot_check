import QtQuick 2.0

Rectangle {
    width: 100
    height: 62
    property ListModel datamodel: null
    property int currentNum: -1

    ServerConnectedRectangle{
        anchors.centerIn: parent
        width: 570
        height: 62
    }
}
