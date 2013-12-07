#include "myframe.h"
#include <QPropertyAnimation>

MyFrame::MyFrame(QWidget *parent)
    :QFrame(parent) {
}

void MyFrame::enterEvent(QEvent *event) {   // enter event

    QPropertyAnimation *animation = new QPropertyAnimation(this, "size");   // new animation, size property
    animation->setDuration(100);       // set duration
    animation->setStartValue(QSize(51,611));   // start value is original geometry of frame
    animation->setEndValue(QSize(200,611));    // resize to new geometry
    animation->start();        // start animation
}

void MyFrame::leaveEvent(QEvent *event) {   // leave event

    QPropertyAnimation *animation = new QPropertyAnimation(this, "size");   // new animation, size property
    animation->setDuration(100);     // set duration
    animation->setStartValue(QSize(200,611));   // start value is original geometry of frame
    animation->setEndValue(QSize(51,611));      // resize to new geometry
    animation->start();        // start animation

}
