import QtQuick

Image {
    id: root

    signal clicked

    property alias imageSource: root.source

    opacity: buttonMouseArea.containsMouse ? 0.75 : 1

    MouseArea {
        id: buttonMouseArea

        anchors.fill: parent

        hoverEnabled: true

        onClicked: {
            root.clicked()
        }
    }
}
