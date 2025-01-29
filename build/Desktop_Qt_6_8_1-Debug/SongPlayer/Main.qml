import QtQuick
import com.company.PlayerController

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Song Player")

    Rectangle {
        id: topbar

        height: 50
        color: "#5F8575"

        anchors {
            top: parent.top
            left: parent.left
            right: parent.right
        }
    }

    Rectangle {
        id: mainSection

        color: "#1E1E1E"

        anchors {
            top: topbar.bottom
            bottom: bottombar.top
            left: parent.left
            right: parent.right
        }

        AudioInfoBox {
            songIndex: 0
            title: "Music 1"
            author: "Author 1"
            imageSource: "assets/images/song_1.jpg"

            anchors {
                verticalCenter: parent.verticalCenter
                left: parent.left
                right: parent.right
                margins: 20
            }
        }

        AudioInfoBox {
            songIndex: 1
            title: "Music 2"
            author: "Author 2"
            imageSource: "assets/images/song_2.jpg"

            anchors {
                verticalCenter: parent.verticalCenter
                left: parent.left
                right: parent.right
                margins: 20
            }
        }

        AudioInfoBox {
            songIndex: 2
            title: "Music 3"
            author: "Author 3"
            imageSource: "assets/images/song_3.jpg"
            videoSource: "assets/videos/video_1.avi"

            anchors {
                verticalCenter: parent.verticalCenter
                left: parent.left
                right: parent.right
                margins: 20
            }
        }
    }

    Rectangle {
        id: bottombar

        height: 90
        color: "#333333"

        anchors {
            bottom: parent.bottom
            left: parent.left
            right: parent.right
        }

        Row {
            anchors.centerIn: parent
            spacing: 20

            ImageButton {
                id: previousSongButton

                width: 64
                height: 64

                imageSource: "assets/icons/previous_icon.png"

                onClicked: PlayerController.switchToPreviousSong()
            }

            ImageButton {
                id: pauseSongButton

                width: 64
                height: 64

                imageSource: PlayerController.playing ? "assets/icons/pause_icon.png" : "assets/icons/play_icon.png"

                onClicked: PlayerController.playPause()
            }

            ImageButton {
                id: nextSongButton

                width: 64
                height: 64

                imageSource: "assets/icons/next_icon.png"

                onClicked: PlayerController.switchToNextSong()
            }
        }
    }
}
