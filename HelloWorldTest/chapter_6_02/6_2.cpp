#include <iostream>

using namespace std;

#define NUM 2

void doSomething(int students[]) 
{
	cout << "doSomething" << endl;
	cout << (int)&students << endl;
	//포인터의 사이즈가 출력된다.
	cout << "sizeof: " << sizeof(students) << endl;
	cout << students[0] << endl;
	cout << students[1] << endl;
}

int main()
{
	int a[NUM];

	cout << (int)&a << endl;
	cout << (int)&a[0] << endl;
	cout << (int)&a[1] << endl;
	a[0] = 1;
	a[1] = 2;
	cout << sizeof(a) << endl;

	doSomething(a);

	return 0;
}