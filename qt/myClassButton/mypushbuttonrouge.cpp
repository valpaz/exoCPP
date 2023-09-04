#include "mypushbuttonrouge.h"
#include <QPainter>


void MyPushButtonRouge::paintEvent(QPaintEvent *e)
{
    QPushButton::paintEvent(e);
    QPainter painter(this);


    QColor black(Qt::black);
    QPen pen(black);
    painter.setPen(pen);

    QColor red(Qt::red);
    QBrush brush(red);
    painter.setBrush(brush);
    painter.drawEllipse(6,3,20,20);
    painter.end();
}
MyPushButtonRouge::MyPushButtonRouge(QWidget *parent):QPushButton(parent)
{

}
