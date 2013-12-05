#ifndef COURSEDATA_H
#define COURSEDATA_H

#include <QListWidget>
#include <QGraphicsDropShadowEffect>
#include <QApplication>


class coursedata : public QListWidget
{

    Q_OBJECT
public:
    coursedata(QWidget *parent = 0);

private:
    void on_listWidget_Courses_itemClicked(QListWidgetItem *item);
};

#endif // COURSEDATA_H

