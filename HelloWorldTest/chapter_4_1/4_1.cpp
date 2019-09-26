#include <iostream>

using namespace std;

//만약에 같은이름의 변수와,함수를 사용하고 싶다면
//namespace를 사용한다.
namespace work1
{
	int a = 0;
	void getTest() {
		a += 1;
		cout << "work1::getTest() : " << a << endl;
	}
	
}


int a = 0;
void getTest() {
	a += 2;
	cout << "getTest() : " << a << endl;
}

int main()
{
	
	//apple변수를 선언해서 사용할 수 있게 된다.
	//OS로 부터 int메모리를 할당 받는다.
	//int main(){}안에서 사용가능 하다.
	int apple = 5;
	cout << apple << endl;
	if(true)
	{
		//{}밖에서 선언된 변수는 안 {}에서도 사용가능 하다.
		//apple변수가 위에 되어있기에 사용할 수 있다.
		//apple = 1;
		//cout << apple << endl;
		
		//같은이름으로 변수 선언이 가능하다.
		//내부 {} 안에서만 적용된다.
		//외부에 있는 apple은 같은 이름이 선언될 경우 숨긴다.
		//가급적이면 이름을 다르게 정하는것이 좋다.
		int apple = 1;
		cout << apple << endl;

		getTest();
		work1::getTest();
	}
	cout << apple << endl;

	return 0;
}