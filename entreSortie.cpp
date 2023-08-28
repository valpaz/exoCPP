#include <iostream>
/* Ici si on enleve using namespace, il faut ajouter std:: devant cin cout et endl */
using namespace std;
int main() {
int expression;
for (int i =0; i<5;i++){
	cin>>expression;// saisie d'une entrée
	cout <<"numéro : "<< expression << endl; //affichage
}
return (0);
}
