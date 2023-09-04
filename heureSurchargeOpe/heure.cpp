#include "heure.h"

Heure::Heure(int heuree)
{
h=heuree;
}

//Heure Heure::operator+(Heure a)
//{
//    return Heure(h + a.h);
//}
void Heure::display()
{
    cout << "heures : " << h << " minutes :" << m << endl;
}
