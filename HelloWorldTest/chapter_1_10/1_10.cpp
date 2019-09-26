#include <iostream>

using namespace std;

//입력과 출력의 최소한 정보만 적어둔다.
//forward declaration 전방선언
int add(int a, int b);
int multiply(int a, int b);

//main 함수가 위에 있으면 아래에 있는 함수를 읽지 못한다.
int main()
{
	cout << add(1, 2) << endl;

	return 0;
}

//definition 정의
int add(int a, int b) 
{
	return a + b;
}

//definition 정의
int multiply(int a, int b)
{
	return a * b;
}



