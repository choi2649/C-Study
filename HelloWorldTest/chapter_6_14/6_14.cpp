#include <iostream>

using namespace std;

void doSomething(int &n)
{
	n = 10;
	cout << "In doSomething : " << n << endl;
	cout << "In doSomething : " << &n << endl;
}
void doSomethingPointer(int *n)
{
	*n = 10;
	cout << "In doSomethingPointer : " << n << endl;
	cout << "In doSomethingPointer : " << &n << endl;
}

struct SubA {
	int v1;

};

struct A {
	int v1;
	SubA subA;
};

int main()
{

	A a;
	a.subA.v1 = 3;
	cout << a.subA.v1 << endl;
	//구조체에서 참조를 활용할 수 있다.
	int &v1 = a.subA.v1;
	v1 = 4;
	cout << a.subA.v1 << endl;


	int val = 5;
	//파라미터로 int자료형을 보내면 복사가 된다.
	doSomething(val);
	cout << val << endl;
	cout << &val << endl;

	//파라미터로 참조변수를 보내면 복사가 되지 않는다.
	//즉, 값이 변경 가능하다.
	doSomethingPointer(&val);
	cout << val << endl;
	cout << &val << endl;

	//포인터에서 참조변수를 사용가능하다.
	int *ptr = nullptr;
	ptr = &val;

	//참조 
	int &ref = val;

	ref = 10;
	cout << ref << endl;
	cout << val << endl;

	//const활용
	const int val2 = 3;
	//불가능하다.
	//int &ref2 = &val2;
	const int &ref2 = val2; 


	return 0;
}