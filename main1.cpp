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
	/*Date(const Date& d)如果没有定义拷贝构造函数，系统就会调用默认的拷贝构造函数，按内存存储、字节序进行拷贝，也叫浅拷贝
	{
		_year = d._year;
		_month = d._month;
		_day = d._day;
	}*/
private:
	int _year;
	int _month;
	int _day;
};

void TestDate()
{
	Date d1;//调用无参构造函数
	Date d2(2015, 1, 1);//调用带参数的构造函数

	//注意：如果通过无参构造函数创建对象时，对象后面不用跟括号，否则就成了函数声明
	//一下代码的函数：声明了d3函数，该函数无参，返回一个日期类型的对象
	Date d3();
}

int main2()
{
	Date d1;
	Date d2(d1);
	return 0;
}