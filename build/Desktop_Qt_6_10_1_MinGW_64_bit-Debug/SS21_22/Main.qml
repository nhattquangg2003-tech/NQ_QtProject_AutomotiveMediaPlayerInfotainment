import QtQuick
import QtQuick.Window
import QtQuick.Controls
import Qt5Compat.GraphicalEffects
import RadiusImagelib 1.0
Window {
    id: root
    width: 1100
    height: 485
    visible: true
    title: qsTr("Hello World")

    // background
    Background {
        id: backbround
        anchors.fill: parent
        backgroundcolor1: "#49348d"
        backgroundcolor: "#2B124C"
    }

    Rectangle {
        id: bottomBar
        width: parent.width
        height: 58
        anchors.bottom: parent.bottom
        anchors.left: parent.left
        color: "#2b2c41"

        MyButton {
            id: iconButton1
            width: 85
            height: 45


            anchors.verticalCenter: parent.verticalCenter
            anchors.left: parent.left
            anchors.leftMargin: 95

            btnradius: height / 2
            buttonColor: "#2b2c41"
            iconSource: "qrc:/resource/bmw-2-logo-svgrepo-com.png"
            btnborder: 1


        }
        MyButton {
            id: iconButton2
            width: 85
            height: 45


            anchors.verticalCenter: parent.verticalCenter
            anchors.left: parent.left
            anchors.leftMargin: iconButton1.x + 180

            btnradius: height / 2
            buttonColor: "#2b2c41"
            iconSource: "qrc:/resource/sport-car-svgrepo-com.png"
            btnborder: 1


        }
        MyButton {
            id: iconButtoncenter
            width: 90
            height: 50


            anchors.verticalCenter: parent.verticalCenter
            anchors.left: parent.left
            anchors.leftMargin: iconButton2.x + 180

            btnradius: height / 2
            buttonColor: "#49348d"
            iconSource: "qrc:/resource/music-cd-svgrepo-com (1).png"
            btnborder: 1
            btnborderColor: "#e5e5e5"


        }
        MyButton {
            id: iconButton4
            width: 85
            height: 45


            anchors.verticalCenter: parent.verticalCenter
            anchors.left: parent.left
            anchors.leftMargin: 645

            btnradius: height / 2
            buttonColor: "#2b2c41"
            iconSource: "qrc:/resource/video-file-svgrepo-com.png"
            btnborder: 1


        }
        MyButton {
            id: iconButtonlast
            width: 135
            height: 40


            anchors.verticalCenter: parent.verticalCenter
            anchors.left: parent.left
            anchors.leftMargin: 890

            btnradius: height / 2
            buttonColor: "#2b2c41"
            btnborder: 1

           Row {
               anchors.centerIn: parent
               MyButton {
                   id: weatherbutton
                   width: 60
                   height: 30
                   anchors.verticalCenter: parent.verticalCenter
                   buttonColor: "#49348d"
                   iconSource: "qrc:/resource/weather-symbol-4-svgrepo-com.png"
                   btnborder: 0
                   btnradius: 15
               }
               MyButton {
                   id: mapbutton
                   width: 60
                   height: 30
                   anchors.verticalCenter: parent.verticalCenter
                   buttonColor: "#2b2c41"
                   iconSource: "qrc:/resource/map-pointer-svgrepo-com.png"
                   btnborder: 0
                   btnradius: 15
               }

           }
        }

    }
    Rectangle {
        id: weather
        width: 280
        height: 422
        anchors.right: parent.right
        anchors.rightMargin: 1
        anchors.top: parent.top
        color: "transparent"
        radius: 10
        RadiusImage {
            id: coverimage
            source: "qrc:/resource/26be18d25d414371026a756a416a2523.jpg"
            anchors.fill: parent
            radius: 10
        }
    }
    // Layout

        MyButton {
            id: playPauseButton
            width: 50
            height: width
            anchors.left: parent.left
            anchors.leftMargin: 490
            anchors.top: parent.top
            anchors.topMargin: 268
            buttonColor: "transparent"
            btnradius: width
            iconSource: "qrc:/resource/play-svgrepo-com.png"

            btnborderColor: "#9E8FC7"
            onBtnclicked: {
                if (musicController.isPlaying) {
                    iconSource = "qrc:/resource/play-svgrepo-com.png"
                } else
                    iconSource = "qrc:/resource/pause-svgrepo-com.png"

                musicController.playMusic()
            }
                   }
        MyButton {
            id: nextButton
            width: 45
            height: width
            anchors.left: parent.left
            anchors.leftMargin: 580
            anchors.top: parent.top
            anchors.topMargin: 270.5
            buttonColor: "transparent"
            btnradius: width
            iconSource: "qrc:/resource/next-998-svgrepo-com.png"

            btnborderColor: "#9E8FC7"
            onBtnclicked: {
                musicController.nextSong()
            }
        }
        MyButton {
            id: previousButton
            width: 45
            height: width
            anchors.left: parent.left
            anchors.leftMargin: 400
            anchors.top: parent.top
            anchors.topMargin: 270.5
            buttonColor: "transparent"
            btnradius: width
            iconSource: "qrc:/resource/previous-999-svgrepo-com.png"

            btnborderColor: "#9E8FC7"
            onBtnclicked: {
                musicController.previousSong()
            }
        }


    //icon layout

    Rectangle {
        width: 425
        height: 1
        anchors.left: parent.left
        anchors.leftMargin: 300
        anchors.top: parent.top
        anchors.topMargin: 140
        color: "#A9A2C6"
    }
    Rectangle {
        width: 40
        height: 40
        anchors.left: parent.left
        anchors.leftMargin: 70
        anchors.top: parent.top
        anchors.topMargin: 30
        color: "transparent"
        Image {        anchors.horizontalCenter: parent.horizontalCenter
            anchors.verticalCenter: parent.verticalCenter
            width: parent.height * 0.8
            height: parent.height * 0.8
            fillMode: Image.PreserveAspectFit
            id: nowplaying
            source: "qrc:/resource/rocket-svgrepo-com.png"
        }
    }
    Text {
        id: nowplayingtext
        text: qsTr("Now Playing")
        anchors.left: parent.left
        anchors.leftMargin: 120
        anchors.top: parent.top
        anchors.topMargin: 35
        color: "#e5e5e5"
        font.pixelSize: 20
        font.bold: true
        // set font
        font.family: "Montserrat"


    }

    //    //
    MyProgressbar {
        id: myProgressbar
        width: 425
        height: 8
        anchors.left: parent.left
        anchors.leftMargin: 300
        anchors.top: parent.top
        anchors.topMargin: 242
        progressbarRadius: 8
        progress: musicController.duration > 0 ? musicController.position / musicController.duration : 0
    }

    //load song info
    Text {
        id: songInfo
        visible: true
        anchors.left: parent.left
        anchors.leftMargin: 300
        anchors.top: parent.top
        anchors.topMargin: 165
        text: musicController.currentTitle  + "\n" + musicController.currentArtist
        font.pixelSize: 20
        color: "#e5e5e5"
        font.bold: true
        // set font
        font.family: "Montserrat"
    }

    // // disk
    //         //
    //         //

    //
        Rectangle {
            id: disk
            width: 175
            height: 175
            anchors.top: parent.top
            anchors.topMargin: 145
            anchors.left: parent.left
            anchors.leftMargin: 100
            color: "transparent"
            border.color: "black"
            border.width: 12
            radius: width / 2
            rotation: musicController.isPlaying ? rotation + 360 : rotation
            Image {
                id: diskCover
                source: "qrc:/resource/record-s-black-and-purple-vinyl-disc-illustration-thumbnail-removebg-preview.png"
                anchors.fill: parent
                fillMode: Image.PreserveAspectCrop
                visible: true
            }

          Behavior on rotation {
              NumberAnimation {
                  duration: 10000
                  loops: Animation.Infinite
                  easing.type: Easing.Linear
              }
          }
        }
    //     // cover image
    //     //
    //     //
        Rectangle {
            id: cover1
            width: 175
            height: 175
            anchors.top: parent.top
            anchors.topMargin: 145
            anchors.left: parent.left
            anchors.leftMargin: 70
            color: "transparent"
            topLeftRadius: 30
            bottomLeftRadius: 30
            topRightRadius: 30
            bottomRightRadius: 30
            antialiasing: true
            RadiusImage {
                id: musicThumnail
                anchors.fill: parent
                image: musicController.albumArt
                radius: 10
            }

        }
    //duration
    Text {
        id: duration1
        visible: true
        anchors.left: parent.left
        anchors.leftMargin: 320
        anchors.top: parent.top
        anchors.topMargin: 260
        text: {
            var s = Math.floor(musicController.position / 1000)
            var m = Math.floor(s / 60)
            s = s % 60
            return m + ":" + (s < 10 ? "0" : "") + s
        }
        font.pixelSize: 15
        color: "#e5e5e5"

        // set font
        font.family: "Montserrat"
    }
    Text {
        id: duration2
        visible: true
        anchors.left: parent.left
        anchors.leftMargin: 665
        anchors.top: parent.top
        anchors.topMargin: 260
        text: {
            var s = Math.floor(musicController.duration / 1000)
            var m = Math.floor(s / 60)
            s = s % 60
            return m + ":" + (s < 10 ? "0" : "") + s
        }
        font.pixelSize: 15
        color: "#e5e5e5"

        // set font
        font.family: "Montserrat"
    }
    // get date and Timer
    //
    //
    Text {
        id: date
        visible: true
        anchors.left: parent.left
        anchors.leftMargin: 910
        anchors.top: parent.top
        anchors.topMargin: 380
        text: {
              musicController.getdate
        }
        font.pixelSize: 20
        color: "#e5e5e5"
        // set font
        font.family: "Montserrat"
    }
    Text {
        id: time
        visible: true
        anchors.left: parent.left
        anchors.leftMargin: 930
        anchors.top: parent.top
        anchors.topMargin: 255
        text: {
              musicController.gettime
        }
        font.pixelSize: 50
        color: "#e5e5e5"
        font.bold: true
        // set font
        font.family: "Montserrat"
    }
    // set volume
    //
    //
    MyVolumeBar {
        id: volumeBar
        width: 8
        height: 160
        anchors.left: parent.left
        anchors.leftMargin: 35
        anchors.top: parent.top
        anchors.topMargin: 150
        progressbarRadius: 8
        progress: musicController.volume
        rotation: 180
    }
    ///
    /// volume Button
    ///
    MyButton {
        id: volumebutton
        width:25
        height: width
        anchors.left: parent.left
        anchors.leftMargin: 26
        anchors.top: parent.top
        anchors.topMargin: 335
        buttonColor: "#2b2c41"
        btnradius: width
        iconSource:  musicController.volume > 0 ? "qrc:/resource/volume-max-svgrepo-com.png" : "qrc:/resource/volume-xmark-svgrepo-com.png"

        btnborderColor: "#9E8FC7"
        onBtnclicked: {
            musicController.volume = musicController.volume > 0 ? 0 : 1.0
        }
    }
    MyButton {
        id: volumebuttonplus
        width: 20
        height: width
        anchors.left: parent.left
        anchors.leftMargin: 30
        anchors.top: parent.top
        anchors.topMargin: 125
        buttonColor: "#2b2c41"
        btnradius: width
        iconSource:  "qrc:/resource/volume-plus-svgrepo-com.png"
        btnborderColor: "#9E8FC7"
        onBtnclicked: {
           var newVolume = musicController.volume + 0.1
           musicController.volume = newVolume > 1.0 ? 1.0 : newVolume
        }
    }
    MyButton {
        id: volumebuttonminer
        width: 15
        height: width
        anchors.left: parent.left
        anchors.leftMargin: 31
        anchors.top: parent.top
        anchors.topMargin: 315
        buttonColor: "#2b2c41"
        btnradius: width
        iconSource:  "qrc:/resource/volume-minus-svgrepo-com.png"
        btnborderColor: "#9E8FC7"
        onBtnclicked: {
           var newVolume = musicController.volume - 0.1
           musicController.volume = newVolume < 0.0 ? 0.0 : newVolume
        }
    }
    // location
    // tempurature
    //
    Text {
        id: location
        visible: true
        anchors.left: parent.left
        anchors.leftMargin: 905
        anchors.top: parent.top
        anchors.topMargin: 50
        text: "DA LAT CITY"
        font.pixelSize: 20
        color: "#e5e5e5"
        // set font
        font.family: "Montserrat"
    }
    Text {
        id: tempurature
        visible: true
        anchors.left: parent.left
        anchors.leftMargin: 900
        anchors.top: parent.top
        anchors.topMargin: 75
        text: "18°C"
        font.pixelSize: 50
        color: "#e5e5e5"
        font.bold: true
        // set font
        font.family: "Montserrat"
    }


}
