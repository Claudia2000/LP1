#include<iostream>
using namespace std;

int area ( int length,int width ) ;
int main ( )
{
int x0 =area(7,1) ; 
int x1= area(7,3) ; 
int x2=area (7,2) ; 

cout<< x0<<endl;
cout<< x1<<endl;
cout<< x2<<endl;
return area ( 4 , 4 ) ;
}
int area ( int length,int width )
{
int a=length*width ;
return a;
}
