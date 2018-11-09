#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<string>general;
    general.push_back("lili");
    general.push_back("lili");
    general.push_back("lila");
    general.push_back("loli");
    general.push_back("lala");
    general.push_back("lili");
    string moda;
    int a=0;
    int mayor=0;
    for(int i=0; i<general.size();i++){
        for(int j=i; j<general.size(); j++){
            if(general[i]==general[j]){
                a++;
            }
        }
        if(a>mayor){
            moda=general[i];
            mayor=a;
        }
        a=0;
    }
    cout <<"Moda: "<< moda << endl;
    return 0;
}
