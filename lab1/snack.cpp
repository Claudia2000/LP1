#include<iostream>
#include <cstdio>
using namespace std;
int main (){
	
	double total;
	int cachorro_quente=1;
	int xsalada=2;
	int xbacon=3;
	int torrada=4;
	int refrigerante=5;
	int election;
	int cantidad;
	cin>>election;
	cin>>cantidad;
	
	if (election==1){
		total=4.00*cantidad;
		
	}
	
	if (election==2){
		total=4.50*cantidad;
		
	}
	
	if (election==3){
		total=5.00*cantidad;
		
	}
	
	if (election==4){
		total=2.00*cantidad;
		
	}
	
	if (election==5){
		total=1.50*cantidad;
		
	}
	printf("Total: R$ %.2f\n", total);
	return 0;
	
}
