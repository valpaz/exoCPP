#include "essai.h"
#include <iostream>
using namespace std;
essai::essai()
{
 cout << "coucou je suis le constructeur" << endl;

}

essai::~essai()
{
cout << "coucou je suis le destructeur" << endl;
}

void essai::print()
{
    cout << attribut << endl;
}







testCopie::testCopie()
{
    cout << "coucou je suis le constructeur" << endl;
}

testCopie::testCopie(const testCopie &source)
{
    this->attribut=source.attribut;
    this->p=&attribut;
    cout << "coucou je suis le constructeur COPIE" << endl;
}

void testCopie::impPointer()
{
    cout << "contenu du pointeur " << (*p) << endl;
}

void testCopie::modif()
{
    attribut+=1;
}
