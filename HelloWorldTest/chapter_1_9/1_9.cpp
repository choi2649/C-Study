#include <iostream>

using namespace std;

int add(int x, int y) {
	//공백을 주는것(indenting)
	//파이썬에선 중요(indenting)으로 스코프를 찾는다.
	return x + y; 
}

int main()
{
	//줄을 맞추는것이 보기 편할 수 있다.
	int abc		= 1;
	//int a		= 1;
	int ab		= 1;
	
	cout << "Test" << endl;

	int a (add(1, 3));

	cout << "a : " << a << endl;

	return 0;
}