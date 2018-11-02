#include<iostream>
using namespace std;

int area (int length , int width);
int main ()
{
int s1=area(7,2); // error : falta )
int s2=area(7,2); // error :falta ;
int s3=area(7,2); // error : Int no es un tipo
int s4=area(7,2); // error : caracter ( falta ’ )
cout<<s1<<endl;
cout<<s2<<endl;
cout<<s3<<endl;
cout<<s4<<endl;
cout<<area(4,4);

}
int area (int length , int width)
{
int a=length*width;
return a;
}
