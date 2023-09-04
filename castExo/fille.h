#ifndef FILLE_H
#define FILLE_H
#include <iostream>
#include "mere.h"

using namespace std;
class Fille : public Mere {
public:
    Fille();
    void affiche() override;
};

#endif // FILLE_H
