import QtQuick 2.2
import QtQuick.Controls 1.1
import "robotDataOperation.js" as RobotOP
Rectangle {
    id: root
    width: 100
    height: 62
    property ListModel datamodel: null
    property int currentNum: -1
    signal choosen(int c_num)
    GridView{
        id: gridView
        model:datamodel
        delegate: gridDelegate
        cellHeight: 150
        cellWidth: 180
        anchors.fill:parent
    }
    Component{
        id:gridDelegate
        RobErrorLabel{
            id: com_root
            width: offline? 0:gridView.cellWidth - 5
            height: offline?0:gridView.cellHeight - 5
            errorCode: Number(rob_error_id)
            leftoff: rob_leftoff
            rightoff: rob_rightoff
            offLine: offline
            state: rob_error_id === 0?"normal":"unnormal"


            num: rob_num
            rob_status: RobotOP.carState(rob_car_status)


            Connections{
                onChoosen: root.choosen(num)
            }
        }
    }
}
