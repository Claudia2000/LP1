#include <iostream>
using namespace std;
 
int main ( ){
unsigned long long x=1;
int i=1;

while (i<=63){

	cout<<x<<" arroces a los "<<i<<" cuadrados"<<endl;
	
	if(x==1024)cout<<"llego a 1000 a los "<<i<<" cuadrados"<<endl;
	if(x==1048576)cout<<"llego a 1000000 a los "<<i<<" cuadrados"<<endl;
	if(x==1073741824)cout<<"llego a 1000000000 a los "<<i<<" cuadrados"<<endl;
	
	x=x*2;
	i++;
}
return 0;
}
