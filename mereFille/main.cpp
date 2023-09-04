#include <iostream>
#include "fille.h"
#include "mere.h"
using namespace std;

int main()
{
    fille test(2);
    mere test2(2);
    //cout << "attribut fille " << test1.attributPublic << endl;
    cout << "attribut mere " << test2.attributPublic << endl;
    cout << "fonction mere appelé par objet fille " << test.getAttributPrivate() << endl;
    cout << "attribut mere appelé par objet fille " << test.attributPublic << endl;
    test.fonctionRedef(); // Ici test est un objet fille
    test.mere::fonctionRedef(); // Mais on peut forcer l'appel de la fonction identique dans mere

    cout << "######## Polymorphisme ##########" << endl;
    mere objetMere1(1);
    cout << "# " << endl;
    fille objetfille1(1);
    objetMere1.fonctionRedef();
    objetfille1.fonctionRedef();
    cout << "######## " << endl;
    mere *pM = &objetMere1;
    mere *pF = &objetfille1;
    (*pM).fonctionRedef();
    (*pF).fonctionRedef();

    return 0;
}
