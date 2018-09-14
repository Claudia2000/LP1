#include<iostream>
using namespace std;

int main(){
	int numero;
	int cien=0;
	int cinta=0;
	int veinte=0;
	int diez=0;
	int cinco=0;
	int dos=0;
	int uno=0;
	cout<< "Ingrese el monto, asegurese de que sea mayor que 0 y menor que 1000000"<<endl;
	cin>> numero;
	
	while (numero>=100){
		numero=numero-100;
		cien=cien+1;
	}
	
	while (numero>=50){
		numero=numero-50;
		cinta=cinta+1;
	}
	
	while (numero>=20){
		numero=numero-20;
		veinte=veinte+1;
	}
	
	while (numero>=10){
		numero=numero-10;
		diez=diez+1;
	}
	
	while (numero>=5){
		numero=numero-5;
		cinco=cinco+1;
	}
	
	while (numero>=2){
		numero=numero-2;
		dos=dos+1;
	}
	
	while (numero>=1){
		numero=numero-1;
		uno=uno+1;
	}
	
	cout<<cien<< " billete(s) de 100$"<<endl;
	cout<<cinta<< " billete(s) de 50$"<<endl;
	cout<<veinte<< " billete(s) de 20$"<<endl;
	cout<<diez<< " billete(s) de 10$"<<endl;
	cout<<cinco<< " billete(s) de 5$"<<endl;
	cout<<dos<< " billete(s) de 2$"<<endl;
	cout<<uno<< " billete(s) de 1$"<<endl;
	
	return 0;
}
