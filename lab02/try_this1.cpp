#include <iostream>
using namespace std;

int main ( )
{
const double yen = 0.0089 ;
const double euro= 1.18;
const double libra= 1.31;
double length = 1 ; // longitud

char unit = ' ' ; // espacio ( no es unidad )
cout<< "Por favor ingrese una longitud seguida de su unidad ( y, e, l o d ) : \n" ;
cin >> length >> unit ;

if ( unit == 'y' )
 cout << length << " yenes = " << yen * length << " dolares\n" ;

else if ( unit == 'e')
cout << length << "euros = "<< length * euro << " dolares\n " ;

else if ( unit == 'l')
cout << length << "libras = "<< length * libra << " dolares\n " ;

else if (unit== 'd'){
	 
	char unit2 = ' ' ;
	cout<<"Por favor ingrese la unidad a la que desea convertir (y, e o l) \n";
	cin>> unit2;	
	
	if ( unit2 == 'y' )
    cout << length << " dolares = " << yen / length << " yenes\n" ;

	else if ( unit2 == 'e')
	cout << length << "dolares = "<< euro/length << " euros\n " ;

	else if ( unit2 == 'l')
	cout << length << "dolares = "<< libra/length << " libras\n " ;
	
	else
	cout << "Lo siento , no conozco una unidad llamada" << unit <<endl;
}



else
cout << "Lo siento , no conozco una unidad llamada" << unit <<endl;
return 0;

}
