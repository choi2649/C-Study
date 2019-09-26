#include <iostream>
#include <cassert>

using namespace std;
class Fraction {
private:
	int m_num;
	int m_den;

public:
	Fraction(int num, int den) 
		:m_num(num), m_den(den) 
	{
		assert(den != 0);
	}

	Fraction(const Fraction &frc)
		:m_num(frc.m_num), m_den(frc.m_den) {
		cout << "copy constructor called" << endl;
	}

	friend std::ostream & operator << (std::ostream & out, const Fraction & f) {
		out << f.m_num << " / " << f.m_den << endl;
		return out;
	}
};

Fraction doSomething()
{
	Fraction temp(1, 2);
	return temp;
}

int main()
{
	Fraction frac(3, 5);

	Fraction cpFrac(frac);

	cout << cpFrac << endl;
	return 0;
}