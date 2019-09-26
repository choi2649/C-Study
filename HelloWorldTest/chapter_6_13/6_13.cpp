#include <iostream>

using namespace std;

int main()
{

	int value = 5;
	

	const int *ptr2 = &value;
	cout << *ptr2 << endl;
	//역참조는 불가능하다.
	//포인터를 이용해 값을 변경하지 않겠다는 표현으로 생각할 수 있다.
	//*ptr = 6;


	int value2 = 3;
	//주소에 있는 값을 바꾸지 않겠다는 말이다.
	ptr2 = &value2;
	cout << *ptr2 << endl;
	//에러가난다.
	//*ptr2 = 6;

	//포인터 자체를 상수로 만들기
	int *const ptr = &value;
	//주소값을 변경할 수 없다.
	//ptr = &value2;

	//모든것이 변경 불가능하다.
	const int *const ptr3 = &value;
	return 0;
}