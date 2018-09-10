#include <iostream>
#include <string>
using namespace std;


int main(){
	
	double num;
	double num1;
	double resultado;
	string signo;
	cout<< "Ingrese el signo con el que desea trabajar... +, -, /, * "<<endl;
	cin>>signo;
	
	
	if (signo== "+"){
	
	cout<< "Ingrese el primer digito"<< endl;
	cin>> num;
	cout<< "Ingrese el segundo digito"<< endl;
	cin>> num1;
	resultado=num+num1;
	cout<< "La suma es "<< resultado<<endl;
}
	
	else if (signo== "-"){
	
	cout<< "Ingrese el primer digito"<< endl;
	cin>> num;
	cout<< "Ingrese el segundo digito"<< endl;
	cin>> num1;
	resultado=num-num1;
	cout<< "La diferencia es "<< resultado<<endl;
}
	
	else if (signo== "/"){
	
	cout<< "Ingrese el primer digito"<< endl;
	cin>> num;
	cout<< "Ingrese el segundo digito"<< endl;
	cin>> num1;
	resultado=num/num1;
	cout<< "La dvision es "<< resultado<<endl;
}
	
	else if (signo== "*"){
	
	cout<< "Ingrese el primer digito"<< endl;
	cin>> num;
	cout<< "Ingrese el segundo digito"<< endl;
	cin>> num1;
	resultado=num*num1;
	cout<< "La multiplicacion es "<< resultado<<endl;
}

		
	
	return 0;
}
	
