#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Demo
{
    public:
        int operator() (int a,int b) { return a + b ; }
};

int main()
{
    vector<int> v {3,1,13,5,3,1,13,5};
    sort(begin(v), end(v),greater<int>());
    for (int x : v) {
        cout << x << " "<<endl;
    }

    greater<int> greater_int{};
    cout<<greater_int(1,2)<<endl; // 0 car 1  est bien plus petit que 2

    //  Creation d'un foncteur //
    Demo s;
    int res=s(3,4);
    cout<<res<<endl;

    return 0;
}
