#include <iostream>

//class�� �����ڿ��� �߻��ϴ� ���ܸ� ó���ϱ�
//�Լ� �ٵ� ��ü�� try catch�� ������ �� �ִ�.
using namespace std;

void doSomething() 
try
{
	throw - 1;
}
catch (...)
{
	cout << "Catch in doSomething()" << endl;
}


class A {
private:
	int m_i;

public:
	A(const int & a)
		:m_i(a) {
		if (a <= 0)
			throw - 1;
	}
};

class B : public A {
public:
	B(const int & a)try
		:A(a) {

	}
	catch (...) {//catch������Ƶ� throw�� ��� main���� throw�۵��Ѵ�.
		cerr << "Catch Class B constructor" << endl;
	}

};
int main() {
	//doSomething();
	try
	{
		B b(0);
	}
	catch (...)
	{
		cerr << "Catch main constructor" << endl;
	}
	return 0;
}