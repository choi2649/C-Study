#include <iostream>

using namespace std;

int main()
{
	bool a = true;
	bool b = false;

	cout << (a && b) << endl;
	cout << (a || b) << endl;

	//드모르간 법칙
	//아래처럼 분배의 법칙이 되지않는다.
	!(a && b);
	!a && !b;
	//아래처럼 이해해야한다.
	!(a && b);
	!a || !b;
	
	int x = 5;
	int y = 7;

	cout << !x << endl;
	//왼쪽의 결과가 false면 오른쪽은 작동하지않는다.
	if (x == 2 && y++ == 7)
	{

	}

	cout << y << endl;

	return 0;
}