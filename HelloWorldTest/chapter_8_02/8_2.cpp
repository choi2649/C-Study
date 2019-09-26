#include <iostream>

using namespace std;


struct sDate
{
	int m_month;
	int m_day;
	int m_year;
};

class cDate
{
private:	//access specifier(����������)
	int m_month;
	int m_day;
	int m_year;
//access functions ����
public:
	void setDate(const int &m, const int &d, const int &y)
	{
		m_month = m;
		m_day = d;
		m_year = y;
	}

	const int& getMonth() {
		return m_month;
	}

	const int& getDay() {
		return m_day;
	}

	const int& getYear() {
		return m_year;
	}

	void copyFrom(const cDate& original) {
		//original�ȿ� �������� private�̴�.
		//���� Ŭ���� ��������
		m_month = original.m_month;
		m_day = original.m_day;
		m_year = original.m_year;
	}
};

int main()
{
	//struct�� �ٷ������� �����ϴ�.
	sDate toDay{ 8,4,2025 };
	toDay.m_month = 8;
	toDay.m_day = 4;
	toDay.m_year = 2025;

	//Ŭ������ �ٷ� ������ �� ����.
	//�����Ϸ��� public ���������ڸ� �������־���Ѵ�.
	cDate cToDay;
	cToDay.setDate(8, 4, 2025);
	cToDay.getMonth();

	cDate copy;
	copy.copyFrom(cToDay);

	return 0;
}