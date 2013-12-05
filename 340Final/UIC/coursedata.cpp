#include "coursedata.h"
#include <QApplication>
#include <QListWidget>
#include <QListWidgetItem>
#include <QtWidgets>

coursedata::coursedata(QWidget *parent)
     :QListWidget(parent)
{
}

void coursedata::on_listWidget_Courses_itemClicked(QListWidgetItem *item)
{


    if (item->text().startsWith("Academic Skills Program  (ASP)")) {

       // webView_2->load(QUrl("http://google.com/"));


    }
    //QDebug("pop");
}
