import QtQuick 2.0
import QtQuick.Controls 1.1

Rectangle {
    property ListModel datamodel: null
    property int currentNum: -1
    width: 100
    height: 62
    Rectangle{
        id: patternRec
        height: 50
        anchors.top: parent.top
        anchors.left: parent.left
        anchors.right: parent.right
        ExclusiveGroup{
            id: patternGroup
        }
        Row{
            id: robotNumRow
            anchors.left: parent.Left
            anchors.top: parent.top
            height: parent.height
            width: 200
            Label{
                width: parent.width/3
                height: parent.height
                text: "机器人编号"
                verticalAlignment: Text.AlignVCenter
                horizontalAlignment: Text.AlignHCenter
                wrapMode: Text.Wrap
            }

            ComboBox{
                id: robotNumBox
                width: parent.width*2/3
                height: parent.height
                textRole: "rob_num"
                model: datamodel
            }
        }

        Row{
            anchors.left:robotNumRow.right
            anchors.right: parent.right
            anchors.top: parent.top
            anchors.leftMargin: 10

            height: parent.height
            RadioButton{
                id: manulChoosen
                width: parent.width/3
                height: parent.height
                exclusiveGroup: patternGroup
                text: "手动控制"
                checked: true
            }
            RadioButton{
                id: automaticChoosen
                width: parent.width/3
                height: parent.height
                exclusiveGroup: patternGroup
                text: "自动取餐"
            }
            RadioButton{
                id: configureChoosen
                width: parent.width/3
                height: parent.height
                exclusiveGroup: patternGroup
                text: "参数配置"
            }
        }
    }

    Loader{
        id: pageLoader
        anchors.left: parent.left
        anchors.right: parent.right
        anchors.bottom: parent.bottom
        anchors.top: patternRec.bottom
        property int currentRobotNum: {
            if(datamodel != null && datamodel.count > 0)
                datamodel.get(robotNumBox.currentIndex).rob_num
            else -1
        }

        source: {
            if(manulChoosen.checked)
                "qrc:/robo/qml/hitRobotGroup/ManualControlComponent.qml"
            else if(automaticChoosen.checked)
                "qrc:/robo/qml/hitRobotGroup/AutoControlComponent.qml"
            else if(configureChoosen.checked)
                ""
            else ""
        }
        onLoaded: gc()
    }

}
