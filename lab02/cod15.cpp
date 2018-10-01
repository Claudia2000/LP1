#include<vector>
#include<algorithm>
#include <iostream>
using namespace std;
int main ( )
{
vector <double> temps ; // temperaturas
double temp ;
while ( cin >>temp ) // lee
temps.push_back ( temp ) ; 
double sum = 0 ;
for ( int i=0 ; i < temps.size ( ) ; ++i )
sum += temps [ i ] ;
cout << "Temperatura promedio : "
<< sum/temps.size ( ) << endl ;
// Calcular temperatura mediana :
sort ( temps.begin ( ) , temps.end ( ) ) ; // ordenar temps
// ” de inicio a fin . ”
cout << "Median temperature : "
<< temps[temps.size ( )/2] << endl ;
}
