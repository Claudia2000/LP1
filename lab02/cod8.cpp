#include <iostream>
using namespace std;
// Calcula e imprime la tabla de cuadrados de 0 a 99
// retorna el cuadrado de x
int square ( int x )
{
	return x*x ;
}
int main ( )
{
	int i =0; // em pieza en c e r o
	while ( i <100) {
		cout << i << "-"  << square ( i ) << '\n' ;
		++i ; // i n c r em e n t o
}
}
