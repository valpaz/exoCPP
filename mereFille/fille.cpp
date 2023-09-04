#include "fille.h"

fille::fille(int i):mere(i)
{
    membreFille+=1;
    cout << "constructeur fille" << endl;
}

void fille::fonctionRedef()
{
    cout << "fonctionRedef fille" << endl;
}

