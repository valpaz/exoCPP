#ifndef POINT_H
#define POINT_H


class Point
{
    friend Point operator*(const Point a, const Point b);
    public:
    Point(int a=0, int b=0);
    int x,y;

    Point operator+(Point);
    void display();
};

#endif // POINT_H
