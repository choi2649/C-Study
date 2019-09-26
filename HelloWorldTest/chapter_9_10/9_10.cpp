#include <iostream>
#include <cassert>

using namespace std;
class Fraction {
private:
	int m_num;
	int m_den;

public:
	Fraction(char) = delete;
	Fraction(char,char) = delete;

	Fraction(int num = 0, int den = 1)
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

void doSomething(Fraction frac) {
	cout << frac << endl;
}

int main()
{
	//Fraction('a','a');
	doSomething(7);
	
	return 0;
}