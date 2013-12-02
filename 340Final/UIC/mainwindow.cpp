#include "mainwindow.h"
#include "ui_mainwindow.h"
//#include <QTime>
//#include <QCoreApplication>
//#include <QEventLoop>
#include <QMovie>
#include <QPropertyAnimation>
#include <QHoverEvent>
#include <QListWidget>
#include <QListWidgetItem>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->webView->load(QUrl("http://bus.uic.edu/"));

    //ui->webView_2->load(QUrl("qrc:///resources/resources/ComputerScience.html"));
    //ui->webView_2->load(QUrl("qrc:///resources/resources/ComputerScience2.htm"));


    //QMovie *movie = new QMovie(":/resources/resources/uicApp.gif");
    //QLabel *processLabel = new QLabel(ui->label_pix);
    //processLabel->setMovie(movie);
    //movie->start();

    hideWidgets();
    setMenuIcons();

    //ui->label_17->show();

    //slideShow();

    setMouseTracking(true);

    ui->f_SideMenu->hasMouseTracking();

    ui->listWidget_Courses->setAttribute(Qt::WA_MacShowFocusRect, false);
    ui->listWidget_Athletics->setAttribute(Qt::WA_MacShowFocusRect, false);
    ui->lineEdit_Courses->setAttribute(Qt::WA_MacShowFocusRect, false);

   // ui->b_Maps->installEventFilter();








}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::slideShow() {

    QPixmap pix1 ( ":/resources/resources/img-top-1.jpg");
    QPixmap pix4 ( ":/resources/resources/img-top-4.jpg");

    for (int x = 0; x < 10; x++){

        ui->label_pix->setPixmap(pix1);
        delay();

        ui->label_pix->repaint();

        ui->label_pix->setPixmap(pix4);

        delay();

        ui->label_pix->repaint();


     }

}

void MainWindow::delay()
{
    QTime dieTime= QTime::currentTime().addSecs(2);
    while( QTime::currentTime() < dieTime )
    QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
}

void MainWindow::setMenuIcons() {

    ui->b_Home->setIcon(QIcon(":/resources/resources/iconsUIC/homeBlue.png"));
    ui->b_Maps->setIcon(QIcon(":/resources/resources/iconsUIC/mapsBlue.png"));
    ui->b_Directory->setIcon(QIcon(":/resources/resources/iconsUIC/directoryBlue.png"));
    ui->b_Courses->setIcon(QIcon(":/resources/resources/iconsUIC/coursesBlue.png"));
    ui->b_EventsNews->setIcon(QIcon(":/resources/resources/iconsUIC/eventsBlue.png"));
    ui->b_Athletics->setIcon(QIcon(":/resources/resources/iconsUIC/athleticsBlue.png"));
    ui->b_Library->setIcon(QIcon(":/resources/resources/iconsUIC/libraryBlue.png"));
    ui->b_BookS->setIcon(QIcon(":/resources/resources/iconsUIC/bookStoreBlue.png"));
    ui->b_CHousing->setIcon(QIcon(":/resources/resources/iconsUIC/campusBlue.png"));
    ui->b_Safety->setIcon(QIcon(":/resources/resources/iconsUIC/safetyBlue.png"));


}

void MainWindow::mouseMoveEvent(QMouseEvent *event) {

    ui->f_SideMenu->hasMouseTracking();

   // if (ui->f_SideMenu->) {

        qDebug("fuck");
    //}

/*
    if (this->rect().contains(e->pos())) {
        // Mouse over Widget
         qDebug("fuck");
    }
    else {
         qDebug("no sir");
    }
*/
}
/*
bool MainWindow::eventFilter(QEvent *event)
 {

     if (event->type() == QEvent::Enter)
     {
         if (this->objectName() == "b_Home")
             qDebug("whattt");


     }
     else if (event->type() == QEvent::Leave)
     {
         //((QLabel*)obj)->setText("<img src='img/Ordner_unselected.png' />");
     }
     else if (event->type() == QEvent::MouseButtonRelease)
     {
        qDebug()<<"icon clicked!";

     }
     else
    {

        // return QObject::eventFilter(obj, event);
     }
 }
 */



void MainWindow::setAllFalse()
{
    ui->b_Home->setDown(false);
    ui->b_Athletics->setDown(false);
    ui->b_BookS->setDown(false);
    ui->b_CHousing->setDown(false);
    ui->b_Courses->setDown(false);
    ui->b_Directory->setDown(false);
    ui->b_EventsNews->setDown(false);
    ui->b_Library->setDown(false);
    ui->b_Maps->setDown(false);
    ui->b_Safety->setDown(false);
}

void MainWindow::hideWidgets(){

   ui->tabW_Directory->hide();
   //ui->tabW_Athletics->hide();
   ui->f_Courses->hide();
   ui->f_Library->hide();
   ui->f_BookS->hide();
   ui->f_Safety->hide();
   ui->tabW_CHousing->hide();
   ui->tabW_Maps->hide();
   //ui->label_17->hide();
   ui->f_Athletics->hide();
}
/*
void MainWindow::on_pushButton_3_clicked() {

    //ui->frame->setGeometry(QRect(10, 80, 141, 101));

    //ui->pushButton->setGeometry(QRect(10, 190, 71, 32));


    //ui->b_Athletics->iconSize();

    QPropertyAnimation *animation = new QPropertyAnimation(ui->f_SideMenu, "size");
    animation->setDuration(100);
   // QSize test = this->size();
    animation->setStartValue(QSize(41,71));
    animation->setEndValue(QSize(100,71));
    animation->start();




}



*/

