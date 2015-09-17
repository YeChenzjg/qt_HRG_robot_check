import QtQuick 2.0
import QtQuick.Controls 1.1
Rectangle {
    id: root
    width: 100
    height: 62
    property string labelText: ""
    property string normalText: ""
    Rectangle{
        id:bacRec
        anchors.fill: parent
        color: "green"
        Label{
            id: bacLabel
            anchors.fill: parent
            verticalAlignment: Text.AlignVCenter
            horizontalAlignment: Text.AlignHCenter
            wrapMode: Text.Wrap
            font.pixelSize: width/text.length - 2>height-2?height-2:width/text.length-2
            text: normalText
        }
    }
    Rectangle{
        id: errorRec
        anchors.fill: parent
        color: "red"
        Label{
            id: text_label
            anchors.fill: parent
            verticalAlignment: Text.AlignVCenter
            horizontalAlignment: Text.AlignHCenter
            wrapMode: Text.Wrap
            font.pixelSize: width/text.length - 2>height-2?height-2:width/text.length-2
            text: labelText
        }
    }
    states: [
        State{
            name: "disable"
            PropertyChanges {
                target: text_label
                opacity: 0
            }
            PropertyChanges {
                target: bacRec
                color:"gray"
                opacity:1
            }
            PropertyChanges {
                target: bacLabel
                color: "gray"
            }
            PropertyChanges {
                target: errorRec
                opacity:0
            }
        },
        State {
            name: "normal"
            PropertyChanges {
                target: bacRec
                color: "green"
                opacity:1
            }
            PropertyChanges {
                target: bacLabel
                color: "black"
                text: normalText
            }
            PropertyChanges {
                target: errorRec
                opacity:0
            }

        },
        State {
            name: "unnormal"
            PropertyChanges {
                target: bacRec
                color: "green"
                opacity:0
            }
            PropertyChanges {
                target: errorRec
                opacity:1
            }
        }
    ]
    transitions: [
        Transition {
            from: "unnormal"
            to: "normal"
            NumberAnimation { target: errorRec; property: "opacity"; duration: 5000}
            NumberAnimation { target: bacRec; property: "opacity"; duration: 5000}
        }
    ]
}
