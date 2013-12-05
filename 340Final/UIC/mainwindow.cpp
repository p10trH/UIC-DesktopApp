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
#include <QtWidgets>
#include <QtNetwork>
#include <QtWebKitWidgets>
#include <QGraphicsScene>
#include <QGraphicsView>
 #include <QTextBrowser>

#include "locationLoader.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->webView->load(QUrl("http://bus.uic.edu/"));
    //ui->webView_Interactive->load(QUrl("http://www.uic.edu/uic/docs/UICVisitorMapMCwest.pdf"));

    ui->webView_Amazon->load(QUrl("http://www.amazon.com/s/ref=nb_sb_noss_2?url=search-alias%3Dstripbooks"));
    ui->webView_BStore->load(QUrl("http://www.uicbookstore.org/courselistbuilder.aspx?2"));
    ui->webView_Prof->load(QUrl("http://www.uic.edu/htbin/ldap_search/index.pl"));
    ui->webView_Lib->load(QUrl("http://library.uic.edu/"));
    ui->webView_Dining->load(QUrl("http://www.dineoncampus.com/uic/show.cfm?cmd=menus2"));
    ui->webView_Numbers->load(QUrl("http://www.housing.uic.edu/current/resources/phone-numbers.php"));
    ui->webView_Laundry->load(QUrl("http://www.laundryview.com/lvs.php"));
    ui->webView_Cta->load(QUrl("http://ctabustracker.com/bustime/map/displaymap.jsp"));
    ui->webView_Train->load(QUrl("http://www.transitchicago.com/traintrackermap/"));


   // QWebView *view = new QWebView();
   //     view->load(QUrl("http://cdn.nucloud.com/maps/124/index.html"));
   //     view->show();
    //connect(view, SIGNAL(loadFinished(bool)), SLOT(adjustLocation()));
    //connect(view, SIGNAL(titleChanged(QString)), SLOT(adjustTitle()));
    //connect(view, SIGNAL(loadProgress(int)), SLOT(setProgress(int)));
    //connect(view, SIGNAL(loadFinished(bool)), SLOT(finishLoading(bool)));



    //ui->webView_2->load(QUrl("qrc:///resources/resources/ComputerScience.html"));
    //ui->webView_2->load(QUrl("qrc:///resources/resources/ComputerScience2.htm"));


    //QMovie *movie = new QMovie(":/resources/resources/uicApp.gif");
    //QLabel *processLabel = new QLabel(ui->label_pix);
    //processLabel->setMovie(movie);
    //movie->start();


    //imageLabel = new QLabel;
    //ui->label_EastMap->setBackgroundRole(QPalette::Base);
    //ui->label_EastMap->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
    //ui->label_EastMap->setScaledContents(true);

    //scrollArea = new QScrollArea;
    //ui->scrollArea->setBackgroundRole(QPalette::Dark);

    QGraphicsScene *scene = new QGraphicsScene();
    ui->gView_LegendEast->setScene(scene);
    QGraphicsPixmapItem* item = new QGraphicsPixmapItem(QPixmap(":/resources/resources/eastCampusLegend.png"));
    scene->addItem(item);

    QGraphicsScene *scene2 = new QGraphicsScene();
    ui->gView_East->setScene(scene2);
    QGraphicsPixmapItem* item2 = new QGraphicsPixmapItem(QPixmap(":/resources/resources/eastCampus.png"));
    scene2->addItem(item2);

    QGraphicsScene *scene3 = new QGraphicsScene();
    ui->gView_LegendWest->setScene(scene3);
    QGraphicsPixmapItem* item3 = new QGraphicsPixmapItem(QPixmap(":/resources/resources/westCampusLegend.png"));
    scene3->addItem(item3);

    QGraphicsScene *scene4 = new QGraphicsScene();
    ui->gView_West->setScene(scene4);
    QGraphicsPixmapItem* item4 = new QGraphicsPixmapItem(QPixmap(":/resources/resources/westCampus.png"));
    scene4->addItem(item4);

    QGraphicsScene *scene5 = new QGraphicsScene();
    ui->graphicsView_Rest->setScene(scene5);
    QGraphicsPixmapItem* item5 = new QGraphicsPixmapItem(QPixmap(":/resources/resources/restaurantsCampus.png"));
    scene5->addItem(item5);

     //ui->graphicsView->show();



       // ui->graphicsView->    (&scene);
        //QGraphicsPixmapItem item(QPixmap(":/resources/resources/img-top-1.jpg"));
        //scene.addItem(&item);
        //view.show();



    //ui->scrollArea->setWidget(ui->label_EastMap);
    //ui->setCentralWidget(scrollArea);

    //QPixmap pix1 ( ":/resources/resources/img-top-1.jpg");
    //ui->label_EastMap->setPixmap(pix1);

    //createActions();
    //createMenus();

    //setWindowTitle(tr("Image Viewer"));
    //resize(500, 400);

    //


    hideWidgets();
    setMenuIcons();

    //ui->label_17->show();

    //slideShow();

    setMouseTracking(true);

    ui->f_SideMenu->hasMouseTracking();

    ui->listWidget_Courses->setAttribute(Qt::WA_MacShowFocusRect, false);
    ui->lineEdit_Courses->setAttribute(Qt::WA_MacShowFocusRect, false);

    ui->listWidget_Athletics->setAttribute(Qt::WA_MacShowFocusRect, false);

    ui->listWidget_Area->setAttribute(Qt::WA_MacShowFocusRect, false);
    ui->listWidget_Rest->setAttribute(Qt::WA_MacShowFocusRect, false);

    ui->lineEdit_Books->setAttribute(Qt::WA_MacShowFocusRect, false);

   // ui->b_Maps->installEventFilter();



    ui->toolBox->setItemText(0, "Bus");
    ui->toolBox->setItemText(1, "Train");





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


    //}

