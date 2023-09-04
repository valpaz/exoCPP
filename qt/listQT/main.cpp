#include <iostream>
#include <QCoreApplication>
#include <QList>
using namespace std;

int main(int argc, char *argv[])
{

    QCoreApplication a(argc, argv);
    QList<int> list = {1,2,3,4,5};
    list.append(6);
    list << 7;
    for (int i = 0; i < list.size(); ++i) {
            cout << list[i] << endl;
    }

    return a.exec();
}
