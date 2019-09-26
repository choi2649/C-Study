#include <iostream>

using namespace std;

int main()
{
	double x;

//돌아갈곳 설정하기
notGood :

	cout << "cin start" << endl;
	cin >> x;
	if (x < 0.0)//goto문 실행방법
		goto notGood;

	return 0;
}