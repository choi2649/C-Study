#include <iostream>

using namespace std;

class Second
{
public:
	Second() {
		cout << "Second" << endl;
	}
};

class First
{
	//멤버클래스가 먼저생성된다.
	Second sec;

public:
	First() {
		cout << "First" << endl;
	}
};
class Fraction
{
private:
	//분자
	int m_numerator;
	//분모
	int m_denominator;

public:
	//기본생성자
	Fraction()
	{
		m_numerator = 0;
		m_denominator = 1;
	}
	Fraction(const int& n, const int& d)
	{
		m_numerator = n;
		m_denominator = d;
	}
	void print()
	{
		cout << m_numerator << " / " << m_denominator << endl;
	}

};

int main()
{
	Fraction frac(1.0,3);
	frac.print();
	//기본생성자는 ()가 없다.
	Fraction frac2;
	frac2.print();

	//frac와 다르게 1.0으로 초기화되지않는다.
	Fraction frac3 = Fraction{ 1,2 };
	frac3.print();

	//class안에 class생성순서확인
	First f;
	return 0;
}