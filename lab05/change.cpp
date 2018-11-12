#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int change()
{
	vector<int>num;
	vector<int>num2;
	num.push_back(1);
	num.push_back(5);
	num.push_back(3);
	num.push_back(4);
	int aux;
	int ind=0;
	int aux1=3;
	for(int i=0;i<4;i++)
  {
		aux=num[ind];
		num2.push_back(num[aux1]);
		ind++;
		aux1--;
	}
  cout<<num2[0]<<num2[1]<<num2[2]<<num2[3];
}

int main(){
  change();
}
