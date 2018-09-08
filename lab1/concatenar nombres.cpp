// Este programa lee y compara nombres ”
#include <iostream> 
#include <string>
using namespace std ;
int main ( )
{
cout << "Ingresedos nombres \n" ;
string first ;
string second ;
cin >> first >> second ; // lee dos strings
string third = first + second;

cout << third << endl;
return 0;
}
