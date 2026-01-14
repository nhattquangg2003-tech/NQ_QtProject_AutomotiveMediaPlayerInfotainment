import QtQuick
import QtQuick.Controls
Item {
    property string buttonColor: ""
    property real btnradius: 0
    property string iconSource: ""
    property string btntext: ""
    property int btnborder: 0
    signal btnclicked()
    signal btnreleased()
    property string btnborderColor: ""
Rectangle {

    id: buttonRect
    anchors.fill: parent
    color: buttonColor
    radius: btnradius
    border.width: btnborder
     antialiasing : true
     border.color: btnborderColor
    Image {
        id: myIcon
        source: iconSource
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.verticalCenter: parent.verticalCenter
        width: parent.height * 0.8
        height: parent.height * 0.8
        fillMode: Image.PreserveAspectFit
        z: 1
    }
    MouseArea {
        anchors.fill: parent
         hoverEnabled: true
         onPressed: {
            buttonRect.scale = 1.2
         }
        onClicked: {
            btnclicked()
        }
        onReleased: {
            btnreleased()
            buttonRect.scale = 1

        }
        onEntered:  {
            buttonRect.opacity = 0.7
        }
        onExited: {
            buttonRect.opacity = 1.0
        }
    }
}
}
