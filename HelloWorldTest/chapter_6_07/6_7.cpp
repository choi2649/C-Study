#include <iostream>
#include <typeinfo>

using namespace std;

int* nullPoint(int* a)
{
	return nullptr;
}

struct A {
	int a, b, c;
};

int main() {

	int x = 5;

	cout << x << endl;
	cout << &x << endl;
	cout << *(&x) << endl;

	//포인터 선언
	//변수의 주소를 포인터에 넣어준다.
	//데이터 타입과는 상관없이 중립적이다.
	//다만 de-reference할때 타입을 알아야하기에 타입을 정해준다.
	int *ptr_x = &x;

	cout << ptr_x << endl;
	//de-reference 가리키고있는 메모리안에있는 데이터를 가져온다.
	cout << *ptr_x << endl;
	//포인터임을 확인 할 수 있다.
	cout << typeid(ptr_x).name() << endl;

	A a;
	A *ptr_a;

	//12Byte이다.
	cout << sizeof(a) << endl;
	//포인터는 4Byte이다.
	cout << sizeof(ptr_a) << endl;

	return 0;
}