#include<iostream>
#include <cstdint>

int main()
{
	using namespace std;

	//2Byte로 변경
	int16_t i(5);
	//1Byte로 변경 char형태
	//특별히 쓸일 아니면 쓰지말자
	int8_t myInt = 65;

	//A로 출력된다.
	cout << myInt << endl;

	return 0;
}