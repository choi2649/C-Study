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
private:	//access specifier(접근지정자)
	int m_month;
	int m_day;
	int m_year;
//access functions 생성
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
		//original안에 변수들은 private이다.
		//같은 클래스 변수접근
		m_month = original.m_month;
		m_day = original.m_day;
		m_year = original.m_year;
	}
};

int main()
{
	//struct는 바로접근이 가능하다.
	sDate toDay{ 8,4,2025 };
	toDay.m_month = 8;
	toDay.m_day = 4;
	toDay.m_year = 2025;

	//클래스는 바로 접근할 수 없다.
	//접근하려면 public 접근지정자를 선언해주어야한다.
	cDate cToDay;
	cToDay.setDate(8, 4, 2025);
	cToDay.getMonth();

	cDate copy;
	copy.copyFrom(cToDay);

	return 0;
}