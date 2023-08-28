#include <iostream>
#include "paraDefault.h"
using namespace std;

/* Dans paraDefault.h :
void mafonction( int a, int b, int increment=1);
*/

void mafonction ( int a, int b,int increment){
	if (a<b){
	for (a;a<b+1;a+=increment){
		cout <<"incrémente : "<< a << endl; //affichage
	}
	}
	else{
	for (b;b<a+1;b+=increment){
		cout <<"incrémente : "<< b << endl; //affichage
	}
	}
	
}

int main() {
	mafonction(2,5);
}

