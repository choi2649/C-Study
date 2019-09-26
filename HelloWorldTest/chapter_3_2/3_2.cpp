#include <iostream>

int main()
{
	using namespace std;

	int x = 1;
	int y = -x;
	
	cout << y << endl;

	y = 2;

	int z = x + y;
	cout << z << endl;


	//% 는 나머지이다.
	//int,float 나머지는 서로 다르다.
	//숫자가 하나라도 실수라면 실수로 출력된다. 
	x = 7;
	y = 4;
	cout << x / y << endl;
	cout << float(x) / y << endl;

	//int형이면 정수이여야하기 때문에 0.5를 절삭한다.
	//2가 출력된다.
	cout << -5 / 2 << endl;

	//% 나머지연산자는 왼쪽숫자의 부호를 따른다.
	cout << -5 % 2 << endl;

	//x가 가르키고있는 메모리의 정보를 z가 가르키고있는 메모리에 저장한다.
	z = x;
	//z = z + y;와 같다.
	//코딩할 때 코드의 양을 줄여준다.
	//오타를 줄일 수 있다.
	//+=,*=,/=,%= 다 가능하다.
	z += y;

	return 0;
}