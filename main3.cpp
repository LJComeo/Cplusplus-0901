#include <iostream>
using namespace std;

class Date
{
public:
	Date(int year = 1900, int month = 1, int day = 1)
	{
		_year = year;
		_month = month;
		_day = day;
	}
	Date(const Date& d)
	{
		_year = d._year;
		_month = d._month;
		_day = d._day;
	}
	Date& operator==(const Date&d)
	{
		if (this != &d)
		{
			_year == d._year;
			_month == d._month;
			_day == d._day;
		}
			
	}
private:
	int _year;
	int _month;
	int _day;
};

//bool operator==(const Date& d1, const Date & d2)
//{
//	return d1._year == d2._year
//		&& d1._month == d2._month
//		&& d1._day == d2._day;
//}

int main4()
{
	Date d;
	return 0;
}