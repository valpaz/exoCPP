#ifndef FILLE_H
#define FILLE_H
#include <iostream>
#include "mere.h"

using namespace std;
class fille : public mere {
public:
    fille(int i);
    void fonctionRedef();
    int membreFille;
};

#endif // FILLE_H
