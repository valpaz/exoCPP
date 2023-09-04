#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPainter>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

//void MainWindow::paintEvent(QPaintEvent *e)
//{
//QPainter painter(this);
//painter.drawEllipse(0,0,200,200);
//QMainWindow::paintEvent(e);
//QColor black(Qt::black);
//QColor red(Qt::red);
//QPen pen(black);
//QBrush brush(red);
//painter->setPen(pen);
//painter->setBrush(brush);
//painter->drawLine(10,10,150,150);
//painter->end();

//}
