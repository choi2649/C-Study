#include <iostream>

using namespace std;

void doSomething(int y) {
	cout << "In fuc " << y << " " << &y << endl;
}

int main()
{
	//리터럴 7이 함수에 복사한다.
	doSomething(7);

	int y = 6;
	cout << "In main " << y << " " << &y << endl;
	doSomething(y);
	doSomething(y+1);

	return 0;
}