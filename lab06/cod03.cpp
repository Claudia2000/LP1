//Clase publica por defecto
#include<iostream>

struct Date{
	int y;
	int m;
	int d;
};

void init_day(Date& dd, int y, int m, int d)
{
}
void add_day(Date& dd, int n)
{
}
int main()
{
	Date hoy;
	init_day(hoy, 12, 24, 2005);
	add_day(today, 1);
	return 0;
}

int main()
{
	Date today;
	today.y=2005;
	today.m=24;
	today.d=12;
	Date x;
	x.y=-3;
	x.m=13;
	x.d=32;
	Date y;
	y.y=2000;
	y.m=2;
	y.d=29;
	init_day(y, 200, 1, 1);
	add_day(y, 28);
	return 0;
}