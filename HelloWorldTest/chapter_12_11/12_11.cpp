#include <iostream>

//다형성은 편리하고 유용하지만
//모든 경우에 사용할 수 없다.
//
//출력연산자가 대표적인 경우이다.
//
//출력연산자를 사용하려면 함수를 따로 하나 생성하여 오버라이딩 한다.
//즉, 함수에게 기능을 위임한다.
//
//비슷한 전략이 다른경우에도 사용될 수 있다.

using namespace std;

class Base
{
public:
	Base() {};

	friend ostream& operator << (ostream &out, const Base &b)
	{
		return b.print(out);
	}

	virtual ostream& print(ostream& out) const
	{
		out << "Base";
		return out;
	}

};

class Derived : public Base
{
public:
	Derived() { };

	virtual ostream& print(ostream& out)const override
	{
		out << "Derived";
		return out;
	}
};
int main() {

	Base b;
	cout << b << endl;

	Derived d;
	cout << d << endl;


	return 0;
}