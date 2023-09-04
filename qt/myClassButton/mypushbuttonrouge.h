#ifndef MYPUSHBUTTONROUGE_H
#define MYPUSHBUTTONROUGE_H
#include <QMainWindow>
#include <QPushButton>
#include <QObject>
#include <QColor>
#include <QBrush>
#include <QPen>

class MyPushButtonRouge : public QPushButton
{
    Q_OBJECT
public:
    MyPushButtonRouge(QWidget *parent = nullptr);
private:
    void paintEvent(QPaintEvent *e) override;
};

#endif // MYPUSHBUTTONROUGE_H
