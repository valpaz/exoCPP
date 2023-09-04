#ifndef MERE_H
#define MERE_H
#include <iostream>
using namespace std;

class mere
{
public:
    mere();
    void fonnction(); // Cette fonction ne servira donc jamais a rien comme la classe est abstraite
    virtual void fonctionPure() = 0;
};

#endif // MERE_H
