//Este programa encuentra palabras adyacentes repetidas
#include <iostream> 
#include <string>
using namespace std ;
int main ( )
{
string previous = " " ; // no es palabra
string current ;
cout<< "Escriba una frase para saber si hay palabras repetidas"<< endl;
while ( cin >>current ) { // lee un string
if ( previous == current ) // Revisa si la nueva
// palabra es igual a la anterior
cout << "Palabra repetida : " << current << '\n' ;
previous = current ;
}
}
