#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QListWidget>
#include <QListWidgetItem>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow {

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

    void on_lineEdit_Courses_textChanged(const QString &arg1);
    void on_listWidget_Courses_itemClicked();
    void on_listWidget_Courses_itemClicked(QListWidgetItem *item);

    void on_lineEdit_Books_returnPressed();

    void on_B_LegendEast_clicked(bool checked);
    void on_B_LegendWest_clicked(bool checked);

    void on_listWidget_Area_itemClicked(QListWidgetItem *item);

    void on_listWidget_Athletics_itemClicked(QListWidgetItem *item);

private:
    Ui::MainWindow *ui;

};

#endif // MAINWINDOW_H
