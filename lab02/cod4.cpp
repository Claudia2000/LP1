#include <iostream>
using namespace std;

int main ( )
{
int a = 0 ;
int b = 0 ;
cout << "Por favor ingrese dos enteros \n" ;
cin >> a >> b ;
if ( a<b ) // condicion
// Si la condicion es verdadera :
cout << "max ( " << a << " , " << b <<" ) is "
<< b <<"\n";
else
// Si la condicion es falsa :
cout << "max ( " <<a << " , " << b << " ) is"       
<< a << "\n";
return 0;
}

