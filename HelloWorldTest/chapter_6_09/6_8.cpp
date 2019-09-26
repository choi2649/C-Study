#include <iostream>

using namespace std;

void printArray(int arr[]) {
	cout << "======" << endl;
	cout << arr << endl;
	cout << *arr << endl;
	cout << sizeof(arr) << endl;

	//직접접근하여 값변경하기
	*arr = 1000;
}

struct A
{
	int arr[3] = { 1,2,3 };
};

void doSomethig(A a) {
	//포인터로 변환되지 않는것을 확인할 수 있다.
	cout << sizeof(a.arr) << endl;
}

int main()
{
	int arr[5] = { 9,7,5,3,1 };

	cout << arr << endl;
	cout << *arr << endl;
	cout << sizeof(arr) << endl;
	//같은 주소를 보고있는지 확인하기
	int *ptr_arr = arr;
	cout << ptr_arr << endl;
	cout << *ptr_arr << endl;
	cout << sizeof(ptr_arr) << endl;

	char name[] = "choi";
	cout << *name << endl;
	printArray(arr);
	printArray(ptr_arr);
	cout << arr[0] << "   " << *arr << endl;
	
	cout << "======" << endl;

	A a;
	cout << a.arr[0] << endl;
	cout << sizeof(a.arr) << endl;
	
	doSomethig(a);

	return 0;
}