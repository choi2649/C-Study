#include <iostream>
//2진수로 변경해주는 라이브러리
#include <bitset>

using namespace std;

int main()
{
	//<<,>>는 cout,cin 에서 사용하는건 다른 의미이다.

	unsigned int a = 3;

	//2진수가 출력된다.
	cout << std::bitset<4>(a) << " : " << a << endl;

	//이진수를 오른쪽으로 한자리씩 보낸다. 2면 두자리 이동한다.
	//1일때 6,2일때 12,3일때 24 2제곱(연산숫자)로 계산되는걸 알 수 있다.
	//2의 제곱을 곱하고 싶을경우에 훨씬 빠르게 사용할 수 있다.
	unsigned  int b = a << 4;

	cout << std::bitset<4>(b) << " : " << b <<  endl;

	a = 1024;
	//2진수가 출력된다.
	cout << std::bitset<16>(a) << " : " << a << endl;
	//<<와 반대로 나누기가 2가된다.
	b = a >> 1;
	cout << std::bitset<16>(b) << " : " << b << endl;
	b = a >> 2;
	cout << std::bitset<16>(b) << " : " << b << endl;
	b = a >> 3;
	cout << std::bitset<16>(b) << " : " << b << endl;
	
	//~ NOT 반대로 출력된다.
	cout << std::bitset<16>(a) << " : " << a << endl;
	cout << std::bitset<16>(~a) << " : " << ~a << endl;

	//&,^,|을 확인해보자.
	//AND,OR,XOR의 조건에 맞게 출력된다.
	//2진수 출력하기
	a = 0b1100;
	b = 0b0110;

	//아래형식으로 쓸 수 있다.
	a &= b;

	cout << std::bitset<4>(a & b) << endl;
	cout << std::bitset<4>(a | b) << endl;
	cout << std::bitset<4>(a ^ b) << endl;

	return 0;
}