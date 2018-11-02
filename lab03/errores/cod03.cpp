#include<iostream>
using namespace std;

double area(double length,double width) ;
int main()
{
double x4=area(10,7); // ok : p e r o r e c t a n g u l o
// con ancho -7?
double x5=area(10.7,9.3) ; // ok : p e r o l l am a a
// a r e a ( 1 0 , 9 )
double x6=area(100,9999); // ok , p e r o t r u n c a
// e l r e s u l t a d o

cout<< x4<<endl;
cout<< x5<<endl;
cout<< x6<<endl;
return area(4,4) ;
}
double area(double length,double width)
{
return length*width;
}
