#ifndef MYPUSHBUTTON_H
#define MYPUSHBUTTON_H

#include <QPushButton>
#include <QGraphicsDropShadowEffect>
#include <QApplication>

class MyPushButton : public QPushButton {

    Q_OBJECT
public:
    MyPushButton(QWidget *parent = 0);

private:
    void enterEvent(QEvent *e);
    void leaveEvent(QEvent *e);

   // QGraphicsDropShadowEffect *effect;
};


#endif // MYPUSHBUTTON_H
