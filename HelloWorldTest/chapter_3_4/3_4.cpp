#include <iostream>

using namespace std;

int main()
{
	//sizeof ����,Ÿ�� ��� ���� �� �ִ�.
	//struct,class�� ����ڰ� ���� �ڷ����� ũ�⸦ Ȯ���� �� �ִ�.
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

	//���Ǻο�����.
	const int price = (sale == true) ? 10 : 100;

	cout << price << endl;

	cout << ((10 % 2 == 0) ? "GOOD" : "BAD") << endl;
	return 0;
}