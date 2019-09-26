#include <iostream>
#include "MyConst.h"

using namespace std;

//전역변수 선언
int a = 123;
//정적변수 선언
void getTest()
{
	//정적변수는 꼭 초기화해야한다.
	static int a = 1;
	++a;
	cout << a << endl;
}

//다른 cpp 함수,변수 사용하기
//forward declaration
//어딘가에 있을 함수를 찾는다.
//extern 선언이 생략되어 있다.
//extern void getCppTest();
//프로그램전체에서 확인한다.
void getCppTest();
extern int a2;

int main()
{
	//전역변수(Global variabel)이 출력된다.
	cout << a << endl;
	//지역변수(local variabel)이다.
	//범위가  {}로 정해진다.
	int a = 0;

	//지역변수(Global variabel)가 출력된다.
	cout << a << endl;

	//전역연산자를 사용하면 전역변수로 출력기가능하다.
	cout << ::a << endl;

	//static을 선언해 정적변수를 사용하기 Test
	//getTest()함수를 불러오면
	//static int a를 메모리에 할당받는다.
	getTest();
	//두번째 함수 출력때 static이 있으면 변수가 선언되 있으면 재사용한다.
	getTest();

	getCppTest();

	cout << a2 << endl;
	//header에 상수를 선언해 test에서 불러오면 Constants와 메모리 주소가 다르다.
	//cpp파일을 만들어 extern header엔 정의만하고 cpp 파일에서 extern으로 정의해주면
	//같은 메모리 주소를 사용하는 걸 볼 수 있다.
	cout << "main : " << Constants::pi << " 주소: " << &Constants::pi << endl;
	return 0;
}