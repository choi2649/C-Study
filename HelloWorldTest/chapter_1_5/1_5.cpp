#include <iostream>

using namespace std;


//함수도 메모리에 저장되어 있다.
//integer형태로 반환한다.
//int a,int b는 parameters 매개변수 이다.
int addTwoNumbers(int a, int b)
{
	int sum = a + b;
	cout << sum << endl;

	//반환값
	return sum;
}

//return 값이 없을때 void를 사용한다.
void printHello() 
{
	cout << "Hello" << endl;
}

int main()
{
	//반복적인 작업에 같은코드를 계속생성하는건 비생산적이다.
	//한가지패턴이 여러번 나타나면 함수로 분리한다.
	cout << 1 + 3 << endl;
	cout << 4 + 5 << endl;
	cout << 8 + 7 << endl;

	//함수를 만들면 아래처럼 쉽게 사용할 수 있다.
	//한 자리 더하기에 사용하면 불필요해보지만 복잡한 사용은 무조건 쪼개서 사용한다.
	//메모리에 저장된 함수를 불러와 사용한다.
	//함수를 호출할때 (1,3) 넣어주는값을 aguments 인수라고 한다.
	//함수실행될때 파라미터에 인수를 초기화한다.
	addTwoNumbers(1, 3);
	addTwoNumbers(4, 5);
	addTwoNumbers(8, 7);

	//함수가 integer형이기에 int로 값을 저장할 수 있다.
	int a = addTwoNumbers(4, 5);
	cout << "a 변수의 값은? " << a << endl;

	printHello();

	return 0;
}