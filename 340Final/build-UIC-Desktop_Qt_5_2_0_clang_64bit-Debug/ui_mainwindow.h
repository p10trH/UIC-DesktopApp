/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWebKitWidgets/QWebView>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>
#include "myframe.h"
#include "mypushbutton.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTabWidget *tabW_Directory;
    QWidget *tab_Prof;
    QWidget *tab_Stud;
    QFrame *f_Courses;
    QListWidget *listWidget;
    QFrame *f_Library;
    QFrame *f_BookS;
    QFrame *f_Safety;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QTabWidget *tabW_Maps;
    QWidget *West;
    QWidget *East;
    QWidget *Food;
    QWidget *Navigation;
    QTabWidget *tabW_transit;
    QWidget *cta;
    QWidget *uicShuttle;
    QWebView *webView;
    QLabel *label_pix;
    MyFrame *f_SideMenu;
    MyPushButton *b_Home;
    MyPushButton *b_Maps;
    MyPushButton *b_Directory;
    MyPushButton *b_Courses;
    MyPushButton *b_EventsNews;
    MyPushButton *b_Athletics;
    MyPushButton *b_Library;
    MyPushButton *b_BookS;
    MyPushButton *b_CHousing;
    MyPushButton *b_Safety;
    QFrame *frame;
    QLabel *label_18;
    QFrame *f_TopMenu;
    QTabWidget *tabW_CHousing;
    QWidget *Laundry;
    QWidget *Numbers;
    QWidget *Dining;
    QFrame *f_Athletics;
    QTabWidget *tabW_Athletics;
    QWidget *tab_Scores;
    QWidget *tab_Schedule;
    QWidget *tab_News;
    QListWidget *listWidget_2;
    QFrame *frame_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1150, 650);
        MainWindow->setMinimumSize(QSize(1150, 650));
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(15);
        MainWindow->setFont(font);
        MainWindow->setStyleSheet(QLatin1String("\n"
"MainWindow {\n"
"\n"
"	background-color: rgb(255, 255, 255);\n"
"    /*image: url(:/resources/resources/img-top-1-cut.jpg);*/\n"
"image: url(:/resources/resources/chiRedSkyLine1.png);\n"
"\n"
"}\n"
"\n"
"/*.QWidget {\n"
"	image: url(:/resources/resources/img-top-1.jpg);\n"
"   background-color: white;\n"
"} */\n"
"\n"
"/* We provide a min-width and min-height for push buttons\n"
"   so that they look elegant regardless of the width of the text. */\n"
"QPushButton {\n"
"    font: 16pt \"Arial\";\n"
"	background-color: rgb(204, 204, 204);\n"
"\n"
"	/*background-color: rgba(0, 0, 186, 191);\n"
"	color: rgb(255, 255, 255);*/\n"
"    color: rgb(0, 0, 186);\n"
"	\n"
"    /*background-color: blue;*/\n"
"    border-width: 0px;\n"
"    border-color: rgba(0, 0, 186, 191);\n"
"    border-style: solid;\n"
"    border-radius: 0;\n"
"    padding: 0px;\n"
"    min-width: 9ex;\n"
"    min-height: 2.5ex;\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	background-color: rgb(255, 0, 0);\n"
"	color: rgb(255, 255, 255);\n"
"\n"
"\n"
""
                        "}\n"
"\n"
"/* Increase the padding, so the text is shifted when the button is\n"
"   pressed. */\n"
"QPushButton:pressed {\n"
"    padding-left: 0px;\n"
"    padding-top: 0px;\n"
"	background-color: rgb(255, 0, 0);\n"
"    color: rgb(255, 255, 255);\n"
"}\n"
"\n"
"QLabel, QAbstractButton {\n"
"    font: normal;\n"
"}\n"
"\n"
"/* Mark mandatory fields with a brownish color. */\n"
".mandatory {\n"
"    color: brown;\n"
"}\n"
"\n"
"/* Bold text on status bar looks awful. */\n"
"QStatusBar QLabel {\n"
"   font: normal;\n"
"}\n"
"\n"
"QStatusBar::item {\n"
"    border-width: 1;\n"
"    border-color: darkkhaki;\n"
"    border-style: solid;\n"
"    border-radius: 2;\n"
"}\n"
"\n"
"\n"
"QComboBox, QLineEdit, QSpinBox, QTextEdit, QListView {\n"
"    \n"
"	selection-color: rgb(255, 255, 255);\n"
"    background-color: rgb(204, 204, 204);\n"
"    color: rgb(0, 0, 186);\n"
"    selection-background-color: rgb(255, 0, 0);\n"
"}\n"
"\n"
"QListView::item:hover {\n"
"    background-color: rgb(255, 0, 0);\n"
"	color: rgb(255, "
                        "255, 255);\n"
"}\n"
"\n"
"\n"
"\n"
" QComboBox {\n"
"\n"
"	 font: 15pt \"Arial\";\n"
"     border: 0px solid red;\n"
"     border-radius: 0px;\n"
"     padding: 0px 0px 0px 4px;\n"
"    /* min-width: 6em;*/\n"
" }\n"
"\n"
"QComboBox::drop-down {\n"
"    \n"
"\n"
"     border-left-width: 1px;\n"
"     border-left-color: white;\n"
"     border-left-style: solid; /* just a single line */\n"
"     border-top-right-radius: 0px; /* same radius as the QComboBox */\n"
"     border-bottom-right-radius: 0px;\n"
" }\n"
"\n"
"\n"
"\n"
"\n"
"QListView {\n"
"    show-decoration-selected: 1;\n"
"}\n"
"\n"
"\n"
"\n"
"/* We reserve 1 pixel space in padding. When we get the focus,\n"
"   we kill the padding and enlarge the border. This makes the items\n"
"   glow. \n"
"QLineEdit, QFrame {\n"
"    border-width: 2px;\n"
"    padding: 1px;\n"
"    border-style: solid;\n"
"    border-color: darkkhaki;\n"
"    border-radius: 5px;\n"
"}*/\n"
"\n"
"/* As mentioned above, eliminate the padding and increase the border. \n"
"QLineEdit:fo"
                        "cus, QFrame:focus {\n"
"    border-width: 3px;\n"
"    padding: 0px;\n"
"}*/\n"
"\n"
"/* A QLabel is a QFrame ... */\n"
"QLabel {\n"
"    border: none;\n"
"    padding: 0;\n"
"    background: none;\n"
"}\n"
"\n"
"/* A QToolTip is a QLabel ... */\n"
"QToolTip {\n"
"    border: 2px solid darkkhaki;\n"
"    padding: 5px;\n"
"    border-radius: 3px;\n"
"    opacity: 200;\n"
"}\n"
"\n"
"/* Nice to have the background color change when hovered. */\n"
"QRadioButton:hover, QCheckBox:hover {\n"
"    background-color: wheat;\n"
"}\n"
"\n"
"/* Force the dialog's buttons to follow the Windows guidelines. */\n"
"QDialogButtonBox {\n"
"    button-layout: 0;\n"
"}\n"
"\n"
"\n"
"\n"
"QTabWidget::pane { /* The tab widget frame */\n"
"     border-top: 0px solid #C2C7CB;\n"
" }\n"
"\n"
" QTabWidget::tab-bar {\n"
"     left: 0px; /* move to the right by 5px */\n"
" }\n"
"\n"
" /* Style the tab using the tab sub-control. Note that\n"
"     it reads QTabBar _not_ QTabWidget */\n"
" QTabBar::tab {\n"
"\n"
"font: 16pt \"Arial\";\n"
""
                        "\n"
"    height: 39px; width: 200px;\n"
"	color: rgb(0, 0, 186);\n"
"\n"
"     background-color: rgb(204, 204, 204);\n"
"     /*background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                 stop: 0 #E1E1E1, stop: 0.4 #DDDDDD,\n"
"                                 stop: 0.5 #D8D8D8, stop: 1.0 #D3D3D3);*/\n"
"    /* border: 0px solid #C4C4C3;*/\n"
"	\n"
"     border-right: 1px solid rgb(255, 255, 255);\n"
"     /*border-left: 1px solid rgb(255, 255, 255);*/\n"
"     \n"
"     border-bottom-color: #C2C7CB; /* same as the pane color */\n"
"     border-top-left-radius: 0px;\n"
"     border-top-right-radius: 0px;\n"
"     min-width: 8ex;\n"
"     padding: 0px;\n"
" }\n"
"\n"
" QTabBar::tab:selected, QTabBar::tab:hover {\n"
"\n"
"     background-color: rgb(255, 0, 0);\n"
"     color: rgb(255, 255, 255);\n"
"\n"
"     /*background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,\n"
"                                 stop: 0 #fafafa, stop: 0.4 #f4f4f4,\n"
"                                 stop:"
                        " 0.5 #e7e7e7, stop: 1.0 #fafafa);*/\n"
" }\n"
"\n"
" QTabBar::tab:selected {\n"
"     /*border-color: rgba(0, 0, 186, 191); */\n"
"     /* border-bottom-color: #C2C7CB; /* same as pane color */\n"
" }\n"
"\n"
" QTabBar::tab:!selected {\n"
"     margin-top: 0px; /* make non-selected tabs look smaller */\n"
" }\n"
""));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setStyleSheet(QStringLiteral(""));
        tabW_Directory = new QTabWidget(centralWidget);
        tabW_Directory->setObjectName(QStringLiteral("tabW_Directory"));
        tabW_Directory->setGeometry(QRect(50, 0, 1101, 651));
        QFont font1;
        font1.setFamily(QStringLiteral("Arial"));
        font1.setPointSize(20);
        tabW_Directory->setFont(font1);
        tabW_Directory->setStyleSheet(QLatin1String("QTabWidget::pane { /* The tab widget frame */\n"
"     border-width: 0px;\n"
"border-color: rgba(255, 0, 0, 191);\n"
"border-style: solid;\n"
"border-radius: 0;\n"
" }\n"
"\n"
"/*QTabBar::tab {\n"
"\n"
"\n"
"\n"
"    height: 48px; width: 198px;\n"
"}\n"
"*/\n"
"\n"
"QTabWidget::tab-bar {\n"
"     left: 2px; /* move to the right by 5px */\n"
" }"));
        tabW_Directory->setTabShape(QTabWidget::Rounded);
        tab_Prof = new QWidget();
        tab_Prof->setObjectName(QStringLiteral("tab_Prof"));
        tabW_Directory->addTab(tab_Prof, QString());
        tab_Stud = new QWidget();
        tab_Stud->setObjectName(QStringLiteral("tab_Stud"));
        tabW_Directory->addTab(tab_Stud, QString());
        f_Courses = new QFrame(centralWidget);
        f_Courses->setObjectName(QStringLiteral("f_Courses"));
        f_Courses->setGeometry(QRect(50, 39, 1101, 611));
        f_Courses->setStyleSheet(QLatin1String("QFrame {\n"
"\n"
"background-color: rgb(255, 255, 255);\n"
"\n"
"border-width: 0px;\n"
"border-color: rgba(255, 0, 0, 191);\n"
"border-style: solid;\n"
"border-radius: 0;\n"
"}"));
        f_Courses->setFrameShape(QFrame::StyledPanel);
        f_Courses->setFrameShadow(QFrame::Raised);
        listWidget = new QListWidget(f_Courses);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(840, 1, 261, 611));
        listWidget->setStyleSheet(QLatin1String("\n"
" QListView {\n"
"border-width: 0px;\n"
"border-color: rgba(255, 0, 0, 191);\n"
"border-style: solid;\n"
"border-radius: 0;\n"
"background-color: rgb(204, 204, 204);\n"
"\n"
" }\n"
""));
        f_Library = new QFrame(centralWidget);
        f_Library->setObjectName(QStringLiteral("f_Library"));
        f_Library->setGeometry(QRect(50, 38, 1101, 621));
        f_Library->setStyleSheet(QLatin1String("border-width: 0px;\n"
"background-color: rgb(255, 255, 255);\n"
"border-color: rgba(255, 0, 0, 191);\n"
"border-style: solid;\n"
"border-radius: 0;"));
        f_Library->setFrameShape(QFrame::StyledPanel);
        f_Library->setFrameShadow(QFrame::Raised);
        f_BookS = new QFrame(centralWidget);
        f_BookS->setObjectName(QStringLiteral("f_BookS"));
        f_BookS->setGeometry(QRect(50, 38, 1101, 621));
        f_BookS->setStyleSheet(QLatin1String("border-width: 0px;\n"
"background-color: rgb(255, 255, 255);\n"
"border-color: rgba(255, 0, 0, 191);\n"
"border-style: solid;\n"
"border-radius: 0;"));
        f_BookS->setFrameShape(QFrame::StyledPanel);
        f_BookS->setFrameShadow(QFrame::Raised);
        f_Safety = new QFrame(centralWidget);
        f_Safety->setObjectName(QStringLiteral("f_Safety"));
        f_Safety->setGeometry(QRect(52, 40, 851, 611));
        f_Safety->setFont(font1);
        f_Safety->setStyleSheet(QLatin1String("\n"
"color: rgb(255, 0, 0);\n"
"     background-color: rgb(255, 255, 255);\n"
"\n"
"border-width: 0px;\n"
"border-color: rgba(255, 0, 0, 191);\n"
"border-style: solid;\n"
"border-radius: 0;\n"
""));
        f_Safety->setFrameShape(QFrame::StyledPanel);
        f_Safety->setFrameShadow(QFrame::Raised);
        label_3 = new QLabel(f_Safety);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(230, 80, 203, 48));
        QFont font2;
        font2.setBold(false);
        font2.setItalic(false);
        font2.setWeight(50);
        label_3->setFont(font2);
        label_3->setStyleSheet(QStringLiteral("border: none;"));
        label_4 = new QLabel(f_Safety);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(230, 120, 203, 48));
        label_4->setFont(font2);
        label_4->setStyleSheet(QStringLiteral("border: none;"));
        label_5 = new QLabel(f_Safety);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(230, 160, 203, 48));
        label_5->setFont(font2);
        label_5->setStyleSheet(QStringLiteral("border: none;"));
        label_6 = new QLabel(f_Safety);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(230, 200, 203, 48));
        label_6->setFont(font2);
        label_6->setStyleSheet(QStringLiteral("border: none;"));
        label_7 = new QLabel(f_Safety);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(230, 240, 203, 48));
        label_7->setFont(font2);
        label_7->setStyleSheet(QStringLiteral("border: none;"));
        label_8 = new QLabel(f_Safety);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(430, 240, 203, 48));
        label_8->setFont(font2);
        label_8->setStyleSheet(QLatin1String("border: none;\n"
"color: rgb(0, 0, 255);"));
        label_9 = new QLabel(f_Safety);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(430, 200, 203, 48));
        label_9->setFont(font2);
        label_9->setStyleSheet(QLatin1String("border: none;\n"
"color: rgb(0, 0, 255);"));
        label_10 = new QLabel(f_Safety);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(430, 160, 203, 48));
        label_10->setFont(font2);
        label_10->setStyleSheet(QLatin1String("border: none;\n"
"color: rgb(0, 0, 255);"));
        label_11 = new QLabel(f_Safety);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(430, 80, 203, 48));
        label_11->setFont(font2);
        label_11->setStyleSheet(QLatin1String("border: none;\n"
"color: rgb(0, 0, 255);"));
        label_12 = new QLabel(f_Safety);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(430, 120, 203, 48));
        label_12->setFont(font2);
        label_12->setStyleSheet(QLatin1String("border: none;\n"
"color: rgb(0, 0, 255);"));
        label_13 = new QLabel(f_Safety);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(230, 280, 203, 48));
        label_13->setFont(font2);
        label_13->setStyleSheet(QStringLiteral("border: none;"));
        label_14 = new QLabel(f_Safety);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(430, 280, 203, 48));
        label_14->setFont(font2);
        label_14->setStyleSheet(QLatin1String("border: none;\n"
"color: rgb(0, 0, 255);"));
        label_15 = new QLabel(f_Safety);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(230, 320, 203, 48));
        label_15->setFont(font2);
        label_15->setStyleSheet(QStringLiteral("border: none;"));
        label_16 = new QLabel(f_Safety);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(430, 320, 203, 48));
        label_16->setFont(font2);
        label_16->setStyleSheet(QLatin1String("border: none;\n"
"color: rgb(0, 0, 255);"));
        tabW_Maps = new QTabWidget(centralWidget);
        tabW_Maps->setObjectName(QStringLiteral("tabW_Maps"));
        tabW_Maps->setGeometry(QRect(50, 0, 1101, 651));
        tabW_Maps->setFont(font1);
        tabW_Maps->setStyleSheet(QLatin1String("QTabWidget::pane { /* The tab widget frame */\n"
"     border-width: 0px;\n"
"border-color: rgba(255, 0, 0, 191);\n"
"border-style: solid;\n"
"border-radius: 0;\n"
" }\n"
"\n"
"/*QTabBar::tab {\n"
"\n"
"\n"
"\n"
"    height: 48px; width: 198px;\n"
"}\n"
"*/\n"
"\n"
"QTabWidget::tab-bar {\n"
"     left: 2px; /* move to the right by 5px */\n"
" }"));
        West = new QWidget();
        West->setObjectName(QStringLiteral("West"));
        tabW_Maps->addTab(West, QString());
        East = new QWidget();
        East->setObjectName(QStringLiteral("East"));
        tabW_Maps->addTab(East, QString());
        Food = new QWidget();
        Food->setObjectName(QStringLiteral("Food"));
        tabW_Maps->addTab(Food, QString());
        Navigation = new QWidget();
        Navigation->setObjectName(QStringLiteral("Navigation"));
        Navigation->setStyleSheet(QStringLiteral(""));
        tabW_transit = new QTabWidget(Navigation);
        tabW_transit->setObjectName(QStringLiteral("tabW_transit"));
        tabW_transit->setGeometry(QRect(0, 0, 1101, 611));
        tabW_transit->setFont(font);
        tabW_transit->setStyleSheet(QLatin1String("QTabWidget::pane { /* The tab widget frame */\n"
"     border-width: 0px;\n"
"     top: -3.1em;\n"
" }\n"
"\n"
"QTabWidget::tab-bar {\n"
"     left: 605px; /* move to the right by 5px */\n"
" }\n"
"\n"
"QTabBar::tab {\n"
"    height: 39px; width: 100px;\n"
"\n"
"\n"
"\n"
"    \n"
"	\n"
"     border-right: 0px solid rgb(255, 255, 255);\n"
"}"));
        cta = new QWidget();
        cta->setObjectName(QStringLiteral("cta"));
        tabW_transit->addTab(cta, QString());
        uicShuttle = new QWidget();
        uicShuttle->setObjectName(QStringLiteral("uicShuttle"));
        webView = new QWebView(uicShuttle);
        webView->setObjectName(QStringLiteral("webView"));
        webView->setGeometry(QRect(0, -40, 1131, 671));
        webView->setUrl(QUrl(QStringLiteral("about:blank")));
        tabW_transit->addTab(uicShuttle, QString());
        tabW_Maps->addTab(Navigation, QString());
        label_pix = new QLabel(centralWidget);
        label_pix->setObjectName(QStringLiteral("label_pix"));
        label_pix->setGeometry(QRect(1130, 100, 1031, 501));
        f_SideMenu = new MyFrame(centralWidget);
        f_SideMenu->setObjectName(QStringLiteral("f_SideMenu"));
        f_SideMenu->setGeometry(QRect(0, 40, 51, 611));
        f_SideMenu->setStyleSheet(QLatin1String("\n"
"QFrame {\n"
"\n"
"background-color: rgb(255, 255, 255);\n"
"\n"
" border-width: 0px;\n"
"    border-color: rgb(255, 0, 0);\n"
"    border-style: none;\n"
"    border-radius: 0;\n"
"    padding: 0px;\n"
"\n"
"}\n"
"\n"
"QPushButton {\n"
"\n"
"padding-left:13px;\n"
"font: 16pt \"Arial\";\n"
"qproperty-iconSize: 25px; \n"
"Text-align:left\n"
"\n"
"}\n"
"\n"
"/*\n"
"QPushButton#b_Athletics:hover {\n"
"   qproperty-icon: url(:/resources/resources/iconsUIC/athleticsWhite.png);\n"
"}\n"
"*/\n"
""));
        f_SideMenu->setFrameShape(QFrame::StyledPanel);
        f_SideMenu->setFrameShadow(QFrame::Raised);
        b_Home = new MyPushButton(f_SideMenu);
        b_Home->setObjectName(QStringLiteral("b_Home"));
        b_Home->setGeometry(QRect(0, 0, 200, 39));
        b_Home->setStyleSheet(QLatin1String("/*image: url(:/resources/resources/iconsUIC/homeBlue.png); \n"
"\n"
"qproperty-iconSize: 30px; */"));
        b_Home->setIconSize(QSize(25, 25));
        b_Maps = new MyPushButton(f_SideMenu);
        b_Maps->setObjectName(QStringLiteral("b_Maps"));
        b_Maps->setGeometry(QRect(0, 40, 200, 39));
        QFont font3;
        font3.setFamily(QStringLiteral("Arial"));
        font3.setPointSize(16);
        font3.setBold(false);
        font3.setItalic(false);
        font3.setWeight(50);
        b_Maps->setFont(font3);
        b_Maps->setStyleSheet(QLatin1String("/*\n"
"QPushButton {\n"
"\n"
"    qproperty-icon: url(:/resources/resources/iconsUIC/mapsBlue.png);\n"
"}\n"
"*/"));
        b_Maps->setIconSize(QSize(25, 25));
        b_Maps->setCheckable(false);
        b_Maps->setChecked(false);
        b_Maps->setAutoExclusive(false);
        b_Directory = new MyPushButton(f_SideMenu);
        b_Directory->setObjectName(QStringLiteral("b_Directory"));
        b_Directory->setGeometry(QRect(0, 80, 200, 39));
        b_Directory->setFont(font3);
        b_Courses = new MyPushButton(f_SideMenu);
        b_Courses->setObjectName(QStringLiteral("b_Courses"));
        b_Courses->setGeometry(QRect(0, 120, 200, 39));
        b_Courses->setFont(font3);
        b_EventsNews = new MyPushButton(f_SideMenu);
        b_EventsNews->setObjectName(QStringLiteral("b_EventsNews"));
        b_EventsNews->setGeometry(QRect(0, 160, 200, 39));
        b_EventsNews->setFont(font3);
        b_Athletics = new MyPushButton(f_SideMenu);
        b_Athletics->setObjectName(QStringLiteral("b_Athletics"));
        b_Athletics->setGeometry(QRect(0, 200, 200, 39));
        b_Athletics->setFont(font3);
        b_Athletics->setStyleSheet(QStringLiteral(""));
        b_Library = new MyPushButton(f_SideMenu);
        b_Library->setObjectName(QStringLiteral("b_Library"));
        b_Library->setGeometry(QRect(0, 240, 200, 39));
        b_Library->setFont(font3);
        b_BookS = new MyPushButton(f_SideMenu);
        b_BookS->setObjectName(QStringLiteral("b_BookS"));
        b_BookS->setGeometry(QRect(0, 280, 200, 39));
        b_BookS->setFont(font3);
        b_CHousing = new MyPushButton(f_SideMenu);
        b_CHousing->setObjectName(QStringLiteral("b_CHousing"));
        b_CHousing->setGeometry(QRect(0, 320, 200, 39));
        b_CHousing->setFont(font3);
        b_CHousing->setStyleSheet(QStringLiteral("/*qproperty-iconSize: 30px; */"));
        b_Safety = new MyPushButton(f_SideMenu);
        b_Safety->setObjectName(QStringLiteral("b_Safety"));
        b_Safety->setGeometry(QRect(0, 360, 200, 39));
        b_Safety->setFont(font3);
        frame = new QFrame(f_SideMenu);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(0, 400, 201, 211));
        frame->setStyleSheet(QStringLiteral("background-color: rgb(204, 204, 204);"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label_18 = new QLabel(centralWidget);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(0, 0, 51, 39));
        label_18->setStyleSheet(QLatin1String("background-color: rgb(255, 0, 0);\n"
"color: rgb(255, 255, 255);"));
        f_TopMenu = new QFrame(centralWidget);
        f_TopMenu->setObjectName(QStringLiteral("f_TopMenu"));
        f_TopMenu->setGeometry(QRect(52, 0, 1099, 39));
        f_TopMenu->setStyleSheet(QLatin1String("QFrame {\n"
"\n"
"background-color: rgb(204, 204, 204);\n"
"\n"
" border-width: 0px;\n"
"    border-color: rgb(255, 0, 0);\n"
"    border-style: none;\n"
"    border-radius: 0;\n"
"    padding: 0px;\n"
"\n"
"}"));
        f_TopMenu->setFrameShape(QFrame::StyledPanel);
        f_TopMenu->setFrameShadow(QFrame::Raised);
        tabW_CHousing = new QTabWidget(centralWidget);
        tabW_CHousing->setObjectName(QStringLiteral("tabW_CHousing"));
        tabW_CHousing->setGeometry(QRect(50, 0, 1101, 651));
        tabW_CHousing->setFont(font1);
        tabW_CHousing->setStyleSheet(QLatin1String("QTabWidget::pane { /* The tab widget frame */\n"
"     border-width: 0px;\n"
"border-color: rgba(255, 0, 0, 191);\n"
"border-style: solid;\n"
"border-radius: 0;\n"
" }\n"
"\n"
"\n"
"QTabBar::tab {\n"
"\n"
"\n"
"\n"
"  /*  height: 48px; width: 200px;*/\n"
"}\n"
"QTabWidget::tab-bar {\n"
"     left: 2px; /* move to the right by 5px */\n"
" }"));
        Laundry = new QWidget();
        Laundry->setObjectName(QStringLiteral("Laundry"));
        tabW_CHousing->addTab(Laundry, QString());
        Numbers = new QWidget();
        Numbers->setObjectName(QStringLiteral("Numbers"));
        tabW_CHousing->addTab(Numbers, QString());
        Dining = new QWidget();
        Dining->setObjectName(QStringLiteral("Dining"));
        tabW_CHousing->addTab(Dining, QString());
        f_Athletics = new QFrame(centralWidget);
        f_Athletics->setObjectName(QStringLiteral("f_Athletics"));
        f_Athletics->setGeometry(QRect(50, 0, 1101, 651));
        f_Athletics->setStyleSheet(QLatin1String("QFrame {\n"
"background-color: rgb(255, 255, 255);\n"
"}"));
        f_Athletics->setFrameShape(QFrame::StyledPanel);
        f_Athletics->setFrameShadow(QFrame::Raised);
        tabW_Athletics = new QTabWidget(f_Athletics);
        tabW_Athletics->setObjectName(QStringLiteral("tabW_Athletics"));
        tabW_Athletics->setGeometry(QRect(0, 0, 841, 651));
        tabW_Athletics->setFont(font1);
        tabW_Athletics->setStyleSheet(QLatin1String("QTabWidget::pane { /* The tab widget frame */\n"
"     border-width: 0px;\n"
"border-color: rgba(255, 0, 0, 191);\n"
"border-style: solid;\n"
"border-radius: 0;\n"
" }\n"
"\n"
"QTabBar::tab {\n"
"	\n"
"\n"
"\n"
"\n"
"    /*height: 48px; width: 100px;*/\n"
"}\n"
"QTabWidget::tab-bar {\n"
"     left: 2px; /* move to the right by 5px */\n"
" }\n"
"\n"
""));
        tab_Scores = new QWidget();
        tab_Scores->setObjectName(QStringLiteral("tab_Scores"));
        tabW_Athletics->addTab(tab_Scores, QString());
        tab_Schedule = new QWidget();
        tab_Schedule->setObjectName(QStringLiteral("tab_Schedule"));
        tabW_Athletics->addTab(tab_Schedule, QString());
        tab_News = new QWidget();
        tab_News->setObjectName(QStringLiteral("tab_News"));
        tabW_Athletics->addTab(tab_News, QString());
        listWidget_2 = new QListWidget(f_Athletics);
        new QListWidgetItem(listWidget_2);
        new QListWidgetItem(listWidget_2);
        new QListWidgetItem(listWidget_2);
        new QListWidgetItem(listWidget_2);
        new QListWidgetItem(listWidget_2);
        new QListWidgetItem(listWidget_2);
        new QListWidgetItem(listWidget_2);
        new QListWidgetItem(listWidget_2);
        new QListWidgetItem(listWidget_2);
        new QListWidgetItem(listWidget_2);
        new QListWidgetItem(listWidget_2);
        new QListWidgetItem(listWidget_2);
        new QListWidgetItem(listWidget_2);
        new QListWidgetItem(listWidget_2);
        new QListWidgetItem(listWidget_2);
        new QListWidgetItem(listWidget_2);
        new QListWidgetItem(listWidget_2);
        new QListWidgetItem(listWidget_2);
        new QListWidgetItem(listWidget_2);
        new QListWidgetItem(listWidget_2);
        new QListWidgetItem(listWidget_2);
        new QListWidgetItem(listWidget_2);
        new QListWidgetItem(listWidget_2);
        new QListWidgetItem(listWidget_2);
        new QListWidgetItem(listWidget_2);
        new QListWidgetItem(listWidget_2);
        new QListWidgetItem(listWidget_2);
        new QListWidgetItem(listWidget_2);
        new QListWidgetItem(listWidget_2);
        new QListWidgetItem(listWidget_2);
        new QListWidgetItem(listWidget_2);
        new QListWidgetItem(listWidget_2);
        new QListWidgetItem(listWidget_2);
        new QListWidgetItem(listWidget_2);
        new QListWidgetItem(listWidget_2);
        new QListWidgetItem(listWidget_2);
        new QListWidgetItem(listWidget_2);
        new QListWidgetItem(listWidget_2);
        new QListWidgetItem(listWidget_2);
        new QListWidgetItem(listWidget_2);
        new QListWidgetItem(listWidget_2);
        new QListWidgetItem(listWidget_2);
        new QListWidgetItem(listWidget_2);
        new QListWidgetItem(listWidget_2);
        new QListWidgetItem(listWidget_2);
        new QListWidgetItem(listWidget_2);
        new QListWidgetItem(listWidget_2);
        new QListWidgetItem(listWidget_2);
        new QListWidgetItem(listWidget_2);
        new QListWidgetItem(listWidget_2);
        new QListWidgetItem(listWidget_2);
        new QListWidgetItem(listWidget_2);
        listWidget_2->setObjectName(QStringLiteral("listWidget_2"));
        listWidget_2->setGeometry(QRect(840, 40, 261, 611));
        listWidget_2->setStyleSheet(QLatin1String("\n"
" QListView {\n"
"\n"
"\n"
"border-width: 0px;\n"
"border-color: rgba(255, 0, 0, 191);\n"
"border-style: solid;\n"
"border-radius: 0;\n"
"background-color: rgb(204, 204, 204);\n"
" }\n"
""));
        frame_2 = new QFrame(f_Athletics);
        frame_2->setObjectName(QStringLiteral("frame_2"));
        frame_2->setGeometry(QRect(605, 0, 501, 39));
        frame_2->setStyleSheet(QLatin1String("background-color: rgb(204, 204, 204);\n"
"border-width: 0px;\n"
"border-color: rgba(255, 0, 0, 191);\n"
"border-style: solid;\n"
"border-radius: 0;"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        tabW_Athletics->raise();
        frame_2->raise();
        listWidget_2->raise();
        MainWindow->setCentralWidget(centralWidget);
        f_TopMenu->raise();
        f_BookS->raise();
        f_Library->raise();
        f_Courses->raise();
        f_Athletics->raise();
        tabW_Directory->raise();
        tabW_Maps->raise();
        tabW_CHousing->raise();
        f_Safety->raise();
        label_pix->raise();
        label_18->raise();
        f_SideMenu->raise();
        QWidget::setTabOrder(tabW_Athletics, tabW_CHousing);
        QWidget::setTabOrder(tabW_CHousing, tabW_Maps);
        QWidget::setTabOrder(tabW_Maps, tabW_transit);
        QWidget::setTabOrder(tabW_transit, webView);
        QWidget::setTabOrder(webView, tabW_Directory);
        QWidget::setTabOrder(tabW_Directory, b_Home);
        QWidget::setTabOrder(b_Home, b_Maps);
        QWidget::setTabOrder(b_Maps, b_Directory);
        QWidget::setTabOrder(b_Directory, b_Courses);
        QWidget::setTabOrder(b_Courses, b_EventsNews);
        QWidget::setTabOrder(b_EventsNews, b_Athletics);
        QWidget::setTabOrder(b_Athletics, b_Library);
        QWidget::setTabOrder(b_Library, b_BookS);
        QWidget::setTabOrder(b_BookS, b_CHousing);
        QWidget::setTabOrder(b_CHousing, b_Safety);

        retranslateUi(MainWindow);

        tabW_Directory->setCurrentIndex(0);
        tabW_Maps->setCurrentIndex(2);
        tabW_transit->setCurrentIndex(1);
        tabW_CHousing->setCurrentIndex(2);
        tabW_Athletics->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        tabW_Directory->setTabText(tabW_Directory->indexOf(tab_Prof), QApplication::translate("MainWindow", "Professors", 0));
        tabW_Directory->setTabText(tabW_Directory->indexOf(tab_Stud), QApplication::translate("MainWindow", "Students", 0));

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("MainWindow", "New Item", 0));
        QListWidgetItem *___qlistwidgetitem1 = listWidget->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("MainWindow", "New Item", 0));
        QListWidgetItem *___qlistwidgetitem2 = listWidget->item(2);
        ___qlistwidgetitem2->setText(QApplication::translate("MainWindow", "New Item", 0));
        QListWidgetItem *___qlistwidgetitem3 = listWidget->item(3);
        ___qlistwidgetitem3->setText(QApplication::translate("MainWindow", "New Item", 0));
        QListWidgetItem *___qlistwidgetitem4 = listWidget->item(4);
        ___qlistwidgetitem4->setText(QApplication::translate("MainWindow", "New Item", 0));
        QListWidgetItem *___qlistwidgetitem5 = listWidget->item(5);
        ___qlistwidgetitem5->setText(QApplication::translate("MainWindow", "New Item", 0));
        QListWidgetItem *___qlistwidgetitem6 = listWidget->item(6);
        ___qlistwidgetitem6->setText(QApplication::translate("MainWindow", "New Item", 0));
        QListWidgetItem *___qlistwidgetitem7 = listWidget->item(7);
        ___qlistwidgetitem7->setText(QApplication::translate("MainWindow", "New Item", 0));
        QListWidgetItem *___qlistwidgetitem8 = listWidget->item(8);
        ___qlistwidgetitem8->setText(QApplication::translate("MainWindow", "New Item", 0));
        QListWidgetItem *___qlistwidgetitem9 = listWidget->item(9);
        ___qlistwidgetitem9->setText(QApplication::translate("MainWindow", "New Item", 0));
        QListWidgetItem *___qlistwidgetitem10 = listWidget->item(10);
        ___qlistwidgetitem10->setText(QApplication::translate("MainWindow", "New Item", 0));
        QListWidgetItem *___qlistwidgetitem11 = listWidget->item(11);
        ___qlistwidgetitem11->setText(QApplication::translate("MainWindow", "New Item", 0));
        QListWidgetItem *___qlistwidgetitem12 = listWidget->item(12);
        ___qlistwidgetitem12->setText(QApplication::translate("MainWindow", "New Item", 0));
        QListWidgetItem *___qlistwidgetitem13 = listWidget->item(13);
        ___qlistwidgetitem13->setText(QApplication::translate("MainWindow", "New Item", 0));
        QListWidgetItem *___qlistwidgetitem14 = listWidget->item(14);
        ___qlistwidgetitem14->setText(QApplication::translate("MainWindow", "New Item", 0));
        QListWidgetItem *___qlistwidgetitem15 = listWidget->item(15);
        ___qlistwidgetitem15->setText(QApplication::translate("MainWindow", "New Item", 0));
        QListWidgetItem *___qlistwidgetitem16 = listWidget->item(16);
        ___qlistwidgetitem16->setText(QApplication::translate("MainWindow", "New Item", 0));
        QListWidgetItem *___qlistwidgetitem17 = listWidget->item(17);
        ___qlistwidgetitem17->setText(QApplication::translate("MainWindow", "New Item", 0));
        QListWidgetItem *___qlistwidgetitem18 = listWidget->item(18);
        ___qlistwidgetitem18->setText(QApplication::translate("MainWindow", "New Item", 0));
        QListWidgetItem *___qlistwidgetitem19 = listWidget->item(19);
        ___qlistwidgetitem19->setText(QApplication::translate("MainWindow", "New Item", 0));
        QListWidgetItem *___qlistwidgetitem20 = listWidget->item(20);
        ___qlistwidgetitem20->setText(QApplication::translate("MainWindow", "New Item", 0));
        QListWidgetItem *___qlistwidgetitem21 = listWidget->item(21);
        ___qlistwidgetitem21->setText(QApplication::translate("MainWindow", "New Item", 0));
        QListWidgetItem *___qlistwidgetitem22 = listWidget->item(22);
        ___qlistwidgetitem22->setText(QApplication::translate("MainWindow", "New Item", 0));
        QListWidgetItem *___qlistwidgetitem23 = listWidget->item(23);
        ___qlistwidgetitem23->setText(QApplication::translate("MainWindow", "New Item", 0));
        QListWidgetItem *___qlistwidgetitem24 = listWidget->item(24);
        ___qlistwidgetitem24->setText(QApplication::translate("MainWindow", "New Item", 0));
        QListWidgetItem *___qlistwidgetitem25 = listWidget->item(25);
        ___qlistwidgetitem25->setText(QApplication::translate("MainWindow", "New Item", 0));
        QListWidgetItem *___qlistwidgetitem26 = listWidget->item(26);
        ___qlistwidgetitem26->setText(QApplication::translate("MainWindow", "New Item", 0));
        QListWidgetItem *___qlistwidgetitem27 = listWidget->item(27);
        ___qlistwidgetitem27->setText(QApplication::translate("MainWindow", "New Item", 0));
        QListWidgetItem *___qlistwidgetitem28 = listWidget->item(28);
        ___qlistwidgetitem28->setText(QApplication::translate("MainWindow", "New Item", 0));
        QListWidgetItem *___qlistwidgetitem29 = listWidget->item(29);
        ___qlistwidgetitem29->setText(QApplication::translate("MainWindow", "New Item", 0));
        QListWidgetItem *___qlistwidgetitem30 = listWidget->item(30);
        ___qlistwidgetitem30->setText(QApplication::translate("MainWindow", "New Item", 0));
        QListWidgetItem *___qlistwidgetitem31 = listWidget->item(31);
        ___qlistwidgetitem31->setText(QApplication::translate("MainWindow", "New Item", 0));
        QListWidgetItem *___qlistwidgetitem32 = listWidget->item(32);
        ___qlistwidgetitem32->setText(QApplication::translate("MainWindow", "New Item", 0));
        QListWidgetItem *___qlistwidgetitem33 = listWidget->item(33);
        ___qlistwidgetitem33->setText(QApplication::translate("MainWindow", "New Item", 0));
        QListWidgetItem *___qlistwidgetitem34 = listWidget->item(34);
        ___qlistwidgetitem34->setText(QApplication::translate("MainWindow", "New Item", 0));
        QListWidgetItem *___qlistwidgetitem35 = listWidget->item(35);
        ___qlistwidgetitem35->setText(QApplication::translate("MainWindow", "New Item", 0));
        QListWidgetItem *___qlistwidgetitem36 = listWidget->item(36);
        ___qlistwidgetitem36->setText(QApplication::translate("MainWindow", "New Item", 0));
        QListWidgetItem *___qlistwidgetitem37 = listWidget->item(37);
        ___qlistwidgetitem37->setText(QApplication::translate("MainWindow", "New Item", 0));
        QListWidgetItem *___qlistwidgetitem38 = listWidget->item(38);
        ___qlistwidgetitem38->setText(QApplication::translate("MainWindow", "New Item", 0));
        QListWidgetItem *___qlistwidgetitem39 = listWidget->item(39);
        ___qlistwidgetitem39->setText(QApplication::translate("MainWindow", "New Item", 0));
        QListWidgetItem *___qlistwidgetitem40 = listWidget->item(40);
        ___qlistwidgetitem40->setText(QApplication::translate("MainWindow", "New Item", 0));
        QListWidgetItem *___qlistwidgetitem41 = listWidget->item(41);
        ___qlistwidgetitem41->setText(QApplication::translate("MainWindow", "New Item", 0));
        QListWidgetItem *___qlistwidgetitem42 = listWidget->item(42);
        ___qlistwidgetitem42->setText(QApplication::translate("MainWindow", "New Item", 0));
        QListWidgetItem *___qlistwidgetitem43 = listWidget->item(43);
        ___qlistwidgetitem43->setText(QApplication::translate("MainWindow", "New Item", 0));
        QListWidgetItem *___qlistwidgetitem44 = listWidget->item(44);
        ___qlistwidgetitem44->setText(QApplication::translate("MainWindow", "New Item", 0));
        QListWidgetItem *___qlistwidgetitem45 = listWidget->item(45);
        ___qlistwidgetitem45->setText(QApplication::translate("MainWindow", "New Item", 0));
        QListWidgetItem *___qlistwidgetitem46 = listWidget->item(46);
        ___qlistwidgetitem46->setText(QApplication::translate("MainWindow", "New Item", 0));
        QListWidgetItem *___qlistwidgetitem47 = listWidget->item(47);
        ___qlistwidgetitem47->setText(QApplication::translate("MainWindow", "New Item", 0));
        QListWidgetItem *___qlistwidgetitem48 = listWidget->item(48);
        ___qlistwidgetitem48->setText(QApplication::translate("MainWindow", "New Item", 0));
        QListWidgetItem *___qlistwidgetitem49 = listWidget->item(49);
        ___qlistwidgetitem49->setText(QApplication::translate("MainWindow", "New Item", 0));
        QListWidgetItem *___qlistwidgetitem50 = listWidget->item(50);
        ___qlistwidgetitem50->setText(QApplication::translate("MainWindow", "New Item", 0));
        QListWidgetItem *___qlistwidgetitem51 = listWidget->item(51);
        ___qlistwidgetitem51->setText(QApplication::translate("MainWindow", "New Item", 0));
        listWidget->setSortingEnabled(__sortingEnabled);

        label_3->setText(QApplication::translate("MainWindow", "UIC Police Emergency:", 0));
        label_4->setText(QApplication::translate("MainWindow", "UIC Police Non-Emergency:", 0));
        label_5->setText(QApplication::translate("MainWindow", "UIC Family Medical Center:", 0));
        label_6->setText(QApplication::translate("MainWindow", "Res-Net (ACCC):", 0));
        label_7->setText(QApplication::translate("MainWindow", "UIC Red Car:", 0));
        label_8->setText(QApplication::translate("MainWindow", "(312) 996-6800", 0));
        label_9->setText(QApplication::translate("MainWindow", "(312) 413-0003", 0));
        label_10->setText(QApplication::translate("MainWindow", "(312) 996-2901", 0));
        label_11->setText(QApplication::translate("MainWindow", "(312) 355-5555", 0));
        label_12->setText(QApplication::translate("MainWindow", "(312) 996-2830", 0));
        label_13->setText(QApplication::translate("MainWindow", "Crisis Hotline (In-Touch):", 0));
        label_14->setText(QApplication::translate("MainWindow", "(312) 996-5535", 0));
        label_15->setText(QApplication::translate("MainWindow", "UIC Operators:", 0));
        label_16->setText(QApplication::translate("MainWindow", "(312) 996-7000", 0));
        tabW_Maps->setTabText(tabW_Maps->indexOf(West), QApplication::translate("MainWindow", "West Campus", 0));
        tabW_Maps->setTabText(tabW_Maps->indexOf(East), QApplication::translate("MainWindow", "East Campus", 0));
        tabW_Maps->setTabText(tabW_Maps->indexOf(Food), QApplication::translate("MainWindow", "Restaurants", 0));
        tabW_transit->setTabText(tabW_transit->indexOf(cta), QApplication::translate("MainWindow", "CTA Tracker", 0));
        tabW_transit->setTabText(tabW_transit->indexOf(uicShuttle), QApplication::translate("MainWindow", "UIC Shuttle", 0));
        tabW_Maps->setTabText(tabW_Maps->indexOf(Navigation), QApplication::translate("MainWindow", "Navigation", 0));
        label_pix->setText(QString());
        b_Home->setText(QApplication::translate("MainWindow", "     Home", 0));
        b_Maps->setText(QApplication::translate("MainWindow", "     Maps", 0));
        b_Directory->setText(QApplication::translate("MainWindow", "     Directory", 0));
        b_Courses->setText(QApplication::translate("MainWindow", "     Courses", 0));
        b_EventsNews->setText(QApplication::translate("MainWindow", "     Events/News", 0));
        b_Athletics->setText(QApplication::translate("MainWindow", "     Athletics", 0));
        b_Library->setText(QApplication::translate("MainWindow", "     Library", 0));
        b_BookS->setText(QApplication::translate("MainWindow", "     Book Store", 0));
        b_CHousing->setText(QApplication::translate("MainWindow", "     Campus Housing", 0));
        b_Safety->setText(QApplication::translate("MainWindow", "     Safety", 0));
        label_18->setText(QString());
        tabW_CHousing->setTabText(tabW_CHousing->indexOf(Laundry), QApplication::translate("MainWindow", "Laundry View", 0));
        tabW_CHousing->setTabText(tabW_CHousing->indexOf(Numbers), QApplication::translate("MainWindow", "Important Numbers", 0));
        tabW_CHousing->setTabText(tabW_CHousing->indexOf(Dining), QApplication::translate("MainWindow", "Dining Menu", 0));
        tabW_Athletics->setTabText(tabW_Athletics->indexOf(tab_Scores), QApplication::translate("MainWindow", "Scores", 0));
        tabW_Athletics->setTabText(tabW_Athletics->indexOf(tab_Schedule), QApplication::translate("MainWindow", "Schedule", 0));
        tabW_Athletics->setTabText(tabW_Athletics->indexOf(tab_News), QApplication::translate("MainWindow", "News", 0));

        const bool __sortingEnabled1 = listWidget_2->isSortingEnabled();
        listWidget_2->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem52 = listWidget_2->item(0);
        ___qlistwidgetitem52->setText(QApplication::translate("MainWindow", "New Item", 0));
        QListWidgetItem *___qlistwidgetitem53 = listWidget_2->item(1);
        ___qlistwidgetitem53->setText(QApplication::translate("MainWindow", "New Item", 0));
        QListWidgetItem *___qlistwidgetitem54 = listWidget_2->item(2);
        ___qlistwidgetitem54->setText(QApplication::translate("MainWindow", "New Item", 0));
        QListWidgetItem *___qlistwidgetitem55 = listWidget_2->item(3);
        ___qlistwidgetitem55->setText(QApplication::translate("MainWindow", "New Item", 0));
        QListWidgetItem *___qlistwidgetitem56 = listWidget_2->item(4);
        ___qlistwidgetitem56->setText(QApplication::translate("MainWindow", "New Item", 0));
        QListWidgetItem *___qlistwidgetitem57 = listWidget_2->item(5);
        ___qlistwidgetitem57->setText(QApplication::translate("MainWindow", "New Item", 0));
        QListWidgetItem *___qlistwidgetitem58 = listWidget_2->item(6);
        ___qlistwidgetitem58->setText(QApplication::translate("MainWindow", "New Item", 0));
        QListWidgetItem *___qlistwidgetitem59 = listWidget_2->item(7);
        ___qlistwidgetitem59->setText(QApplication::translate("MainWindow", "New Item", 0));
        QListWidgetItem *___qlistwidgetitem60 = listWidget_2->item(8);
        ___qlistwidgetitem60->setText(QApplication::translate("MainWindow", "New Item", 0));
        QListWidgetItem *___qlistwidgetitem61 = listWidget_2->item(9);
        ___qlistwidgetitem61->setText(QApplication::translate("MainWindow", "New Item", 0));
        QListWidgetItem *___qlistwidgetitem62 = listWidget_2->item(10);
        ___qlistwidgetitem62->setText(QApplication::translate("MainWindow", "New Item", 0));
        QListWidgetItem *___qlistwidgetitem63 = listWidget_2->item(11);
        ___qlistwidgetitem63->setText(QApplication::translate("MainWindow", "New Item", 0));
        QListWidgetItem *___qlistwidgetitem64 = listWidget_2->item(12);
        ___qlistwidgetitem64->setText(QApplication::translate("MainWindow", "New Item", 0));
        QListWidgetItem *___qlistwidgetitem65 = listWidget_2->item(13);
        ___qlistwidgetitem65->setText(QApplication::translate("MainWindow", "New Item", 0));
        QListWidgetItem *___qlistwidgetitem66 = listWidget_2->item(14);
        ___qlistwidgetitem66->setText(QApplication::translate("MainWindow", "New Item", 0));
        QListWidgetItem *___qlistwidgetitem67 = listWidget_2->item(15);
        ___qlistwidgetitem67->setText(QApplication::translate("MainWindow", "New Item", 0));
        QListWidgetItem *___qlistwidgetitem68 = listWidget_2->item(16);
        ___qlistwidgetitem68->setText(QApplication::translate("MainWindow", "New Item", 0));
        QListWidgetItem *___qlistwidgetitem69 = listWidget_2->item(17);
        ___qlistwidgetitem69->setText(QApplication::translate("MainWindow", "New Item", 0));
        QListWidgetItem *___qlistwidgetitem70 = listWidget_2->item(18);
        ___qlistwidgetitem70->setText(QApplication::translate("MainWindow", "New Item", 0));
        QListWidgetItem *___qlistwidgetitem71 = listWidget_2->item(19);
        ___qlistwidgetitem71->setText(QApplication::translate("MainWindow", "New Item", 0));
        QListWidgetItem *___qlistwidgetitem72 = listWidget_2->item(20);
        ___qlistwidgetitem72->setText(QApplication::translate("MainWindow", "New Item", 0));
        QListWidgetItem *___qlistwidgetitem73 = listWidget_2->item(21);
        ___qlistwidgetitem73->setText(QApplication::translate("MainWindow", "New Item", 0));
        QListWidgetItem *___qlistwidgetitem74 = listWidget_2->item(22);
        ___qlistwidgetitem74->setText(QApplication::translate("MainWindow", "New Item", 0));
        QListWidgetItem *___qlistwidgetitem75 = listWidget_2->item(23);
        ___qlistwidgetitem75->setText(QApplication::translate("MainWindow", "New Item", 0));
        QListWidgetItem *___qlistwidgetitem76 = listWidget_2->item(24);
        ___qlistwidgetitem76->setText(QApplication::translate("MainWindow", "New Item", 0));
        QListWidgetItem *___qlistwidgetitem77 = listWidget_2->item(25);
        ___qlistwidgetitem77->setText(QApplication::translate("MainWindow", "New Item", 0));
        QListWidgetItem *___qlistwidgetitem78 = listWidget_2->item(26);
        ___qlistwidgetitem78->setText(QApplication::translate("MainWindow", "New Item", 0));
        QListWidgetItem *___qlistwidgetitem79 = listWidget_2->item(27);
        ___qlistwidgetitem79->setText(QApplication::translate("MainWindow", "New Item", 0));
        QListWidgetItem *___qlistwidgetitem80 = listWidget_2->item(28);
        ___qlistwidgetitem80->setText(QApplication::translate("MainWindow", "New Item", 0));
        QListWidgetItem *___qlistwidgetitem81 = listWidget_2->item(29);
        ___qlistwidgetitem81->setText(QApplication::translate("MainWindow", "New Item", 0));
        QListWidgetItem *___qlistwidgetitem82 = listWidget_2->item(30);
        ___qlistwidgetitem82->setText(QApplication::translate("MainWindow", "New Item", 0));
        QListWidgetItem *___qlistwidgetitem83 = listWidget_2->item(31);
        ___qlistwidgetitem83->setText(QApplication::translate("MainWindow", "New Item", 0));
        QListWidgetItem *___qlistwidgetitem84 = listWidget_2->item(32);
        ___qlistwidgetitem84->setText(QApplication::translate("MainWindow", "New Item", 0));
        QListWidgetItem *___qlistwidgetitem85 = listWidget_2->item(33);
        ___qlistwidgetitem85->setText(QApplication::translate("MainWindow", "New Item", 0));
        QListWidgetItem *___qlistwidgetitem86 = listWidget_2->item(34);
        ___qlistwidgetitem86->setText(QApplication::translate("MainWindow", "New Item", 0));
        QListWidgetItem *___qlistwidgetitem87 = listWidget_2->item(35);
        ___qlistwidgetitem87->setText(QApplication::translate("MainWindow", "New Item", 0));
        QListWidgetItem *___qlistwidgetitem88 = listWidget_2->item(36);
        ___qlistwidgetitem88->setText(QApplication::translate("MainWindow", "New Item", 0));
        QListWidgetItem *___qlistwidgetitem89 = listWidget_2->item(37);
        ___qlistwidgetitem89->setText(QApplication::translate("MainWindow", "New Item", 0));
        QListWidgetItem *___qlistwidgetitem90 = listWidget_2->item(38);
        ___qlistwidgetitem90->setText(QApplication::translate("MainWindow", "New Item", 0));
        QListWidgetItem *___qlistwidgetitem91 = listWidget_2->item(39);
        ___qlistwidgetitem91->setText(QApplication::translate("MainWindow", "New Item", 0));
        QListWidgetItem *___qlistwidgetitem92 = listWidget_2->item(40);
        ___qlistwidgetitem92->setText(QApplication::translate("MainWindow", "New Item", 0));
        QListWidgetItem *___qlistwidgetitem93 = listWidget_2->item(41);
        ___qlistwidgetitem93->setText(QApplication::translate("MainWindow", "New Item", 0));
        QListWidgetItem *___qlistwidgetitem94 = listWidget_2->item(42);
        ___qlistwidgetitem94->setText(QApplication::translate("MainWindow", "New Item", 0));
        QListWidgetItem *___qlistwidgetitem95 = listWidget_2->item(43);
        ___qlistwidgetitem95->setText(QApplication::translate("MainWindow", "New Item", 0));
        QListWidgetItem *___qlistwidgetitem96 = listWidget_2->item(44);
        ___qlistwidgetitem96->setText(QApplication::translate("MainWindow", "New Item", 0));
        QListWidgetItem *___qlistwidgetitem97 = listWidget_2->item(45);
        ___qlistwidgetitem97->setText(QApplication::translate("MainWindow", "New Item", 0));
        QListWidgetItem *___qlistwidgetitem98 = listWidget_2->item(46);
        ___qlistwidgetitem98->setText(QApplication::translate("MainWindow", "New Item", 0));
        QListWidgetItem *___qlistwidgetitem99 = listWidget_2->item(47);
        ___qlistwidgetitem99->setText(QApplication::translate("MainWindow", "New Item", 0));
        QListWidgetItem *___qlistwidgetitem100 = listWidget_2->item(48);
        ___qlistwidgetitem100->setText(QApplication::translate("MainWindow", "New Item", 0));
        QListWidgetItem *___qlistwidgetitem101 = listWidget_2->item(49);
        ___qlistwidgetitem101->setText(QApplication::translate("MainWindow", "New Item", 0));
        QListWidgetItem *___qlistwidgetitem102 = listWidget_2->item(50);
        ___qlistwidgetitem102->setText(QApplication::translate("MainWindow", "New Item", 0));
        QListWidgetItem *___qlistwidgetitem103 = listWidget_2->item(51);
        ___qlistwidgetitem103->setText(QApplication::translate("MainWindow", "New Item", 0));
        listWidget_2->setSortingEnabled(__sortingEnabled1);

    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
