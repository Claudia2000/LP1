#include<vector>
#include<algorithm>
#include <iostream>
using namespace std;

int main(){
  double numeros[2]={};
  cout<<"Ingrese un numero "<<endl;
  cin>>numeros[0];
  cout<<"Ingrese otro numero "<<endl;
  cin>>numeros[1];
  double diferencia= numeros[0]-numeros[1];
  
    if (numeros[0]<numeros[1]){
      if (diferencia<0.01){
        cout<<"Los numeros son casi iguales"<<endl;
      }
      else{
      cout<<"El menor valor es "<<numeros[0]<<endl;
      cout<<"El mayor valor es "<<numeros[1]<<endl;
      }
    }
    else if (numeros[1]<numeros[0]){
      if (diferencia<0.01){
        cout<<"Los numeros son casi iguales"<<endl;
      }
      else{
      cout<<"El menor valor es "<<numeros[1]<<endl;
      cout<<"El mayor valor es "<<numeros[0]<<endl;
      }
    }
    else if (numeros[1]==numeros[0]){
      cout<<"Los valores son identicos";
    }

}
