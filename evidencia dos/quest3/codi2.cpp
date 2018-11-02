#include<vector>
#include<algorithm>
#include <iostream>
using namespace std;

int main(){
	
	vector<double>distances;
	double distance;
	while (cin>>distance && distance>-1)
	distances.push_back(distance);
	double sum=0;
	
	for ( int i=0 ; i < distances.size ( ) ; ++i )
	
	sum += distances [ i ] ;
	cout << "La distancia total es : "<< sum << endl;
	
	(sort (distances.begin(),distances.end()));
	cout<<"La menor distancia es "<<distances[0]<<endl;
	cout<<"La mayor distancia es "<<distances[distances.size()-1]<<endl;

	
	double m;
	double n;
	cout<<"Ingrese las ciudades"<<endl;
	cin>>m>>n;
	double a= (n-m)+1;
	double b=0;
	double c;
	
	
	while (b<=a){
		c+=distances[b];
		b=b+1;	
	}
	cout<<c/a;
}
