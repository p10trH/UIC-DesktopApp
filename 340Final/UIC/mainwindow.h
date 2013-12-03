#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QListWidget>
#include <QListWidgetItem>


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();



private slots:
    void on_b_Home_clicked();
    void on_b_Athletics_clicked();
    void on_b_BookS_clicked();
    void on_b_CHousing_clicked();
    void on_b_Courses_clicked();
    void on_b_Directory_clicked();
    void on_b_EventsNews_clicked();
    void on_b_Library_clicked();
    void on_b_Maps_clicked();
    void on_b_Safety_clicked();
    void setAllFalse();

    void hideWidgets();
    void setMenuIcons();
    void slideShow();
    void delay();

    void mouseMoveEvent(QMouseEvent *e);

   // bool eventFilter(QEvent *event);

    //void on_pushButton_3_clicked();



    //void on_lineEdit_returnPressed();

    void on_lineEdit_Courses_textChanged(const QString &arg1);

    void on_listWidget_Courses_itemClicked();

protected:
    //void hoverEnterEvent(QGraphicsSceneHoverEvent *event);
    //void hoverLeaveEvent(QGraphicsSceneHoverEvent *event);



private:
    Ui::MainWindow *ui;

};

#endif // MAINWINDOW_H
