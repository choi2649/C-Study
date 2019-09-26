#include <iostream>

using namespace std;

void ptrTest(const int *ptr) {
	cout << "func() &ptr " << &ptr <<" "<< ptr << " " << *ptr << endl;
}

int main()
{
	int value = 5;
	cout << value << " " << &value << endl;
	int *ptr = &value;

	ptrTest(&value);

	//main()과 func()의 포인터 주소가 다르다.
	cout << "main() &ptr " << &ptr << endl;
	
	ptrTest(ptr);

	return 0;
}