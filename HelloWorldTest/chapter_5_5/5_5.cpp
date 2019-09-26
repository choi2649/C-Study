#include <iostream>

using namespace std;

int main()
{
	int a = 0;
	//a가 10보다 작다면 이라는 조건을 사용했다.
	while ( a < 10) {
		//변수사용하기! 잘 사용안한다.
		//static int a = 0;
		cout << "a : " << a << endl;
		a++;
	}

//goto문으로 while과 같이 동작하기
startNumAdd:

	cout << "goto a : " << a << endl;
	if (a < 20) {
		a++;
		goto startNumAdd;
	}

	a = 2;
	//unsigned를 사용하면 오버플로우가 발생하여 문제가 생긴다.
	//unsigned int count = 0;
	//while (count >= 0) {
	//	cout << count << endl;
	//	count--;
	//}

	//중복while문
	//구구단출력
	while (a < 10) {
		int b = 1;
		cout << "a : " << a << endl;
		while (b < 10) {
			cout << "\t"<< a << " * " << b << " = " << a*b << endl;
			b++;
		}
		a++;
		b = 0;
	}

	return 0;
}