#include <iostream>
#include "MY_CONSTANTS.h"

using namespace std;

//파라미터를 변경하지 못하게 const로 생성한다.
void printNumber(const int num)
{
	//이함수 안의 영역에 num 생성되고
	//호출될때 인자 4가 입력된다.
	
	//값을 변경할 시 변수를 생성한다.
	int n = num;
	n = 456;
	cout << num << endl;
}

int main()
{
	//값을 변경할 수 없다.
	//컴파일러가 변경을 막아준다.
	const double gravity{ 9.8 };
	//const위치는 상관없으나 보통 앞에 붙인다.
	double const gravity2{ 9.8 };

	//아래 코드는 에러가 난다.
	//gravity = 3.2;

	printNumber(4);

	//컴파일할 때 생성되기에 컴퓨터가 알 수 있다.
	const int my_const(123);
	//constexpr은 컴파일할때 생성되는 함수를 표현할 때 사용한다.
	constexpr int my_const2(123);
	int number;
	cin >> number;

	//아래 const는 실행을 해봐야 알 수 있다.
	const int special_num(number);
	//constexpr을 사용하면 에러가 난다.
	//constexpr int special_num2(num);

	//기존 c사용자는 매크로를 사용했다.
	//맨위에 설정해놓기에 디버깅이 힘들다.
	//매크로의 적용범위가 너무 넓어진다.
	#define PRICE 30;
	//아래로 사용하는 것이 좋다.
	const int price = 30;
	
	//헤더파일로 const를 뺴놓는다
	double d1 = constants::pi;

	return 0;
}