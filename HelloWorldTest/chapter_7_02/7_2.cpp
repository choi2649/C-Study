#include <iostream>

using namespace std;

void doSomething(int y) {
	cout << "In fuc " << y << " " << &y << endl;
}

int main()
{
	//���ͷ� 7�� �Լ��� �����Ѵ�.
	doSomething(7);

	int y = 6;
	cout << "In main " << y << " " << &y << endl;
	doSomething(y);
	doSomething(y+1);

	return 0;
}