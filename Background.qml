import QtQuick
import QtQuick.Controls
Item {
    property string backgroundcolor: "white"
    property string backgroundcolor1: "white"
    Rectangle {
        anchors.fill: parent
        width: parent.width
         height: parent.height
         color: "#2b2c41"
    Rectangle {
        width: 815
        height: 422
        radius: 10
        gradient: Gradient {
            orientation: Gradient.Horizontal
            GradientStop { position: 0.0; color: backgroundcolor }
            GradientStop { position: 1.0; color: backgroundcolor1 }
        }
    }
    }
}
