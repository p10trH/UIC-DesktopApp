
#include "mypushbutton.h"
#include <QApplication>
#include <QPushButton>

MyPushButton::MyPushButton(QWidget *parent)
    :QPushButton(parent) {
}

void MyPushButton::enterEvent(QEvent *event) {  // enter event

    // button already pressed, return
    if (this->isDown())
        return;

    // set icon for push button entered

    if ((this->objectName() == "b_Home"))
        setIcon(QIcon(":/resources/resources/iconsUIC/homeWhite.png"));

    if ((this->objectName() == "b_Maps"))
        setIcon(QIcon(":/resources/resources/iconsUIC/mapsWhite.png"));

    if ((this->objectName() == "b_Directory"))
        setIcon(QIcon(":/resources/resources/iconsUIC/directoryWhite.png"));

    if ((this->objectName() == "b_Courses"))
        setIcon(QIcon(":/resources/resources/iconsUIC/coursesWhite.png"));

    if ((this->objectName() == "b_EventsNews"))
        setIcon(QIcon(":/resources/resources/iconsUIC/eventsWhite.png"));

    if ((this->objectName() == "b_Athletics"))
        setIcon(QIcon(":/resources/resources/iconsUIC/athleticsWhite.png"));

    if ((this->objectName() == "b_Library"))
        setIcon(QIcon(":/resources/resources/iconsUIC/libraryWhite.png"));

    if ((this->objectName() == "b_BookS"))
        setIcon(QIcon(":/resources/resources/iconsUIC/bookStoreWhite.png"));

    if ((this->objectName() == "b_CHousing"))
        setIcon(QIcon(":/resources/resources/iconsUIC/campusWhite.png"));

    if ((this->objectName() == "b_Safety"))
        setIcon(QIcon(":/resources/resources/iconsUIC/safetyWhite.png"));
}

void MyPushButton::leaveEvent(QEvent *event) {  // leave event

    // button already pressed, return
    if (this->isDown())
        return;

    // set icon for push button left

    if ((this->objectName() == "b_Home"))
        setIcon(QIcon(":/resources/resources/iconsUIC/homeBlue.png"));

    if ((this->objectName() == "b_Maps"))
        setIcon(QIcon(":/resources/resources/iconsUIC/mapsBlue.png"));

    if ((this->objectName() == "b_Directory"))
        setIcon(QIcon(":/resources/resources/iconsUIC/directoryBlue.png"));

    if ((this->objectName() == "b_Courses"))
        setIcon(QIcon(":/resources/resources/iconsUIC/coursesBlue.png"));

    if ((this->objectName() == "b_EventsNews"))
        setIcon(QIcon(":/resources/resources/iconsUIC/eventsBlue.png"));

    if ((this->objectName() == "b_Athletics"))
        setIcon(QIcon(":/resources/resources/iconsUIC/athleticsBlue.png"));

    if ((this->objectName() == "b_Library"))
        setIcon(QIcon(":/resources/resources/iconsUIC/libraryBlue.png"));

    if ((this->objectName() == "b_BookS"))
        setIcon(QIcon(":/resources/resources/iconsUIC/bookStoreBlue.png"));

    if ((this->objectName() == "b_CHousing"))
        setIcon(QIcon(":/resources/resources/iconsUIC/campusBlue.png"));

    if ((this->objectName() == "b_Safety"))
        setIcon(QIcon(":/resources/resources/iconsUIC/safetyBlue.png"));
}
