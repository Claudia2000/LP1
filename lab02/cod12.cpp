#include <iostream>
using namespace std;

int square ( int ) ; // d e c l a r a c i o n de s q u a r e
double sqrt ( double ) ; // d e c l a r a t i o n de s q r t
int main ( )
{
int x = square ( 44 ) ;
cout<<x;
}
//------------------------------------------------------------------------------
int square ( int x ) // d e f i n i c i o n d e s q u a r e
{
return x*x ;
}
