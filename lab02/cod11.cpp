#include <iostream>
using namespace std;

int square ( int x ) // retorna el cuadrado de x
{
	return x*x ;
}
//------------------------------------------------------------------------------
void write_sorry ( ) //no requiere argumentos , no retorna nada
{
cout << "Sorry \n"  ;
}
//------------------------------------------------------------------------------
int main ( )
{
cout << square ( 2 ) << '\n' ; // imprime 4
cout << square ( 10 ) << '\n' ; // imprime 100

square ( 2 ) ; 

write_sorry ( ) ;
return 0;
}
