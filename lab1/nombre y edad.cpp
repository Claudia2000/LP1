// Este programa lee y escribe tu primer nombre
#include <iostream> 
#include <string>
using namespace std ;
int main ( )
{
cout << "Por favor ingrese su nombre y edad ( luego presione enter ) :" "\n";
string first_name ;
int edad;
// first_name es una variable de tipo string
cin >> first_name ;
cin >> edad;
// lee los caracteres y los guarda en first_name
cout << "Hola , " << first_name << " de "<< edad <<" años "<< "! \n" ;
return 0 ;
}
