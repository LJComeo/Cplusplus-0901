#include <iostream>
using namespace std;

class Date
{
public:
	Date* operator&()
	{
		return this;
	}
	const Date* operator&()const
	{
		return this;
	}
private:
	int _year;
	int _month;
	int _day;
};
int main()
{

	return 0;
}