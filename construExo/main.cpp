#include <iostream>
#include "essai.h"
using namespace std;

int main()
{

    /* Cette exercice permet de comprendre le fonctionnement du constructeur de copie, avec suivi de pointeur */
    testCopie test;
    cout << test.attribut << endl;
    test.impPointer();
    cout << "########################" << endl;
    test.modif();
    testCopie test2 = test;
    cout << test.attribut << endl;
    test.impPointer();
    cout << test2.attribut << endl;
    test2.impPointer();

    /* Cette exercice permet de comprendre le fonctionnement du constructeur/destructeur
    Le constructeur est appelé automatiquement, ici on le creer explicitement pour pouvoir le print quand il est appelé */
    //essai e;
    //cout << "Hello World!" << endl;
    //e.print();
    return 0;
}
