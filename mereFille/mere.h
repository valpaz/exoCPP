#ifndef MERE_H
#define MERE_H
#include <iostream>

using namespace std;

class mere
{
public:
    mere(int i);
    int attributPublic=1;
    virtual void fonctionRedef(); // L'ajout du virtual va permettre au pointeur de pointer sur la methode de même nom fille

    // Setter et getter car attributPrivate et privé donc seulement accessible comme ca
    int getAttributPrivate() const;
    void setAttributPrivate(int newAttributPrivate);
    int membreMere;


private:
    int attributPrivate=6;
};

#endif // MERE_H
