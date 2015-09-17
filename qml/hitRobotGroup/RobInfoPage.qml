import QtQuick 2.0
import QtQuick.Controls 1.1
Rectangle {
    width: 100
    height: 62
    property ListModel datamodel: null
    property int currentNum: -1
    property int btnWidth: datamodel===null?0:width/(datamodel.count+1)
//    ListView{
//        id: listTitle
//        anchors.left: parent.left
//        anchors.right: parent.right
//        anchors.top: parent.top
//        height: 50
//        model:datamodel
//        orientation: ListView.Horizontal
//        delegate: Button{
//            width: btnWidth
//            height: listTitle.height
//            text: "机器人"+rob_num
//            onClicked: {
//                currentNum = rob_num
//                pageLoader.sourceComponent = infoComponent
//            }
//        }
//    }
    Loader{
        id:pageLoader
        active: {
            if(datamodel === null || datamodel.count === 0)
                false
            else
                true
        }
        anchors.fill: parent
//        anchors.top: listTitle.bottom
//        anchors.left: parent.left
//        anchors.right: parent.right
//        anchors.bottom: parent.bottom
    }
    Component{
        id:infoComponent
        RobotStatusComponent{
            model: datamodel
            r_num: currentNum
        }
    }
    Component.onCompleted: {
        if(parent.currentNum > 0){
            currentNum = parent.currentNum
            pageLoader.sourceComponent = infoComponent
        }
    }
}
