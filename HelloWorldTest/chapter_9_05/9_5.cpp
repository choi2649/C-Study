#include <iostream>
#include <vector>

using namespace std;

class Digit
{
private:
	int m_digit;
public:
	Digit(int digit) :m_digit(digit) {

	}

	//전위형 prefix
	Digit & operator ++() {
		++m_digit;
		cout << "prefix" << endl;
		return *this;
	}

	//후위형 post
	Digit operator ++(int) {
		cout << "post" << endl;
		Digit temp(m_digit);
		++(*this);
		return temp;
	}

	Digit & operator --() {
		--m_digit;
		return *this;
	}
	
	Digit operator --(int) {
		Digit temp(m_digit);
		--m_digit;

		return temp;
	}

	friend ostream& operator <<(ostream &out, Digit d) {
		out << d.m_digit;
		return out;
	}
};


int main()
{
	int a = 0;
	cout << ++a << endl;
	cout << a << endl;
	cout << a++ << endl;
	cout << a << endl;

	Digit d(3);
	cout << ++d << endl;
	cout << &d << endl;
	cout << &d++ << endl;
	cout << &d << endl;

	cout << --d << endl;
	cout << d << endl;
	cout << d-- << endl;
	cout << d << endl;
	return 0;
}