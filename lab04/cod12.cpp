#include<iostream>
#include<vector>
using namespace std;

void init(vector<double>& v)
{
	for (int i=0; i<v.size();++i) v[i]=i;
}
void g(int x){
	vector<double>vd1(10);
	vector<double>vd2(1000000);
	vector<double>vd3(x);
	
	init(vd1);
	init(vd2);
	init(vd3);
}
int main(){
	g(10);
}

int g(int& x);
int f(int& x);
void h(int x,int y)
{
	int i=7;
	int& r=i;
	r=9;
	i=10;
	cout<<r<<' '<<i<<endl;
	vector<vector<double> >v;
	double val=v[f(x)][g(y)];
	double& var=v[f(x)][g(y)];
	var= var/2 +sqrt(var);
	
}
