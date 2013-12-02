#include "myframe.h"
#include <QPropertyAnimation>

MyFrame::MyFrame(QWidget *parent)
    :QFrame(parent)
{
}


void MyFrame::enterEvent(QEvent *event)
{

 QPropertyAnimation *animation = new QPropertyAnimation(this, "size");
 animation->setDuration(100);
// QSize test = this->size();
 animation->setStartValue(QSize(51,611));
 animation->setEndValue(QSize(200,611));
 animation->start();



}

void MyFrame::leaveEvent(QEvent *event)
{
    QPropertyAnimation *animation = new QPropertyAnimation(this, "size");
    animation->setDuration(100);
   // QSize test = this->size();
    animation->setStartValue(QSize(200,611));
    animation->setEndValue(QSize(51,611));
    animation->start();

}
