#include<iostream>
#include<vector>
using namespace std;

typedef int T;
typedef double V;

T f()
{
	V v;
	return v;
}

double my_abs(int x)
{
	if (x<0)
		return -x;
	else if(x>0)
		return x;
}

int main(){
	void print_until();
}

void print_until(const vector<string>v,const string quit)
{
	for(int i=0; i<v.size(); ++i){
		if(v[i]==quit) return;
		cout<<v[i]<<endl;
	}
}
