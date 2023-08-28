#include "geometrie.h"
#include <math.h>
#include <string>



geometrie::geometrie()
{

}

void geometrie::createCercle(int rayon)
{
 cout <<"Vous avez creer un cercle de rayon : " << rayon << endl;
}

void geometrie::createRectangle(int x, int y)
{
cout <<"Vous avez creer un rectangle de coté x : " << x << " et y : " << y << endl;
}

void geometrie::createTriangle(int x, int y, int z)
{
cout <<"Vous avez creer un triangle de coté x : " << x << " y : " << y << " et z : " << z << endl;
}

void geometrie::aire(element element,int x, int y, int z)
{
    int aire;
    if (element == element::triangle){
        int demiPeri= (x + y + z) / 2;
        aire = sqrt(demiPeri*(demiPeri-x)*(demiPeri-y)*(demiPeri-z));
        cout <<"L'air de votre triangle est : " << aire << endl;
}
    if (element == element::rectangle){
        aire = x*y;
        cout <<"L'air de votre rectangle est : " << aire << endl;
}
    if (element == element::cercle){
        aire = M_PI*x*x;
        cout <<"L'air de votre cercle est : " << aire << endl;
    }
}

void geometrie::perimetre(element element, int x, int y, int z)
{
    {
        int perimetre;
        if (element == element::triangle){
            perimetre = x+y+z;
            cout <<"Le perimetre de votre triangle est : " << perimetre << endl;
    }
        if (element == element::rectangle){
            perimetre = (x+y)*2;
            cout <<"Le perimetre de votre rectangle est : " << perimetre << endl;
    }
        if (element == element::cercle){
            perimetre = 2*M_PI*x;
            cout <<"Le perimetre de votre cercle est : " << perimetre << endl;
        }
    }
}
