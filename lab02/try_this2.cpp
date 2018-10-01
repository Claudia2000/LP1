#include <iostream>
using namespace std;

int main ( )
{
const double yen = 0.0089 ;
const double euro= 1.18;
const double libra= 1.31;
const double yuan=0.52;
double length = 1 ; // longitud
char unit = ' ' ; // espacio ( no es unidad )
cout<< "Por favor ingrese una longitud seguida de su unidad ( s, u, y, e, l o d ) : \n" ;
cin >> length >> unit ;

switch (unit)
{
  case 's':
  	cout << length << " sequel = " << length/ yuan << " yuanes\n" ;
    break;
  case 'u':
  	cout << length << " yuanes = " << yuan * length << " sequels\n" ;
    break;
  case 'y':
    cout << length << " yenes = " << yen * length << " dolares\n" ;
    break;
  case 'e':
    cout << length << "euros = "<< length * euro << " dolares\n " ;
    break;
  case 'l':
    cout << length << "libras = "<< length * libra << " dolares\n " ;
    break;
  case 'd':
    char unit2 = ' ' ;
    cout<<"Por favor ingrese la unidad a la que desea convertir (ye, e o l) \n";
    cin>> unit2;
    switch (unit2)
    {
      case 'y':
        cout << length << " dolares = " << yen / length << " yenes\n" ;
        break;
      case 'e':
        cout << length << "dolares = "<< euro/length << " euros\n " ;
        break;
      case 'l':
        cout << length << "dolares = "<< libra/length << " libras\n " ;
        break;
      default:
        cout << "Lo siento , no conozco una unidad llamada" << unit <<endl;
        break;
    }


}
return 0;
}

