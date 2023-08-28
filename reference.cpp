#include <iostream>
using namespace std;

/* 
Ce programme montre la différence entre une fonction utilisant un pointeur ( methode c) et une reference (methode c++)
*/
void fonctionMaxReference(int &p1,int &p2){
	if (p1<p2){
	cout <<"parametres déjà classé" << endl;
	}
	else{
	int maxi = max(p1,p2);
	cout <<"parametres non classé" << endl;
	cout << "Le nombre maximum est " << maxi << endl;
	cout <<"Classement des paramètres :" << endl;
	p1=p2;
	p2=maxi;
	}

}

void fonctionMaxPointer(int *p1,int *p2){
	if (*p1<*p2){
	cout <<"parametres déjà classé" << endl;
	}
	else{
	int maxi = max(*p1,*p2);
	cout <<"parametres non classé" << endl;
	cout << "Le nombre maximum est " << maxi << endl;
	cout <<"Classement des paramètres :" << endl;
	*p1=*p2;
	*p2=maxi;
	}

}
int main() {
	int num1=3;
	int num2=2;
	cout <<"parametres initiale :" << endl;
	cout <<"numéro 1 : "<< num1 << endl; 
	cout <<"numéro 2 : "<< num2 << endl; 
	//fonctionMaxPointer(&num1,&num2);
	fonctionMaxReference(num1,num2);
	cout <<"numéro 1 : "<< num1 << endl; 
	cout <<"numéro 2 : "<< num2 << endl; 
}
