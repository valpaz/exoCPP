#include <iostream>
#include "geometrie.cpp"
#include <string>
int main()
{
    geometrie maGeometrie;
    int x = 5;
    maGeometrie.createCercle(x);
    maGeometrie.aire(element::cercle,x);
    maGeometrie.perimetre(element::cercle,x);

    x = 5;
    int y = 7;
    maGeometrie.createRectangle(x,y);
    maGeometrie.aire(element::rectangle,x,y);
    maGeometrie.perimetre(element::rectangle,x,y);

    x = 5;
    y = 7;
    int z = 9;
    maGeometrie.createTriangle(x,y,z);
    maGeometrie.aire(element::triangle,x,y,z);
    maGeometrie.perimetre(element::triangle,x,y,z);


    return 0;
}
