#include <iostream>

using namespace std;


//매개변수(parameter)는 함수생성될때 만들어진다.
//내용 복사개념으로 생각하자.
//numChange(x)로 main에서 실행하면
//메모리에 올라와있는 numChange(int a) 함수로 정보를 전달한다.
void numChange(int a)
{
	a = 123;
	//int a는 함수에서 생성된 매개변수이므로 주소가 다르다.
	cout << "numChange : "<< a << " : " << &a << endl;
}
int main()
{
	//메모리에 적재될때 값을 넣는다.
	//초기화
	int x(0);

	cout << x << " : " << &x << endl;
	{
		int x(0);
		//밖 중괄호와 메모리주소가 다른것을 볼 수 있다.
		cout << x << " : " << &x << endl;
	}

	{
		//밖에 있는 괄호에 변수를 그냥 사용할 수 있다.
		x = 3;
	}
	//x의 값이 변경된걸 확인한다.
	cout << x << " : " << &x << endl;

	numChange(x);
	//numChange에서 변환시킨 숫자는 다른 메모리에 있는 변수이므로
	//3이 유지된다.
	cout << "numChange After : " << x << " : " << &x << endl;

	return 0;
}