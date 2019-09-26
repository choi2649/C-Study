#include <iostream>

using namespace std;

int main()
{
	char a[] = "Jack Jack";
	//"Jack Jack"은 리터럴이다.
	//포인터는 메모리의 주소만 가르킨다.
	//메모리를 만들것인가 하는 정보가 없다.
	//char *name = "Jack Jack";

	//기호적인 상수처럼 사용할 수 있다.
	const char *name = "Jack Jack";
	const char *name2 = "Jack Jack";

	//컴파일러가 리터럴이 같을 경우 같이 메모리를 사용하게한다.
	cout << (uintptr_t)name << endl;
	cout << (uintptr_t)name2 << endl;
	cout << &name << endl;
	cout << &name2 << endl;

	int int_arr[5] = { 0 };
	char ch[] = "char";
	const char *ch2 = "char2";

	//cout에서 문자열은 특별히 처리한다.
	cout << int_arr << endl;
	cout << ch << endl;
	cout << ch2 << endl;

	char s = 's';
	cout << &s << endl;

	return 0;
}