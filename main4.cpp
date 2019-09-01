#include <iostream>
using namespace std;


class Date
{
public:
	void Display()
	{
		cout << "Display()" << endl;
		cout << "year:" << _year << endl;
		cout << "month:" << _month << endl;
		cout << "day:" << _day << endl;
	}
	void Display() const
	{
		cout << "Display()" << endl;
		cout << "year:" << _year << endl;
		cout << "month:" << _month << endl;
		cout << "day:" << _day << endl;
	}
private:
	int _year;
	int _month;
	int _day;
};
int main5()
{
	Date d1;
	d1.Display();

	const Date d2;
	d2.Display();
	return 0;
}