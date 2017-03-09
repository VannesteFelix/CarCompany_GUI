#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <QLCDNumber>
#include <QSlider>
#include <QProgressDialog>
#include <QProgressBar>

class MainWindow : public QWidget
{
    Q_OBJECT

    public:
    MainWindow();

    public slots :
    void resizeWindow(int width);

    signals:
    void agrandissementMax();

    private:
    QProgressBar *m_pb;
    QPushButton *m_pushb;
    QSlider *m_slider;
};

#endif // MAINWINDOW_H
