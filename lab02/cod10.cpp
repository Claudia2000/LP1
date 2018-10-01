#include <iostream>
using namespace std;

// C a l c u l a e im p rime l a t a b l a de c u a d r a d o s de 0 a 99
// r e t o r n a e l c ua d ra d o de x
int square ( int x )
{
return x*x ;
}
int main ( )
{
	for ( int i = 0 ; i <100; ++i ) {
		// pa ra i en e l ra n g o de [ 0 : 1 0 0 )
		cout << i << "-" << square ( i ) << "\n" ;
		//++i ; // h u e l e a e r r o r !
}
}
