//Operador sizeof
#include<iostream>
using namespace std;

int main()
{
	cout<<"El tam de char es"<<sizeof(char)<<' '<<sizeof('a')<<endl;
	cout <<"el tam de int es "<<sizeof(int)<<' '<<sizeof(2+2)<<endl;
	int* p=0;
	cout<<"el tam de int* es"<<sizeof(int*)<<' '<<sizeof(p)<<endl;
	vector<int>v(1000);
	cout<<"el tam de vector<int>(1000) es "<<sizeof(vector<int>)<<' '<<sizeof(v)<<endl;
}
