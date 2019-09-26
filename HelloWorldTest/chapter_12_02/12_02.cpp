#include <iostream>
#include <string>

using namespace std;
class A
{
public:
	virtual void print() {
		cout << "A" << endl;
	}
};

class B : public A
{
public:
	void print() {
		cout << "B" << endl;
	}
};

class C : public B
{
public:
	void print() {
		cout << "C" << endl;
	}
};
class D : public C
{
public:
	void print() {
		cout << "D" << endl;
	}
};

int main()
{
	A a;
	B b;
	C c;
	D d;

	//포인터도 사용가능
	//가장 상위클래스에 virtual이 선언되어 있으면 모두 영향 받는다.
	A &ref = c;
	ref.print();

	return 0; 
}