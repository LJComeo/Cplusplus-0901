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
	/*Date(const Date& d)���û�ж��忽�����캯����ϵͳ�ͻ����Ĭ�ϵĿ������캯�������ڴ�洢���ֽ�����п�����Ҳ��ǳ����
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
	Date d1;//�����޲ι��캯��
	Date d2(2015, 1, 1);//���ô������Ĺ��캯��

	//ע�⣺���ͨ���޲ι��캯����������ʱ��������治�ø����ţ�����ͳ��˺�������
	//һ�´���ĺ�����������d3�������ú����޲Σ�����һ���������͵Ķ���
	Date d3();
}

int main2()
{
	Date d1;
	Date d2(d1);
	return 0;
}