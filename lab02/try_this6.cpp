#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;

int main(){
vector<string>malasp;
malasp.push_back("joder");
malasp.push_back("maldicion");
malasp.push_back("estupido");
malasp.push_back("baboso");

vector<string>palabras;
string palabra;

cout<<"Ingrese palabras"<<endl;
while (palabra!="+"){
    cin>>palabra;
    palabras.push_back(palabra);
  }

for(int i=0; i<palabras.size();i++){
    for(int x=0; x<malasp.size(); x++){
      if(palabras[i]==malasp[x]){
        palabras[i]="piiii";
      }
    }
    
  }
  for(int z=0; z<palabras.size(); z++){
    cout<<palabras[z]<<" ";

}
return 0;
}


