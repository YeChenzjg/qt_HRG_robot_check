import QtQuick 2.0

BorderImage {
    id: root
    function setStatus(code){
        if(code === 0)
            root.state = "normal"
        else
            root.state = "unnormal"
    }

    states: [
        State {
            name: "normal"
            PropertyChanges {
                target: animateNormal
                running: true
            }
            PropertyChanges {
                target: animateUnnormal
                running: false
            }
        },
        State{
          name: "unnormal"
          PropertyChanges {
              target: animateNormal
              running: false
          }
          PropertyChanges {
              target: animateUnnormal
              running: true
          }
        }

    ]
    SequentialAnimation on source{
        id: animateNormal
        running: false
        loops:Animation.Infinite
        PropertyAnimation{to: "qrc:/img/img/wall.png"}
        PropertyAnimation{to: "qrc:/img/img/wall3.png"}
    }
    SequentialAnimation on source{
        id: animateUnnormal
        running: false
        loops:Animation.Infinite
        PropertyAnimation{to: "qrc:/img/img/wall2.png"}
        PropertyAnimation{to: "qrc:/img/img/wall4.png"}
    }
}
