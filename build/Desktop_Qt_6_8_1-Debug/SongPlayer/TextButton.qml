import QtQuick

Item {
    id: root

    property color color: "gray"
    property alias text: buttonText.text

    signal clicked

    Rectangle {
        id: background

        anchors.fill: parent

        color: {
            if (buttonMouseArea.containsPress) return Qt.lighter(root.color)
            if (buttonMouseArea.containsMouse) return Qt.darker(root.color)
            return root.color
        }
    }

    Text {
        id: buttonText

        anchors.centerIn: parent
    }

    MouseArea {
        id: buttonMouseArea

        anchors.fill: parent

        hoverEnabled: true

        onClicked: {
            root.clicked()
        }
    }
}
