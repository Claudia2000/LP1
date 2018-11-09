#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
	vector<string>nombres;
    string nombre;
    while(cin>>nombre>>n){
        if(nombre!="SinNombre" && n!=0){
            if(nombres.size()==0){
                nombres.push_back(nombre);
            }
            else{
                for(int i=0; i<nombres.size();i++){
                    if(nombre==nombres[i]){
                        cout<<"Error"<<endl;
                    }
                }
                nombres.push_back(nombre);
            }
        }
        else{
            return 0;
        }
    }
}
