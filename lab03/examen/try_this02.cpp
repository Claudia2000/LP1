#include<iostream>
using namespace std;
int main()
{
for (int x=2;x<=100;x++){
 int j=0;
 for(int i=1;i<=100;i++)
 {
     if(x%i==0) 
     j++;
 }
 if (j==2){ 
 cout<<x<<endl;
 }
 }
}
