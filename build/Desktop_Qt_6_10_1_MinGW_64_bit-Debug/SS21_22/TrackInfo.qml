import QtQuick
import QtQuick.Controls
import QtMultimedia
import QtQuick.Layouts
import QtQuick.Window

Item {

    Text {
        id: trackTitle
        text: musicController.currentTitle
        font.pixelSize: 20
        color: "white"
        anchors.horizontalCenter: parent.horizontalCenter
        anchors.top: parent.top
        anchors.topMargin: 10

    }
}
