#include <iostream>
using namespace std;

int main(){
	int numero;
	cout<< "Ingrese un numero para saber si es o no par"<<endl;
	cin>>numero;
	
	if (numero%2==0)
	cout<< "El numero es par";
	else
	cout<< "El numero no es par";
	
	return 0;
	
}
