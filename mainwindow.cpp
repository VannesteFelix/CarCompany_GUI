#include "mainwindow.h"

MainWindow::MainWindow() : QWidget(){

    setFixedSize(200, 100);

    m_pushb = new QPushButton("My Button",this);
    m_pb = new QProgressBar (this);
    m_slider = new QSlider(Qt::Horizontal, this);

    m_pushb->move(10,30);
    m_pb->setGeometry(10, 60, 150 , 20);
    m_slider->setRange(200,600);
    m_slider->setGeometry(10, 90, 150, 20);

    QObject::connect(m_slider, SIGNAL(valueChanged(int)), m_pb, SLOT(setValue(int))) ;
    QObject::connect(m_pushb, SIGNAL(clicked(bool)), m_pb, SLOT(reset())) ;
    QObject::connect(m_slider,SIGNAL(valueChanged(int)),this,SLOT(resizeWindow(int)));
    QObject::connect(this, SIGNAL(agrandissementMax()), qApp, SLOT(quit()));

}

void MainWindow::resizeWindow(int width){
    setFixedSize(width, width);

    if (width == 600)  {
        emit agrandissementMax();
    }
}
