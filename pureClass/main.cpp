#include <iostream>
#include "fille.h"
#include "mere.h"
using namespace std;

int main()
{
    cout << "######## Classe virtuel pure et abstrait ##########" << endl;
    // Si mere a une fonction pure abstraite, elle ne peut plus qu'etre utiliser pour etre dérivé en classe fille
    // mere mereTest; ne fonctionne donc pas
    fille purefille1;
    fille *pFP = &purefille1;
    (*pFP).fonctionPure();
    return 0;
}
