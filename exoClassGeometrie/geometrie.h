#ifndef GEOMETRIE_H
#define GEOMETRIE_H
using namespace std;

enum element{
    triangle,
    cercle,
    rectangle
};

class geometrie
{
public:
    geometrie();
    void createCercle(int rayon);
    void createRectangle(int x, int y);
    void createTriangle(int x, int y, int z);
    void aire(enum element,int x, int y=0, int z=0);
    void perimetre(enum element,int x, int y=0, int z=0);
};

#endif // GEOMETRIE_H
