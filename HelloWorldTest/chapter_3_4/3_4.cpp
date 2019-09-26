#include <iostream>

using namespace std;

int main()
{
	//sizeof 변수,타입 모두 넣을 수 있다.
	//struct,class등 사용자가 만든 자료형도 크기를 확인할 수 있다.
	cout << sizeof(int) << endl;
	int a = 3;
	cout << sizeof a << endl;

	int b = 10;
	/*int c = (++a, ++b);
	cout << c << endl;
	cout << a << endl;*/
	int c;
	c = a, b;
	cout << c << endl;

	bool sale = true;

	//조건부연산자.
	const int price = (sale == true) ? 10 : 100;

	cout << price << endl;

	cout << ((10 % 2 == 0) ? "GOOD" : "BAD") << endl;
	return 0;
}