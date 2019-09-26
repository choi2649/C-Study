#include <iostream>

using namespace std;

//참조변수
void doSomething(const int &const a) {
	cout << &a << endl;
	cout << a << endl;
}


//포인터
void doSomething2(const int *const a) {
	cout << a << endl;
	cout << *a << endl;
}


int main()
{
	int val = 5;
	
	const int &ref = val;
	int &ref2 = val;
	//그냥 참조변수는 L_Value만 가능하다.
	//int &ref3_1 = 3 + 4;

	//포인터,참조변수 두개의 차이
	const int &ref3 = 3 + 4;
	cout << ref3 << endl;
	cout << &ref3 << endl;

	doSomething(val);
	//ref3의 주소값이 인자가 된다.
	doSomething(ref3);
	doSomething(1 + 3);

	//포인터가 파라미터일땐 메모리주소,연산전송이 안된다.
	doSomething2(&val);
	//doSomething2(ref3);
	//doSomething2(1 + 3);
	return 0;
}