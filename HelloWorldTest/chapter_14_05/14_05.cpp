#include <iostream>

//class의 생성자에서 발생하는 예외를 처리하기
//함수 바디 전체에 try catch를 구현할 수 있다.
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
	catch (...) {//catch에서잡아도 throw가 없어도 main으로 throw작동한다.
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