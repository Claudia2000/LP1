#include <iostream>
using namespace std;

int square ( int x )
{
return x*x ;
}
int main ( )
{
	for ( char i = 'a' ; i <='z'; ++i ) {
		// para i en el rango de [ 0 : 100 )
		cout << i << "-" << square ( i ) << "\n" ;
		//++i ; // huele a error !
}
}
