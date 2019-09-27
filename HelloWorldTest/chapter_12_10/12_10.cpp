#include <iostream>
#include <string>

//자식 클래스의 포인터를 부모클래스의 포인터로 바꾼후 다시 자식클래스포인터로 변경하기.
//
//auto와 dynamic_cast를 사용한다.
//
//dynamic_cast는 casting에 실패하면 nullptr을 반환한다.
//
//static_cast도 사용가능하다.static_cast는 할 수 있는한 최대한 변환시킨다.
//안되야 될것도 되는 경우가 생긴다.하지만 사용할 만한 가치는 있다.
//static_cast는 nullptr을 반환하지 않는다.

using namespace std;

class Base
{
public:
	int m_i = 0;
	virtual void print()
	{
		cout << "I'm Base" << endl;
	}

};

class Derived1 : public Base
{
public:
	int m_d = 0;
	virtual void print() override
	{
		cout << "I'm Derived1" << endl;
	}

};

class Derived2 : public Base
{
public:
	int m_d = 0;
	string m_s = "123";
	virtual void print() override
	{
		cout << "I'm Derived2" << endl;
	}

};
int main()
{

	Derived2 d2;
	Base *b = &d2;
	b->print();

	auto *base_to_d2 = dynamic_cast<Derived2*>(b);

	cout << base_to_d2->m_s << endl;


	return 0;
}