void MainWindow::on_b_Home_clicked()
{
    if (ui->b_Home->isDown())
    return;

    hideWidgets();

    //ui->f_Athletics_1->show();
    //ui->tabW_Athletics->show();

    setAllFalse();

   // ui->b_Home->setDown(true);

    setMenuIcons();
    ui->b_Home->setIcon(QIcon(":/resources/resources/iconsUIC/homeWhite.png"));

    //setStyleSheet("MainWindow {image: url(:/resources/resources/img-top-1-cut.png);}");
  //  ui->centralWidget->setStyleSheet(":/resources/resources/img-top-1-cut.png");

}

void MainWindow::on_b_Athletics_clicked()
{
    if (ui->b_Athletics->isDown())
    return;

    hideWidgets();

   // ui->f_Athletics_1->show();
   // ui->tabW_Athletics->show();
    ui->f_Athletics->show();

    setAllFalse();

    ui->b_Athletics->setDown(true);

    setMenuIcons();
    ui->b_Athletics->setIcon(QIcon(":/resources/resources/iconsUIC/athleticsWhite.png"));

}

void MainWindow::on_b_BookS_clicked()
{
    if (ui->b_BookS->isDown())
    return;

    hideWidgets();

    ui->f_BookS->show();

    setAllFalse();

    ui->b_BookS->setDown(true);

    setMenuIcons();
    ui->b_BookS->setIcon(QIcon(":/resources/resources/iconsUIC/bookStoreWhite.png"));


}

void MainWindow::on_b_CHousing_clicked()
{
    if (ui->b_CHousing->isDown())
    return;

    hideWidgets();

    ui->tabW_CHousing->show();

    setAllFalse();

    ui->b_CHousing->setDown(true);

    setMenuIcons();
    ui->b_CHousing->setIcon(QIcon(":/resources/resources/iconsUIC/campusWhite.png"));

}

void MainWindow::on_b_Courses_clicked()
{
    if (ui->b_Courses->isDown())
    return;

    hideWidgets();

    //ui->f_Courses_1->show();
    ui->f_Courses->show();

    setAllFalse();

    ui->b_Courses->setDown(true);

    setMenuIcons();
    ui->b_Courses->setIcon(QIcon(":/resources/resources/iconsUIC/coursesWhite.png"));

}

void MainWindow::on_b_Directory_clicked()
{
    if (ui->b_Directory->isDown())
    return;

    hideWidgets();

    ui->tabW_Directory->show();

    setAllFalse();

    ui->b_Directory->setDown(true);

    setMenuIcons();
    ui->b_Directory->setIcon(QIcon(":/resources/resources/iconsUIC/directoryWhite.png"));
}

void MainWindow::on_b_EventsNews_clicked()
{
    if (ui->b_EventsNews->isDown())
    return;

    hideWidgets();

    setAllFalse();

    ui->b_EventsNews->setDown(true);

    setMenuIcons();
    ui->b_EventsNews->setIcon(QIcon(":/resources/resources/iconsUIC/eventsWhite.png"));

}

void MainWindow::on_b_Library_clicked()
{
    if (ui->b_Library->isDown())
    return;

    hideWidgets();

    ui->f_Library->show();

    setAllFalse();

    ui->b_Library->setDown(true);

    setMenuIcons();
    ui->b_Library->setIcon(QIcon(":/resources/resources/iconsUIC/libraryWhite.png"));

}

void MainWindow::on_b_Maps_clicked()
{
    if (ui->b_Maps->isDown())
    return;

    hideWidgets();

    ui->tabW_Maps->show();

    setAllFalse();

    ui->b_Maps->setDown(true);

    setMenuIcons();
    ui->b_Maps->setIcon(QIcon(":/resources/resources/iconsUIC/mapsWhite.png"));
}

void MainWindow::on_b_Safety_clicked()
{
    if (ui->b_Safety->isDown())
    return;

    hideWidgets();

    ui->f_Safety->show();

    setAllFalse();

    ui->b_Safety->setDown(true);

    ui->label_3->setTextInteractionFlags(Qt::TextSelectableByMouse);
    ui->label_4->setTextInteractionFlags(Qt::TextSelectableByMouse);
    ui->label_5->setTextInteractionFlags(Qt::TextSelectableByMouse);
    ui->label_6->setTextInteractionFlags(Qt::TextSelectableByMouse);
    ui->label_7->setTextInteractionFlags(Qt::TextSelectableByMouse);
    ui->label_8->setTextInteractionFlags(Qt::TextSelectableByMouse);
    ui->label_9->setTextInteractionFlags(Qt::TextSelectableByMouse);
    ui->label_10->setTextInteractionFlags(Qt::TextSelectableByMouse);
    ui->label_11->setTextInteractionFlags(Qt::TextSelectableByMouse);
    ui->label_12->setTextInteractionFlags(Qt::TextSelectableByMouse);
    ui->label_13->setTextInteractionFlags(Qt::TextSelectableByMouse);
    ui->label_14->setTextInteractionFlags(Qt::TextSelectableByMouse);
    ui->label_15->setTextInteractionFlags(Qt::TextSelectableByMouse);
    ui->label_16->setTextInteractionFlags(Qt::TextSelectableByMouse);

    setMenuIcons();
    ui->b_Safety->setIcon(QIcon(":/resources/resources/iconsUIC/safetyWhite.png"));

}




void MainWindow::on_lineEdit_Courses_textChanged(const QString &arg1)
{

    int listWidgetSize = ui->listWidget_Courses->count();

    for (int k1 = 0; k1 < listWidgetSize; k1++)
        if (ui->listWidget_Courses->item(k1)->text().toLower().contains(arg1.toLower()))
            ui->listWidget_Courses->item(k1)->setHidden(false);
        else
            ui->listWidget_Courses->item(k1)->setHidden(true);
}

void MainWindow::on_listWidget_Courses_itemClicked()
{
    ui->lineEdit_Courses->clear();
}
