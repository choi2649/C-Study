#include <iostream>

using namespace std;

int foo(int a, int b);

//�Լ����� ���Ǵ� ������ �Ű����� parameter�̴�.
int foo(int a, int b) {
	cout << "a : " << a << " b : " << b << endl;
	return a + b;
}

int main()
{
	int a = 3, b = 4;

	//�Լ��� �ҷ��ö� ���Ǵ� ������ ���� argument�̴�.
	foo(6, 7);
	foo(a, b);

	return 0;
}