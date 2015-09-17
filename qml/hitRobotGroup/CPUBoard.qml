import QtQuick 2.0
Rectangle{
    id: root

    width: 100
    height: 100
    color: "transparent"
    property int value: 0
    property bool colorChange: true
    function changeValue(t_value){
        value = (t_value)
        canvas.requestPaint()
    }
    onValueChanged: canvas.requestPaint()
    Canvas {
        id: canvas
        anchors.fill: parent
        onPaint: {
            if(context)
                context.clearRect(0, 0, width, height)
            var ctx = getContext("2d")
            ctx.beginPath()
            if(value >= 50 && value < 80 &&colorChange)
                ctx.fillStyle = "yellow"
            else if(value >= 80 && colorChange)
                ctx.fillStyle = "red"
            else if(value >= 0 && value < 50)
                ctx.fillStyle = "blue"
            else
                ctx.fillStyle = "blue"
            ctx.moveTo(width/2,height/2)
            ctx.arc(width/2,height/2,width/2,1.5*Math.PI,value*2*Math.PI/100+1.5*Math.PI,false)
            ctx.closePath()
            ctx.fill()
        }
        Component.onCompleted: canvas.requestPaint()
    }
}
