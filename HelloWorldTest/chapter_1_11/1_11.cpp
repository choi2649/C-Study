//<>는 표준에 들어있는 특별한것 컴파일러설치할때 따라들어온다.
#include <iostream>
//헤더파일에 선언을 해놓고 사용한다고 생각하면된다.
#include "add.h"

using namespace std;
/*
선언으로 가능하긴 하지만 여러개의 덧셈이 추가되면 선언으로 하기엔 양이 너무 많다.

int add(int a, int b, int c);
int add(int a, int b);
*/
int main()
{
	cout << add(1, 3) << endl;
	cout << add(1, 3, 6) << endl;

	return 0;
}