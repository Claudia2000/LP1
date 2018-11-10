#include <iostream>
#include <random>
#include <vector>
#include <string>
using namespace std;

int randint(int min, int max)
{
    random_device rd;
    uniform_int_distribution<int>dist(min, max);
    return dist(rd);
}

int main()
{
    vector<int>nums;
    int num;
    int n=0;
    int o=0;
    int a; 
    int b; 
    int c; 
    int d; 
    int toros=0; 
    int vacas=0;
    
    while(n<4){
        num=randint(0,9);
        for(int i=0; i<nums.size();i++){
            if(num==nums[i]){
                o=1;
            }
        }
        if(o!=1){
            nums.push_back(num);
            n++;
        }
        o=0;
    }   
    
    n=0;
    while(toros!=4){
        cout<<"Ingrese los numeros"<<endl;
        cin>>a>>b>>c>>d;
        toros=0;
        vacas=0;
        if(a==nums[0]){
        toros++;
        }
        if(a==nums[1]||a==nums[2]||a==nums[3]){
        vacas++;
        }
        if(b==nums[1]){
        toros++;
        }
        if(b==nums[0]||b==nums[2]||b==nums[3]){
        vacas++;
        }
        if(c==nums[2]){
        toros++;
        }
        if(c==nums[0]||c==nums[1]||c==nums[3]){
        vacas++;
        }
        if(d==nums[3]){
        toros++;
        }
        if(d==nums[0]||d==nums[1]||d==nums[2]){
        vacas++;
        }
        cout<<toros<<" Toros"<<endl<<vacas<<" Vacas"<<endl;
    }
    toros=0;
    cout<<"Won!"<<endl;
    }
