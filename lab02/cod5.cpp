#include <iostream>
using namespace std;
// Convertir de pulgadas ( in ) a cm y viceversa
// sufijos ’ i ’ o ’ c ’ indican la unidad
// cualquier otro es error
int main ( )
{
const double cm_per_inch = 2.54 ; // numero de cm en un in
int length = 1 ; // longitud
char unit = ' ' ; // espacio ( no es unidad )
cout<< "Por favor ingrese una longitud seguida de su unidad ( c o i ) : \n" ;
cin >> length >> unit ;

if ( unit == 'i' )
 cout << length << " in == " << cm_per_inch * length << "cm\n" ;

else if ( unit == 'c'   )
cout << length << "cm == "
<< length / cm_per_inch << " i n \n " ;

else
cout << "Lo siento , no conosco una unidad llamada" << unit <<endl;
return 0;

}
