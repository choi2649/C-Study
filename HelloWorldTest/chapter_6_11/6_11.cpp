#include <iostream>

using namespace std;

//정적메모리 할당
int a = 0;

int main()
{

	//자동메모리 할당
	{
		int array[10];
	}

	int *ptr = new (std::nothrow)int (8);
	cout << *ptr << endl;
	//ptr이 delete가 되면 ptr2도 메모리가 반납된다.
	int *ptr2 = ptr;

	//de-reference
	*ptr = 7;

	cout << *ptr << endl;
	delete ptr;

	//delete로 메모리를 반납했기에 garvage값이 출력된다.
	//cout << *ptr << endl;
	//방지하는방법 0,NULL,nullptr을 사용한다.
	ptr = nullptr;
	if (ptr != nullptr) 
		cout << *ptr << endl;

	while (true) {
		//delete를 하면 메모리 누수memory leak이 발생한다.
		int *ptr = new int;
		cout << ptr << endl;
		delete ptr;
	}
	
	return 0;
}