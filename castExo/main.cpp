#include <iostream>
#include "fille.h"
#include "mere.h"
using namespace std;


int main()
{

    int y = 10;
    const int* ptr = &y; // ptr est un pointeur constant vers une valeur constante
    y = 20; // Cela génèrera une erreur car *ptr est constant
    cout << * ptr << endl;
    // static_cast
    int a=4;
    cout << typeid(a).name() << endl;
    double b;
    b = static_cast<double>(a);
    cout << typeid(b).name() << endl;

    // dynamic_cast

    Mere* mere = new Fille();
    mere->affiche();
    Fille* fille = dynamic_cast<Fille*>(mere);
    fille->affiche();

    try {
        Fille& fille1 = dynamic_cast<Fille&>(*mere);
        fille1.affiche();
    } catch(const std::bad_cast& e) {
        std::cout << "cast failed" << std::endl;
    }


    //reinterpret_cast

    int j=10;
    cout << typeid(j).name() << endl;
    char *ptrj = reinterpret_cast<char *>(j);
    cout << typeid(*ptrj).name() << endl;


    // const_cast

    int c = 5;
    int *p1 = &c;
    cout << typeid(*p1).name() << endl;
    const int *p3=const_cast<int*>(p1);
    if (typeid(*p3) == typeid(const int)){
        cout << "const int" << endl;
    }

    return 0;
}
