#include <iostream>

//BSS 파트 처음에 생겼다가 마지막에 사라진다.
int g_i = 0;

//3.Stack frame second(),int x
int second(int x) {
	return 2 * x;
}

//2.Stack frame first(),int x,y
int first(int x) {
	int y = 3;
	return second(x + y);
}

void initArray() {
	//메모리를 반납하지않으면 사용은 못하는데 메모리엔 할당되어있다.
	int *ptr2 = new int[1000];
}
//1.Stack frame main(),int a,b
int main()
{
	using namespace std;
	int a = 1, b;
	b = first(a);
	cout << b << endl;

	//포인터도 변수다.
	int *ptr = nullptr;
	//힙메모리에 동적할당된 주소를 가져온다.
	ptr = new int[1000000];
	//힙메모리에 할당된 메모리를 반납한다.
	delete[] ptr;
	//메모리반납해도 주소는 가지고있다 초기화해준다.
	ptr = nullptr;

	initArray();

	return 0;
}