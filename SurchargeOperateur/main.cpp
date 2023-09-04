#include <iostream>
#include "point.h"

using namespace std;

Point operator*(const Point a, const Point b)
{
    return {a.x * b.x + a.y * b.y};
}
int main()
{
    cout << "Hello World!" << endl;

    Point point3(1,1);
    Point point4(6,6);
    point3.display();
    Point total;
    total = point3+point4;
    total.display();

    return 0;
}
