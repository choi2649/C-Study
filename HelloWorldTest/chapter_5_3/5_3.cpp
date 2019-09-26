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
		//여기에 선언된것과 같다.
		//int a;
	case Colors::BLACK:
		//{}scope가 있으면 내부에서만 적용된다.
		int a;
		a = 5;
		cout << "BLACK";
		break;
	case Colors::GREEN:
		//GREEN이 선택되면 a의 값은 garbage값이 출력된다.
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