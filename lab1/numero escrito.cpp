#include <iostream>
#include <string>
using namespace std;

int main(){
	
	string numero;
	cout<<"Escriba verbalmente un numero entre cero y cuatro"<<endl;
	cin>> numero;
	string num0= "cero";
	string num1= "uno";
	string num2= "dos";
	string num3= "tres";
	string num4= "cuatro";
	
	
	
	if (numero==num0)
	cout<<"0";
	if (numero==num1)
	cout<<"1";
	if (numero==num2)
	cout<<"2";
	if (numero==num3)
	cout<<"3";
	if (numero==num4)
	cout<<"4";
	if (numero!=num0&&numero!=num1&&numero!=num2&&numero!=num3&&numero!=num4)
	cout<<"Valor invalido";
	
}
