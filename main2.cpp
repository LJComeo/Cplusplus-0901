#include <iostream>
using namespace std;

class Time
{
public:
	Time()
	{
		cout << "Time()" << endl;
		_hour = 0;
		_minute = 0;
		_second = 0;
	}
private:
	int _hour;
	int _minute;
	int _second;
};

class Date
{
	//基本类型
	int _year;
	int _month;
	int _day;

	//自定义类型
	Time _t;
};
int main3()
{
	Date d;

	return 0;
}