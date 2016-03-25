#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPixmap>
#include <QPainter>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    QPixmap *pixmap;
    QPixmap *pixmap_draw;
    int set;
    int upperleftX,upperleftY;
    void drawPixmap();
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_btnWidthHeight_clicked();
    void on_lneInput_returnPressed();
    void on_btnFrameOne_clicked();
    void on_btnFrameTwo_clicked();
    void on_btnFrameThree_clicked();
    void on_btnFrameFour_clicked();
    void on_btnFrameFive_clicked();
    void on_btnFrameSix_clicked();
    void on_labelSelectPoint_mousePressed(int , int );
    void on_btnConvert_clicked();
    void on_btnInput_clicked();
    void on_btnOutput_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
