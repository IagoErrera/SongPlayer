import QtQuick
import QtMultimedia

Item {
    id: root

    required property int songIndex
    property alias title: titleText.text
    property alias author: authorText.text
    property alias imageSource: albumImage.source
    property alias videoSource: albumVideo.source

    visible: playerController.currentSongIndex == root.songIndex

    Image {
        id: albumImage

        width: 150
        height: 150

        anchors {
            verticalCenter: parent.verticalCenter
            left: parent.left
        }
    }

    Video {
        id: albumVideo

        width: 150
        height: 150

        anchors {
            verticalCenter: parent.verticalCenter
            left: parent.left
        }

        loops: MediaPlayer.Infinite
        volume: 0
    }

    Text {
        id: titleText

        anchors {
            bottom: parent.verticalCenter
            left: albumImage.right
            right: parent.right
            margins: 20
        }

        font {
            pixelSize: 20
            bold: true
        }

        color: "white"
        wrapMode: Text.WrapAtWordBoundaryOrAnywhere
    }


    Text {
        id: authorText

        anchors {
            top: parent.verticalCenter
            left: titleText.left
            right: parent.right
            margins: 5
        }

        font {
            pixelSize: 16
        }

        color: "white"
        wrapMode: Text.WrapAtWordBoundaryOrAnywhere
    }

    onVisibleChanged: {
        if (visible) {
            albumVideo.play()
        } else {
            albumVideo.seek(0)
            albumVideo.stop()
        }
    }
}
