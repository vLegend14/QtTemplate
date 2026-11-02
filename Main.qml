import QtQuick
import QtQuick.Controls

ApplicationWindow {
    visible: true
    width: 400
    height: 300
    title: "UI Chad"
    color: "#0d1117"

    Column {
        anchors.centerIn: parent
        spacing: 20

        Text {
            text: backend.message
            color: "#58a6ff"
            font.pixelSize: 18
            anchors.horizontalCenter: parent.horizontalCenter
        }

        Button {
            text: "Ejecuta C"
            anchors.horizontalCenter: parent.horizontalCenter
            onClicked: backend.executeLogic()
        }
    }
}
