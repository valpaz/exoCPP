#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

int main()
{
    cout << "i "<< endl;
    // fill //
    vector<int> vect(8,1); // vect: 0 0 0 0 0 0 0 0
    fill (vect.begin(),vect.begin()+4,5);
    //vect: 5 5 5 5 0 0 0

    // swap //

    int x=10, y=20;
    swap(x,y);
    vector<int> vect2(8,2);
    swap(vect,vect2);
    for (auto i : vect){
        cout << i << endl; // les valeurs de vect ont été swapper avec les valeurs de vect2
    }
    cout << "######" << endl;

    // rotate //

    std::vector<int> vect3;
    for (int i=1; i<10; ++i) vect3.push_back(i);
    // 1 2 3 4 5
    rotate(vect3.begin(),vect3.begin()+3,vect3.end());
    for (auto i : vect3){
        cout << i << endl; // les valeurs de vect ont été swapper avec les valeurs de vect2
    }

    // set  //

    set <int> S;
    S.insert(9); S.insert(10);S.insert(10);
    S.insert(1);S.insert(2);S.insert(14);
    S.insert(-1);
    for ( set<int>::iterator it = S.begin();it!=S.end(); ++it){
        cout<<*it<<endl;}



    return 0;

}
