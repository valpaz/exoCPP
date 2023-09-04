#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pushButtonRaz,SIGNAL(clicked()),this,SLOT(close()));
    connect (ui->lineEditNom,SIGNAL(returnPressed()),this,SLOT(fini()));
    connect (ui->lineEditPrenom,SIGNAL(textChanged(QString)),this,SLOT(TextChangeee(QString)));

    ui->lineEditNom->setText("Aguilar");
    ui->lineEditPrenom->setText("Jean-David");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::TextChangeee(QString q){
    qDebug()<<q;
}

void MainWindow::fini()
{
    qDebug()<<ui->lineEditNom->text();
}
