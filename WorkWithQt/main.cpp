#include <QCoreApplication>
#include <QDateTime>
#include <QDebug>
void fonctionAddDate(int nb,QDateTime date)
{
    QDateTime newDate=date.addDays(nb);
    qDebug()<<newDate;
}
int main(int argc, char *argv[])
{
//    /* appuyer sur f1 pour aavoir la doc d'une fonction */
    QCoreApplication a(argc, argv);
//    //  2 facons
//    qDebug()<<a.applicationFilePath();  // Ici on  utiliise  l'objett creeer
//    // OU
//    QCoreApplication::applicationPid(); // Ici on utilise  directement une static

//    qint64  msecs=QDateTime::currentMSecsSinceEpoch();
//    QDateTime dt = QDateTime::currentDateTime();
//    qDebug()<<dt;
//    QDateTime newdate=dt.addDays(14);
//    newdate.toString();
//    qDebug()<<QString::number(2000); // qDebug() permet d'afficher dans la console debug
//    qDebug()<<newdate;
//    QString chaine("coucou");
//    chaine.toUpper().append("rere").count();
//    qDebug()<<chaine;
//    //Date quelconque
    QDateTime randomDate(QDate(2012, 7, 6), QTime(8, 30, 0));
    QDateTime currentDate = QDateTime::currentDateTime();
    int jour=10;
    fonctionAddDate(jour,randomDate);
    return a.exec();
}
