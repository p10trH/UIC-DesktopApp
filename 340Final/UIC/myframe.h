#ifndef MYFRAME_H
#define MYFRAME_H

#include <QFrame>

class MyFrame : public QFrame {

public:
    MyFrame(QWidget *parent = 0);

private:
    void enterEvent(QEvent *e);
    void leaveEvent(QEvent *e);
};

#endif // MYFRAME_H
