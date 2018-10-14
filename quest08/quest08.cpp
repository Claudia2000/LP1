#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
	vector<string>numeros;
	numeros.push_back("cero");
	numeros.push_back("uno");
	numeros.push_back("dos");
	numeros.push_back("tres");
	numeros.push_back("cuatro");
	numeros.push_back("cinco");
	numeros.push_back("seis");
	numeros.push_back("siete");
	numeros.push_back("ocho");
	numeros.push_back("nueve");
	
	int i=0;
	double a=0;
	double b=0;
	string x;
	string y;
	cout<<"Ingrese el primer numero: "<<endl;
	cin>>x;
	cout<<"Ingrese el segundo numero:"<<endl;
	cin>>y;
	while (i<10){
		if (numeros[i]==x){
			a=i;
			
		}
		i++;	
	}
	i=0;
	while (i<10){
		if (numeros[i]==y){
			b=i;
		}
		i++;	
	}
	
	char opera;
	cout<<"¿Desea trabajar con +, -, * o /?"<<endl;
	cin>>opera;
		switch (opera){
			case '+':
				cout<<a+b<<endl;
				break;
			case '-':
				cout<<a-b<<endl;
				break;
			case '*':
				cout<<a*b<<endl;
				break;
			case '/':
				cout<<a/b<<endl;
				break;
			default:
				cout<<"Invalido"<<endl;
				break;
		}
	
	}


