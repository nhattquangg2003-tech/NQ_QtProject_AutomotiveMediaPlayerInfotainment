import QtQuick
import QtQuick.Controls

Item {
    property real progress: 0
    property real progressbarRadius: 8

    Rectangle {
        id: progressBarBackground
        anchors.fill: parent
        color: "#E6E2F2"
        radius: progressbarRadius

        Rectangle {
            id: progressBarFill
            width: parent.width
            height: progressBarBackground.height * progress
            radius: progressbarRadius

            gradient: Gradient {
                orientation: Gradient.Vertical
                GradientStop { position: 0.0; color: "#D8315B" }
                GradientStop { position: 0.5; color: "#8E44AD" }
                GradientStop { position: 1.0; color: "#5D83FF" }
            }
        }

        NumberAnimation {
            id: progressAnim
            target: progressBarFill
            property: "height"
            duration: 300
            easing.type: Easing.InOutQuad
        }

    MouseArea {

            anchors.fill: parent
            onClicked:  {
                if (musicController.volume <= 0)
                    return

                var newPos =
                    mouseY / height * 1.0

                musicController.volume = newPos
            }
        }

    }
}
