//crono.h
#include<iostream>
using namespace std;

namespace Chrono{
class Date{
	public:
		enum Month{
			jan=1, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec
		};
		class Invalid{};
		
		Date(int y, Month m, int d);
		Date();
		
		int day() const {return d;}
		Month month() const {return m;}
		int year() const {return y;}
	private:
		int y;
		Month m;
		int d;
};

bool is_date(int y, Date::Month m, int d);
bool leapyear(int y);
bool operator==(const Date& a, const Date& b);
bool operator!=(const Date& a, const Date& b);

ostream& operator<<(ostream& os, const Date& d);
istream& operator>>(istream& is, Date& dd);
}
