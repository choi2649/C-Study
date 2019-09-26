#include <iostream>

using namespace std;

//매크로라고도한다. 보통 매크로는 대문자로 사용한다.
//보통 코드에서 매크로를 만나면 그 데이터로 변경시킨다.
#define MY_NUMBER 9
//문자도 사용가능 하다.
//#define MY_NUMBER "Test"

//#define 문서편집 기능
//요새는 잘사용하지 않는다
#define MAX(a, b) ((a > b) ? a : b)

//조건에 맞춰 컴파일하는 방법이다.
//define 정의는 cpp파일 안에서만 적용된다.
#define LIKE_APPLES

void getTest()
{
	//전처리기 빌드하기전에 사용된다.
	//윈도우,MAX등에 운영체제를 확인할때 사용된다.
	//전처리기 안에서는 데이터 변경작동을 안한다.
	#ifdef LIKE_APPLES
		cout << "apples" << endl;
	#endif

	#ifndef LIKE_APPLES
		cout << "Orange" << endl;
	#endif
}

int main() 
{
	getTest();

	cout << MAX(1, 3) << endl;

	return 0;
}