/*
    if (this->rect().contains(e->pos())) {
        // Mouse over Widget

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


void MainWindow::on_listWidget_Courses_itemClicked(QListWidgetItem *item)
{

    QString temp = item->text();

    QString url = "qrc:///resources/resources/courseCat/" + temp + ".htm";

    ui->webView_Courses->load(QUrl(url));
}

void MainWindow::on_lineEdit_Books_returnPressed()
{

    QString temp = ui->lineEdit_Books->text();

    temp = temp.replace(" ", "+");

    QString amazon = "http://www.amazon.com/s/ref=nb_sb_noss?url=search-alias%3Dstripbooks&field-keywords=" + temp;

    QString bookStore = "http://www.uicbookstore.org/search.aspx?searchterm=" + temp;

     ui->webView_Amazon->load(QUrl(amazon));
     ui->webView_BStore->load(QUrl(bookStore));

}

void MainWindow::on_B_LegendEast_clicked(bool checked)
{
    if (checked == true)
         ui->gView_LegendEast->hide();
    else
        ui->gView_LegendEast->show();

}

void MainWindow::on_B_LegendWest_clicked(bool checked)
{
    if (checked == true)
         ui->gView_LegendWest->hide();
    else
        ui->gView_LegendWest->show();

}

void MainWindow::on_listWidget_Area_itemClicked(QListWidgetItem *item)
{

    QString temp = item->text();


    if (temp.contains("East Campus")) {

     //   ui->textBrowser->clear();
       // ui->textBrowser->setText ("jhdshhdchbcbkckbdckjdbdckbdkjcbdcdhcbdcbdckdcbckdbkc");




    }
    else if (temp.contains("Greek Town")) {
    //    ui->textBrowser->clear();
        //locationLoader lL;
            //QString temp2 = "" +
        // std::string str  =      lL.locationLoad("qrc:/resources/resources/GreekTown.txt",1);

 //         ui->textBrowser->setSource(QUrl("qrc:/resources/resources/GreekTown.txt"));

            //QString temp3 = temp2.c_str();

       // QString qstr = QString::fromStdString(str);
       // ui->textBrowser->setText(qstr);

            //qDebug() << "2: " + temp2;
        //qDebug() << "3: " + qstr;


        //ui->textBrowser->setText(qstr);
//            ui->textBrowser->show();


    }
    else
        qDebug() << "fail";



}

void MainWindow::on_listWidget_Athletics_itemClicked(QListWidgetItem *item)
{
    if (item->text().contains("Basketball (Men's)")) {

        ui->webView_Scores->load(QUrl("http://www.uicflames.com/sports/m-baskbl/sched/ilch-m-baskbl-sched.html"));
        ui->webView_News->load(QUrl("http://www.uicflames.com/sports/m-baskbl/ilch-m-baskbl-body.html"));
    }


    if (item->text().contains("Baseball (Men's)")) {





    }

}
