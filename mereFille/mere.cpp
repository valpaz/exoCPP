#include "mere.h"

mere::mere(int i)
{
    attributPublic += i;
    cout << "constructeur mere" << endl;
}



void mere::fonctionRedef()
{
    cout << "fonctionRedef mere" << endl;
}

int mere::getAttributPrivate() const
{
    return attributPrivate;
}

void mere::setAttributPrivate(int newAttributPrivate)
{
    attributPrivate = newAttributPrivate;
}

