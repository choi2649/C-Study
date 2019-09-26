#include <iostream>

using namespace std;

class A
{
private:
	int m_i;

public:
	A(const int &a) :m_i(a) {
		cout << "A Constructor" << endl;
	}

	~A() {
		cout << "A Destructor" << endl;
	}

};

class B : public A
{
public:
	double m_d;
	B(const int & i, const double &b)
		: A(i), m_d(b) {
		cout << "B Constructor" << endl;
	}
	~B() {
		cout << "B Destructor" << endl;
	}
};

class C : public B
{
public:
	char m_c;
	C(const int & i, const double &b,const char & c)
		: B(i,b), m_c(c) {
		cout << "C Constructor" << endl;
	}
	~C() {
		cout << "C Destructor" << endl;
	}
};


int main()
{

	cout << sizeof(A) << endl;
	cout << sizeof(B) << endl;
	cout << sizeof(C) << endl;

	C c(1, 1.3, 'a');

	return 0;
}