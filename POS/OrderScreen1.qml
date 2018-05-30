import QtQuick 2.5
import QtQuick.Controls 2.0
import QtQuick.Layouts 1.1

Item {
    id: idRoot
    width: 500; height: 500
    state: "Sales"

    signal payClicked()

    Text {
        id: idTotal
        text: billManager.total / settings.monetaryUnitFraction
        color: "white"
        font.bold: true
        font.pixelSize: 20
    }

    BillDisplayArea {
        id: idBillArea
        width: (parent.width/2 < 500) ? parent.width/2 : 500

        anchors {
            left: parent.left
            top: parent.top
            bottom: idGroupDisplayArea.top
            margins: 10
        }
    }

    ItemDisplayArea {
        id: idItemDisplayArea
        anchors.bottom: idGroupDisplayArea.top
        anchors.left: idBillArea.right
        anchors.right: parent.right
        anchors.top: parent.top
        anchors.margins: 10

        onItemClicked: {
            var quantity = idBillArea.getQuantity()
            billManager.addItem(itemModel.itemCode, itemUnitsModel.itemUnitCode, quantity);
        }

        onError: {
            idPopup.text = message
            idPopup.open()
        }
    }

    GroupDisplayArea {
        id: idGroupDisplayArea
        anchors.bottom: idActionButtonArea.top
        anchors.left: parent.left
        anchors.right: parent.right
        anchors.margins: 10
        height: parent.height * 0.25
        onGroupChanged: {
            console.log("group is", groupName)
            idItemDisplayArea.groupNameDisplay = groupName
        }
    }

    ActionButtonArea {
        id: idActionButtonArea
        height: parent.height * 0.11
        anchors.left: parent.left
        anchors.right: parent.right
        anchors.bottom: parent.bottom
        anchors.margins: 5

        onSave: {
            var resultMap = billManager.saveBill();
            console.log(resultMap.status, resultMap.billNumber, resultMap.message)

            if (resultMap.status)
            {
                var printResultMap = printManager.printBill(resultMap.billNumber);
            }
        }

        onClear: {
            var resultMap = billManager.clear();
            console.log(resultMap.status, resultMap.message)
        }

        onPay: {
            idRoot.payClicked();
            //idRoot.state = "Payment"
        }
    }

    Popup {
        id: idPopup
        width: parent.width/2
        height: parent.height/2
        x: 200; y: 200
        focus: true
        modal: true

        property alias text: idPopupMessage.text

        ColumnLayout {
            anchors.fill: parent

            Text {
                id: idPopupMessage
                text: qsTr("text")
                anchors.centerIn: parent
                width: parent.width
                height: parent.height
            }

            MouseArea {
                anchors.fill: parent
                onClicked: idPopup.close()
            }
        }

        closePolicy: Popup.CloseOnEscape | Popup.CloseOnPressOutsideParent
    }


    PayModesDisplayArea {
        id: idPayModesDisplayArea
        anchors.fill: idItemDisplayArea
    }

    states: [
        State {
            name: "Sales"
            PropertyChanges { target: idPayModesDisplayArea; visible: false }
            PropertyChanges { target: idItemDisplayArea; visible: true }
            PropertyChanges { target: idGroupDisplayArea; visible: true }
//            PropertyChanges { target: idBillArea; state: "Sales" }
        },
        State {
            name: "Payment"
            PropertyChanges { target: idPayModesDisplayArea; visible: true }
            PropertyChanges { target: idItemDisplayArea; visible: false }
            PropertyChanges { target: idGroupDisplayArea; visible: false }
            PropertyChanges { target: idBillArea; state: "Payment" }
        }
    ]

}
