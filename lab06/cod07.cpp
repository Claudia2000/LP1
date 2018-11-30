//Sobrecarga de operadores
#include<iostream>
using namespace std;
enum Month{
	jan=1, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dcm
};
Month operador++(Month& m)
{
	m=(m==dcm)? jan: Month(m+1);
	return m;
}
ostream& operador<<(ostream& os, Month m)
{
	static const char*month_tbl[12]={
	"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"
	};
	return os<<month_tlb[m-1]
}
class Vector {};

Vector operador+(const Vector&, const Vector&);
Vector operador+=(const Vector&, int)

int main()
{
	Month m=sep;
	++m;
	++m;
	++m;
	++m;
	cout<<m<<endl;
	return 0;
}

