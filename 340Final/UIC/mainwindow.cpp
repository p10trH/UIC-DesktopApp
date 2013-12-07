#include "mainwindow.h"
#include "ui_mainwindow.h"
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

    // pre-load web content for faster experience

    ui->webView->load(QUrl("http://bus.uic.edu/"));
    ui->webView_Amazon->load(QUrl("http://www.amazon.com/s/ref=nb_sb_noss_2?url=search-alias%3Dstripbooks"));
    ui->webView_BStore->load(QUrl("http://www.uicbookstore.org/courselistbuilder.aspx?2"));
    ui->webView_Prof->load(QUrl("http://www.uic.edu/htbin/ldap_search/index.pl"));
    ui->webView_Lib->load(QUrl("http://library.uic.edu/"));
    ui->webView_Dining->load(QUrl("http://www.dineoncampus.com/uic/show.cfm?cmd=menus2"));
    ui->webView_Numbers->load(QUrl("http://www.housing.uic.edu/current/resources/phone-numbers.php"));
    ui->webView_Laundry->load(QUrl("http://www.laundryview.com/lvs.php"));
    ui->webView_Cta->load(QUrl("http://ctabustracker.com/bustime/map/displaymap.jsp"));
    ui->webView_Train->load(QUrl("http://www.transitchicago.com/traintrackermap/"));

    // slide-show effect

    //QMovie *movie = new QMovie(":/resources/resources/uicApp.gif");
    //QLabel *processLabel = new QLabel(ui->label_pix);
    //processLabel->setMovie(movie);
    //movie->start();

    // pre-load campus maps (scrollable)

    // east campus legend
    QGraphicsScene *scene = new QGraphicsScene();
    ui->gView_LegendEast->setScene(scene);
    QGraphicsPixmapItem* item = new QGraphicsPixmapItem(QPixmap(":/resources/resources/eastCampusLegend.png"));
    scene->addItem(item);

    // east campus
    QGraphicsScene *scene2 = new QGraphicsScene();
    ui->gView_East->setScene(scene2);
    QGraphicsPixmapItem* item2 = new QGraphicsPixmapItem(QPixmap(":/resources/resources/eastCampus.png"));
    scene2->addItem(item2);

    // west campus legend
    QGraphicsScene *scene3 = new QGraphicsScene();
    ui->gView_LegendWest->setScene(scene3);
    QGraphicsPixmapItem* item3 = new QGraphicsPixmapItem(QPixmap(":/resources/resources/westCampusLegend.png"));
    scene3->addItem(item3);

    // west campus
    QGraphicsScene *scene4 = new QGraphicsScene();
    ui->gView_West->setScene(scene4);
    QGraphicsPixmapItem* item4 = new QGraphicsPixmapItem(QPixmap(":/resources/resources/westCampus.png"));
    scene4->addItem(item4);

    // restaurants
    QGraphicsScene *scene5 = new QGraphicsScene();
    ui->graphicsView_Rest->setScene(scene5);
    QGraphicsPixmapItem* item5 = new QGraphicsPixmapItem(QPixmap(":/resources/resources/restaurantsCampus.png"));
    //scene5->addItem(item5);

    hideWidgets();      // widgets overlay.. when app starts, hide all widgets and wait for user
    setMenuIcons();     // set the menu icons on the push buttons

    // set mouse tracking for QPropertyAnimation
    setMouseTracking(true);

    ui->f_SideMenu->hasMouseTracking();     // specifically for menu frame

    // on mac, there's a focus rectangle on list widgets, line edits, etc.
    // this gets rid of it

    ui->listWidget_Courses->setAttribute(Qt::WA_MacShowFocusRect, false);
    ui->lineEdit_Courses->setAttribute(Qt::WA_MacShowFocusRect, false);

    ui->listWidget_Athletics->setAttribute(Qt::WA_MacShowFocusRect, false);

    ui->listWidget_Area->setAttribute(Qt::WA_MacShowFocusRect, false);
    ui->listWidget_Rest->setAttribute(Qt::WA_MacShowFocusRect, false);

    ui->lineEdit_Books->setAttribute(Qt::WA_MacShowFocusRect, false);

    // set text for toolbox

    ui->toolBox->setItemText(0, "Bus");
    ui->toolBox->setItemText(1, "Train");
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::setMenuIcons() {       // set side menu icons from resources to blue icon

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

void MainWindow::setAllFalse() {        // when push button clicked, call this function to reset setDown(bool) on all buttons

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

void MainWindow::hideWidgets() {        // when push button clicked, call this function to hide all widgets

   ui->tabW_Directory->hide();
   ui->f_Courses->hide();
   ui->f_Library->hide();
   ui->f_BookS->hide();
   ui->f_Safety->hide();
   ui->tabW_CHousing->hide();
   ui->tabW_Maps->hide();
   ui->f_Athletics->hide();
}

void MainWindow::on_b_Home_clicked() {      // push button Home

    // button already pressed, return

    if (ui->b_Home->isDown())
        return;

    hideWidgets();      // call function to hide all widgets

    setAllFalse();      // call function to reset setDown on all buttons

    setMenuIcons();     // call function to reset all icons to blue

    // then set icon for this button to white
    ui->b_Home->setIcon(QIcon(":/resources/resources/iconsUIC/homeWhite.png"));
}

void MainWindow::on_b_Athletics_clicked() {     // push button Athletics

    // button already pressed, return

    if (ui->b_Athletics->isDown())
        return;

    hideWidgets();      // call function to hide all widgets

    ui->f_Athletics->show();        // then show this specific widget

    setAllFalse();      // call function to reset setDown on all buttons

    ui->b_Athletics->setDown(true);     // then setDown true for this button

    setMenuIcons();     // call function to reset all icons to blue

    // then set icon for this button to white
    ui->b_Athletics->setIcon(QIcon(":/resources/resources/iconsUIC/athleticsWhite.png"));
}

void MainWindow::on_b_BookS_clicked() {     // push button Book Store

    // button already pressed, return

    if (ui->b_BookS->isDown())
        return;

    hideWidgets();      // call function to hide all widgets

    ui->f_BookS->show();        // then show this specific widget

    setAllFalse();      // call function to reset setDown on all buttons

    ui->b_BookS->setDown(true);     // then setDown true for this button

    setMenuIcons();      // call function to reset all icons to blue

    // then set icon for this button to white
    ui->b_BookS->setIcon(QIcon(":/resources/resources/iconsUIC/bookStoreWhite.png"));
}

void MainWindow::on_b_CHousing_clicked() {      // push button Campus Housing

    // button already pressed, return

    if (ui->b_CHousing->isDown())
        return;

    hideWidgets();      // call function to hide all widgets

    ui->tabW_CHousing->show();      // then show this specific widget

    setAllFalse();      // call function to reset setDown on all buttons

    ui->b_CHousing->setDown(true);      // then setDown true for this button

    setMenuIcons();     // call function to reset all icons to blue

    // then set icon for this button to white
    ui->b_CHousing->setIcon(QIcon(":/resources/resources/iconsUIC/campusWhite.png"));
}

void MainWindow::on_b_Courses_clicked() {       // push button Courses

    // button already pressed, return

    if (ui->b_Courses->isDown())
        return;

    hideWidgets();      // call function to hide all widgets

    ui->f_Courses->show();      // then show this specific widget

    setAllFalse();      // call function to reset setDown on all buttons

    ui->b_Courses->setDown(true);       // then setDown true for this button

    setMenuIcons();     // call function to reset all icons to blue

    // then set icon for this button to white
    ui->b_Courses->setIcon(QIcon(":/resources/resources/iconsUIC/coursesWhite.png"));
}

void MainWindow::on_b_Directory_clicked() {     // push button Directory

    // button already pressed, return

    if (ui->b_Directory->isDown())
        return;

    hideWidgets();      // call function to hide all widgets

    ui->tabW_Directory->show();     // then show this specific widget

    setAllFalse();      // call function to reset setDown on all buttons

    ui->b_Directory->setDown(true);     // then setDown true for this button

    setMenuIcons();     // call function to reset all icons to blue

    // then set icon for this button to white
    ui->b_Directory->setIcon(QIcon(":/resources/resources/iconsUIC/directoryWhite.png"));
}

void MainWindow::on_b_EventsNews_clicked() {        // push button Events/News

    // button already pressed, return

    if (ui->b_EventsNews->isDown())
        return;

    hideWidgets();      // call function to hide all widgets

    setAllFalse();      // call function to reset setDown on all buttons

    ui->b_EventsNews->setDown(true);        // then setDown true for this button

    setMenuIcons();     // call function to reset all icons to blue

    // then set icon for this button to white
    ui->b_EventsNews->setIcon(QIcon(":/resources/resources/iconsUIC/eventsWhite.png"));
}

void MainWindow::on_b_Library_clicked() {       // push button Library

    // button already pressed, return

    if (ui->b_Library->isDown())
        return;

    hideWidgets();      // call function to hide all widgets

    ui->f_Library->show();      // then show this specific widget

    setAllFalse();       // call function to reset setDown on all buttons

    ui->b_Library->setDown(true);       // then setDown true for this button

    setMenuIcons();     // call function to reset all icons to blue

    // then set icon for this button to white
    ui->b_Library->setIcon(QIcon(":/resources/resources/iconsUIC/libraryWhite.png"));
}

void MainWindow::on_b_Maps_clicked() {      // push button Maps

    // button already pressed, return

    if (ui->b_Maps->isDown())
        return;

    hideWidgets();      // call function to hide all widgets

    ui->tabW_Maps->show();      // then show this specific widget

    setAllFalse();      // call function to reset setDown on all buttons

    ui->b_Maps->setDown(true);      // then setDown true for this button

    setMenuIcons();     // call function to reset all icons to blue

    // then set icon for this button to white
    ui->b_Maps->setIcon(QIcon(":/resources/resources/iconsUIC/mapsWhite.png"));
}

void MainWindow::on_b_Safety_clicked() {        // push button Safety

    // button already pressed, return

    if (ui->b_Safety->isDown())
        return;

    hideWidgets();      // call function to hide all widgets

    ui->f_Safety->show();       // then show this specific widget

    setAllFalse();      // call function to reset setDown on all buttons

    ui->b_Safety->setDown(true);        // then setDown true for this button

    // make text selectable

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

    setMenuIcons();     // call function to reset all icons to blue

    // then set icon for this button to white
    ui->b_Safety->setIcon(QIcon(":/resources/resources/iconsUIC/safetyWhite.png"));
}

void MainWindow::on_lineEdit_Courses_textChanged(const QString &arg1) {     // courses filter function

    // call function every time text field has changed

    int listWidgetSize = ui->listWidget_Courses->count();       // get list widget size

    // loop through list widget
    for (int i = 0; i < listWidgetSize; i++)
        if (ui->listWidget_Courses->item(i)->text().toLower().contains(arg1.toLower()))
            ui->listWidget_Courses->item(i)->setHidden(false);      // if list widget item contains text, set hidden to false
        else
            ui->listWidget_Courses->item(i)->setHidden(true);       // if list widget item doesn't contain text, set hidden to true
}

void MainWindow::on_listWidget_Courses_itemClicked() {      // list widget item clicked

    ui->lineEdit_Courses->clear();      // clear the text inputted by user
                                        // this updates on_lineEdit_Courses_textChanged as well
                                        // more efficent, user doesnt have to waste time backspacing
}

void MainWindow::on_listWidget_Courses_itemClicked(QListWidgetItem *item) {     // list widget item clicked, with arg

    QString temp = item->text();        // convert to string

    QString url = "qrc:///resources/resources/courseCat/" + temp + ".htm";      // create url that links to a resource htm file

    ui->webView_Courses->load(QUrl(url));       // display this url to a web view widget
}

void MainWindow::on_lineEdit_Books_returnPressed() {    // search function, return pressed

    QString temp = ui->lineEdit_Books->text();      // create a string from line edit input

    temp = temp.replace(" ", "+");      // replace space character to make url work

    // create url that links to amazon search
    QString amazon = "http://www.amazon.com/s/ref=nb_sb_noss?url=search-alias%3Dstripbooks&field-keywords=" + temp;

    // create url that links to book store search
    QString bookStore = "http://www.uicbookstore.org/search.aspx?searchterm=" + temp;

    // display these urls to a web view widget
    ui->webView_Amazon->load(QUrl(amazon));
    ui->webView_BStore->load(QUrl(bookStore));
}

void MainWindow::on_B_LegendEast_clicked(bool checked) {    // east campus hide/show legend push button

    // made button checkable in gui

    if (checked == true)
         ui->gView_LegendEast->hide();  // hide legend
    else
        ui->gView_LegendEast->show();   // show legend
}

void MainWindow::on_B_LegendWest_clicked(bool checked) {    // west campus hide/show legend push button

    // made button checkable in gui

    if (checked == true)
         ui->gView_LegendWest->hide();  // hide legend
    else
        ui->gView_LegendWest->show();   // show legend
}

void MainWindow::on_listWidget_Area_itemClicked(QListWidgetItem *item) {

    QString temp = item->text();

    locationLoader lL;

    if (temp.contains("Greek Town")) {

        ui->textBrowser->clear();
        ui->textBrowser_2->clear();

        ui->textBrowser->setText (lL.locationLoad(":/resources/resources/GreekTown.txt",1));

        ui->textBrowser_2->setText ("OPEN NOW");
        ui->textBrowser_2->append (lL.locationLoad(":/resources/resources/GreekTown.txt",2));
    }
    else if (temp.contains("East Campus")) {

        ui->textBrowser->clear();
        ui->textBrowser_2->clear();

        ui->textBrowser->setText (lL.locationLoad(":/resources/resources/EastCampus.txt",1));

        ui->textBrowser_2->setText ("OPEN NOW");
        ui->textBrowser_2->append (lL.locationLoad(":/resources/resources/EastCampus.txt",2));

    }
    else
        qDebug() << "fail";



}

void MainWindow::on_listWidget_Athletics_itemClicked(QListWidgetItem *item) {   // list widget in athletics item clicked

    // load webviews for different sports

    if (item->text().contains("Baseball (Men's)")) {
        ui->webView_Scores->load(QUrl("http://www.uicflames.com/sports/m-basebl/sched/ilch-m-basebl-sched.html"));
        ui->webView_News->load(QUrl("http://www.uicflames.com/sports/m-basebl/ilch-m-basebl-body-main.html"));
    }
    if (item->text().contains("Basketball (Men's)")) {
        ui->webView_Scores->load(QUrl("http://www.uicflames.com/sports/m-baskbl/sched/ilch-m-baskbl-sched.html"));
        ui->webView_News->load(QUrl("http://www.uicflames.com/sports/m-baskbl/ilch-m-baskbl-body.html"));
    }
    if (item->text().contains("Basketball (Women's)")) {
        ui->webView_Scores->load(QUrl("http://www.uicflames.com/sports/w-baskbl/sched/ilch-w-baskbl-sched.html"));
        ui->webView_News->load(QUrl("http://www.uicflames.com/sports/w-baskbl/ilch-w-baskbl-body.html"));
    }
    if (item->text().contains("Field (Men's)")) {
        ui->webView_Scores->load(QUrl("http://www.uicflames.com/sports/m-track/sched/ilch-m-track-sched.html"));
        ui->webView_News->load(QUrl("http://www.uicflames.com/sports/m-track/ilch-m-track-body.html"));
    }
    if (item->text().contains("Field (Women's)")) {
        ui->webView_Scores->load(QUrl("http://www.uicflames.com/sports/w-track/sched/ilch-w-track-sched.html"));
        ui->webView_News->load(QUrl("http://www.uicflames.com/sports/w-track/ilch-w-track-body.html"));
    }
    if (item->text().contains("Golf (Women's)")) {
        ui->webView_Scores->load(QUrl("http://www.uicflames.com/sports/w-golf/sched/ilch-w-golf-sched.html"));
        ui->webView_News->load(QUrl("http://www.uicflames.com/sports/w-golf/ilch-w-golf-body.html"));
    }
    if (item->text().contains("Gymnastics (Men's)")) {
        ui->webView_Scores->load(QUrl("http://www.uicflames.com/sports/m-gym/sched/ilch-m-gym-sched.html"));
        ui->webView_News->load(QUrl("http://www.uicflames.com/sports/m-gym/ilch-m-gym-body.html"));
    }
    if (item->text().contains("Gymnastics (Women's)")) {
        ui->webView_Scores->load(QUrl("http://www.uicflames.com/sports/w-gym/sched/ilch-w-gym-sched.html"));
        ui->webView_News->load(QUrl("http://www.uicflames.com/sports/w-gym/ilch-w-gym-body.html"));
    }
    if (item->text().contains("Soccer (Men's)")) {
        ui->webView_Scores->load(QUrl("http://www.uicflames.com/sports/m-soccer/sched/ilch-m-soccer-sched.html"));
        ui->webView_News->load(QUrl("http://www.uicflames.com/sports/m-soccer/ilch-m-soccer-body.html"));
    }
    if (item->text().contains("Soccer (Women's)")) {
        ui->webView_Scores->load(QUrl("http://www.uicflames.com/sports/w-soccer/sched/ilch-w-soccer-sched.html"));
        ui->webView_News->load(QUrl("http://www.uicflames.com/sports/w-soccer/ilch-w-soccer-body.html"));
    }
    if (item->text().contains("Softball (Women's)")) {
        ui->webView_Scores->load(QUrl("http://www.uicflames.com/sports/w-softbl/sched/ilch-w-softbl-sched.html"));
        ui->webView_News->load(QUrl("http://www.uicflames.com/sports/w-softbl/ilch-w-softbl-body.html"));
    }
    if (item->text().contains("Swimming And Diving (Men's)")) {
        ui->webView_Scores->load(QUrl("http://www.uicflames.com/sports/m-swim/sched/ilch-m-swim-sched.html"));
        ui->webView_News->load(QUrl("http://www.uicflames.com/sports/m-swim/ilch-m-swim-body.html"));
    }
    if (item->text().contains("Swimming And Diving (Women's)")) {
        ui->webView_Scores->load(QUrl("http://www.uicflames.com/sports/w-swim/sched/ilch-w-swim-sched.html"));
        ui->webView_News->load(QUrl("http://www.uicflames.com/sports/w-swim/ilch-w-swim-body.html"));
    }
    if (item->text().contains("Tennis (Men's)")) {
        ui->webView_Scores->load(QUrl("http://www.uicflames.com/sports/m-tennis/sched/ilch-m-tennis-sched.html"));
        ui->webView_News->load(QUrl("http://www.uicflames.com/sports/m-tennis/ilch-m-tennis-body.html"));
    }
    if (item->text().contains("Tennis (Women's)")) {
        ui->webView_Scores->load(QUrl("http://www.uicflames.com/sports/w-tennis/sched/ilch-w-tennis-sched.html"));
        ui->webView_News->load(QUrl("http://www.uicflames.com/sports/w-tennis/ilch-w-tennis-body.html"));
    }
    if (item->text().contains("Volleyball (Women's)")) {
        ui->webView_Scores->load(QUrl("http://www.uicflames.com/sports/w-volley/sched/ilch-w-volley-sched.html"));
        ui->webView_News->load(QUrl("http://www.uicflames.com/sports/w-volley/ilch-w-volley-body.html"));
    }
}
