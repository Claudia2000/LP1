#include<iostream>
#include<string>
using namespace std;

int main(){
	double x;
	double y;
	int a =0;
	while(a==0){
		char opera;
		cout<<"Ingrese el primer numero";
		cin>>x;
		cout<<"Ingrese el segundo numero";
		cin>>y;
		cout<<"¿Desea trabajar con +, -, * o /?"<<endl;
		cin>>opera;
		switch (opera){
			case '+':
				cout<<x+y<<endl;
				break;
			case '-':
				cout<<x-y<<endl;
				break;
			case '*':
				cout<<x*y<<endl;
				break;
			case '/':
				cout<<x/y<<endl;
				break;
			default:
				cout<<"Invalido"<<endl;
				break;
		}
	}
return 0;
}
