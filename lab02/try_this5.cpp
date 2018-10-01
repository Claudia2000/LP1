#include <iostream>
using namespace std;

int square (int x){
	
	int suma;
	for (int i=1; i<=x; i++)
	{
		suma+=x;
	}
	return suma;
}

void write_sorry()
{
	cout<<"Sorry\n";
}

int main()
{
	cout<<square(2)<<'\n';
	cout<<square(10)<<'\n';
	
	square(20);
	
	write_sorry();
}
