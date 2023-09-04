#include <iostream>
#include <memory>
using namespace std;

void print( unique_ptr<int> q){
cout<<*q<<endl ;
// ici destruction du pointeur unique
}

int main()
{
    std::unique_ptr<int> p1 ( new int(4)) ;
    std::unique_ptr<int> p2 ( new int (2));
    std::unique_ptr<int> p4= move(p2);
    // Utilisation du pointeur unique en récupérant son pointeur nu via la
    // méthode get()
    std::cout<<*(p1.get())<<std::endl ;
    // Transfert du pointeur unique vers la méthode print qui attend en
    // argument un pointeur unique
    print(move(p1));

    p1.reset(new int (3));
    print(move(p1));
    cout << "Hello World!" << endl;
    return 0;
}
