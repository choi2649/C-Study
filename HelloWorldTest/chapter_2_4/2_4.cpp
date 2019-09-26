#include <iostream>
//void형태
void my_function() 
{

}

int main()
{
	using namespace std;
	
	//void는 메모리를 차지하지 않기때문에 생성할 수 없다.
	//void my_void;
	int i = 1;
	float f = 123.456f;

	//*는 주소를 말한다.
	void *my_void;

	//&를 붙이면 변수의 시작 주소를 알 수 있다.
	//사용하는 메모리가 다달라도 첫주소의 규격은 같다.
	my_void = (void*)&i;
	cout << &i << endl;
	cout << my_void << endl;

	my_void = (void*)&f;
	cout << my_void << endl;

	return 0;
}