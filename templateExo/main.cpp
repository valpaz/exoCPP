#include <iostream>
#include "nulclass.h"
#include <limits>
using namespace std;

template <typename T>
void myswap(T &a, T &b) {
    T temp = a;
    a=b;
    b=temp;
}
template<typename T>
constexpr T operator"" _degrees (T d)
{ return d * 0.0175; }

int main()
{

    int c = 2;
    int d = 3;
    myswap(c,d);
    cout << "swapped value : " << c << " " << d << endl;

    nulClass obj1(1);
    nulClass obj2(5);
    myswap (obj1,obj2);
    cout << "swapped value : " << obj1.value << " " << obj2.value << endl;
    // Melange template et opérateurs de conversion utilisateur (user-defined literals)
    int degrees = 45.0_degrees;

    return 0;
}
