#include <iostream>

using namespace std;

int main()
{
	int x,y;
	cin >> x;
	cin >> y;
	//논리연산자 사용
	if (x == y && x > 0) {
		cout << "x = y && x > 0" << endl;
	}
	
	if (x > 10) {
		cout << x << endl;
	}
	else if (x > 5) {
		cout << x << " = 10 > x > 5 " << endl;
	}
	else {
		cout << x << " < 5" << endl;
	}

	//0이 아니면 true로 본다.
	if (1) {
		cout << "if(1)" << endl;
		x = 10;
	}

	cout << x << endl;

	//return하는 if
	if (x == 10) {
		return 10;
	}
	return 0;
}