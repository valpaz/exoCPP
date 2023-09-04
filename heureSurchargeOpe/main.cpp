#include <iostream>
#include "heure.h"
using namespace std;

Heure operator+(const Heure a, int m)
{
    return {a.h, a.m + m};
}
int main()
{
    cout << "Hello World!" << endl;

    Heure obj6(0);
    Heure objet7 = obj6 + 10;
    objet7.display();
    return 0;
}
