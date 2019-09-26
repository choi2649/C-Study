#include <iostream>

using namespace std;

class Base {
protected:
	int m_i;

public:
	Base(int a)
		: m_i(a)
	{

	}

	void Print() {
		cout << "I'm  Base" << endl;
	}

	friend std::ostream & operator << (std::ostream & out, const Base &b) {
		out << "Base opertator";
		return out;
	}
};

class Derived : public Base {
public:
	double m_d;
	using Base::m_i;
	Derived(int a)
		:Base(a) {

	}

	friend std::ostream & operator << (std::ostream & out, const Derived &b) {
		out << static_cast<Base>(b) << endl;
		out << "Derived opertator";
		return out;
	}

private:
	using Base::Print;
	void Print() {

	}
};

int main()
{
	Base b(5);
	Derived d(2);
	d.m_i = 3;
	b.Print();
	//d.Print();
	cout << b << endl;
	cout << d << endl;
	return 0;
}