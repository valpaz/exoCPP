#ifndef HEURE_H
#define HEURE_H
using namespace std;
#include <iostream>

class Heure
{
public:
    Heure(int heuree=0);

    int h = 0;
    int m = 0;
    int s = 0;

    //Heure operator+(Heure a);

    void display();

    friend Heure operator+(const Heure a, int m);

};

#endif // HEURE_H
