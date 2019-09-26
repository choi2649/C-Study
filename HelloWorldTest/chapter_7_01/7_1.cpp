#include <iostream>

using namespace std;

int foo(int a, int b);

//함수에서 사용되는 변수가 매개변수 parameter이다.
int foo(int a, int b) {
	cout << "a : " << a << " b : " << b << endl;
	return a + b;
}

int main()
{
	int a = 3, b = 4;

	//함수를 불러올때 사용되는 변수가 인자 argument이다.
	foo(6, 7);
	foo(a, b);

	return 0;
}