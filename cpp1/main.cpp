#include <iostream>
#include "lambdaclass.h"
#include <tuple>
#include <string>
#include <vector>
#include <list>
#include <map>
using namespace std;

tuple<int,double,string> tupleFonc(int a, double b, string c){
    return make_tuple(a, b, c);
}
int main()
{
    // Fonction lambda //
    // par copie
    int x = 5;
    int y = 7;
    auto addition1 = [=](int a, int b) {
        a+=1;
        return a + b;
    };
    cout << x << endl;
    int resultat1 = addition1(x, y);
    cout << x << endl;
    cout << resultat1 << endl;

    // par addresse //
    auto addition2 = [&](int &a, int &b) {
        a+=1;
        return a + b;
    };
    int resultat2 = addition2(x, y);
    cout << resultat2 << endl;
    cout << x << endl; // le x est modifier dans ce cas

    // Lambda avec class //
    lambdaclass obj;
    auto lambda1 = [obj]() {

        std::cout << "Membre de la classe : a : " << obj.a << std::endl;
    };
    lambda1();

    //boucles basées sur intervalles //
    int a[] = {0, 1, 2, 3, 4, 5};
    for (int n : a)
    std::cout << n << ' ';

    // Tuple //

    auto montuple=tupleFonc(1,3,"coucou");
    cout << "premier element : " << get<0>(montuple) << endl;
    cout << "deuxieme element : " << get<1>(montuple) << endl;
    cout << "troisieme element : " << get<2>(montuple) << endl;

    // Vecteur //

    vector<int> h(5,10);
    h.push_back(4);
    h.push_back(0);
    int nb=h.size();
    int size=h.capacity();
    cout << "nb : " << nb << endl;
    cout << "size : " << size << endl;

    //  Iterator //

    using namespace std;

    vector<int> myvector;
    for (int i=1; i<=5; i++){
        myvector.push_back(i);}
    //  facon 1
    //1.1
    for (auto o : myvector)
    {
        cout << o << endl;
    };
    //1.2
    for (auto &o : myvector) // Avec le &, ca permet de modifier les valeurs car c'est une reference
    {
        cout << o << endl;
    };
    //  facon 2
    //2.1
    for (auto it = myvector.begin() ;it != myvector.end();++it){//ici auto  remplace vector<int>::iterator
        cout << ' ' << *it;};
    //2.2
    for (auto it = myvector.begin() ;it >= myvector.end()-1;--it){//ici auto  remplace vector<int>::iterator
        cout << ' ' << *it;};
    //reverse
    for (auto it = myvector.rbegin() ;it != myvector.rend();++it){//ici auto  remplace vector<int>::reverseiterator
        cout << ' ' << *it;};


    // list //

    list <string> liste;
    liste.push_back("Gilles");
    liste.push_front("Albert");
    liste.push_back("Zoé");
    liste.sort();
    liste.reverse();
    // 1.1
    for ( list<string>::iterator it= liste.begin();it != liste.end();it++){
    cout <<*it<<endl;}

    //1.2
    for ( list<string>::iterator it= liste.begin();it != liste.end();it++){
    cout <<*it<<endl;}

    //1.3
    for ( auto it : liste){
    cout <<it<<endl;}

    //map //

    map<std::string,int> Age;
    Age["Pierre"] = 37;
    Age["Marie"] = 65;
    Age["Jennifer"] = 24;
    //1.1
    for (map<string,int>::iterator it=Age.begin();
    it!=Age.end(); ++it)
    cout << it->first <<" => "<< it->second<< endl;
    //1.2
    for (auto i : Age) // Avec le &, ca permet de modifier les valeurs car c'est une reference
    {
        cout << i.first << i.second << endl;}


    return 0;
    }



