#include <iostream>

using namespace std;

enum class Colors
{
	BLACK,
	WHITE,
	RED,
	GREEN,
	BLUE,
};

void printColorName(Colors c)
{
	switch (c) {
		//���⿡ ����ȰͰ� ����.
		//int a;
	case Colors::BLACK:
		//{}scope�� ������ ���ο����� ����ȴ�.
		int a;
		a = 5;
		cout << "BLACK";
		break;
	case Colors::GREEN:
		//GREEN�� ���õǸ� a�� ���� garbage���� ��µȴ�.
		cout << a << endl;
		cout << "GREEN";
		break;
	default:
		cout << "X" << endl;
	}
	cout << endl;
}

int main()
{
	printColorName(Colors::BLACK);
	
	return 0;
}