#include "point.h"
#include <iostream>
using namespace std;

Point::Point(int a, int b)
{
x=a;
y=b;
}

Point Point::operator+(const Point q)
{
    return Point(x + q.x, y + q.y);
}

void Point::display()
{
    std::cout << "Point(" << x << ", " << y << ")" << std::endl;
}

