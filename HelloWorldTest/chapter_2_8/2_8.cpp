#include <iostream>

int main()
{
	using namespace std;
	//상수 변하지 않는것.
	3.14;

	//pi는 메모리에 공간을 차지하고 있다.
	//pi는 변수이다.
	float pi = 3.14f;

	//signed unsigned로 변경
	//int i = -12345u;
	//위 아래 같다.
	//i = (unsigned)-12345;

	//const 값을 변경할 수 없다.
	const float pi2 = 3.14;
	
	//Decimal 10진수
	// 0 1 2 3 4 5 6 7 8 9
	//Octal 8진수
	// 0 1 2 3 4 5 6 7 10 11 12 13
	//Hexa 16진수
	// 0 2 3 4 5 6 7 8 9 A B C D E F

	//0이붙으면 8진수로 인식한다.
	int x = 012;
	cout << x << endl;

	//0x가 붙으면 16진수로 인식한다.
	x = 0xF;
	cout << x << endl;

	//0b가 붙으면 2진수로 인식한다.
	x = 0b0111;
	cout << x << endl;

	//리터럴 상수
	//10은 갯수이다.
	int price = x * 10;

	//매직넘버(상수)를 입력하는 것보단 만들어 사용한다.
	//주석 대신 사용한다.
	const int price_num = 10;
	price = x * price_num;

	return 0;

}