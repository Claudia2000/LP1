#include<iostream>
#include<vector>
#include<algorithm>
#include<time.h>
using namespace std;

int main(){
	
	for (int y=0; y<=2; y++){
	char a='maquina';
	char b='jugador';
	int c=0;
	int d=0;
	int x;
	int jugada;
	cout<<"Ingrese 0 si es piedra, 1 si es papel o 2 si es tijera"<<endl;
	cin>>jugada;
	
	srand(time(NULL));
	x= 0+ rand() % ((2+1)-0);
	printf ("%i", x);
	cout<<'\n';
	
	if (jugada==("%i", x)){
		cout<<"Empate"<<endl;
		if (jugada==0)
			cout<<"Ambos eligieron piedra"<<endl<<endl;
		else if (jugada==1)
			cout<<"Ambos eligieron papel"<<endl<<endl;
		else
			cout<<"Ambos eligieron tijera"<<endl<<endl;
	}
	else
		if (("%i", x)==0&& jugada==1)
			cout<<"Papel vs piedra, gana el jugador"<<endl<<endl;
			
		else if (("%i", x)==0&& jugada==2)
			cout<<"Tijera vs piedra, gana la maquina"<<endl<<endl;
			
		else if (("%i", x)==1&& jugada==0)
			cout<<"Piedra vs papel, gana la maquina"<<endl<<endl;
			
		else if (("%i", x)==1&& jugada==2)
			cout<<"Tijera vs papel, gana el jugador"<<endl<<endl;
			
		else if (("%i", x)==2&& jugada==0)
			cout<<"Piedra vs tijera, gana el jugador"<<endl<<endl;
			
		else
			cout<<"Papel vs tijera, gana la maquina"<<endl<<endl;
	}
	
	return 0;
} 
