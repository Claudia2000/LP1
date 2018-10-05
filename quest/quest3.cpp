#include<vector>
#include<algorithm>
#include <iostream>
using namespace std;

int main(){
  int numeros[2]={};
  cout<<"Ingrese un numero entero"<<endl;
  cin>>numeros[0];
  cout<<"Ingrese otro numero entero"<<endl;
  cin>>numeros[1];
  
    if (numeros[0]<numeros[1]){
      cout<<"El menor valor es "<<numeros[0]<<endl;
      cout<<"El mayor valor es "<<numeros[1]<<endl;
    }
    else if (numeros[1]<numeros[0]){
      cout<<"El menor valor es "<<numeros[1]<<endl;
      cout<<"El mayor valor es "<<numeros[0]<<endl;
    }
    else{
      cout<<"Los valores son identicos";
    }
   

}
