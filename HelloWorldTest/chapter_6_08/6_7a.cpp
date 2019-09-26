#include <iostream>
#include <cstddef>

using namespace std;

void doSomething(double *ptr)
{
	if (ptr != nullptr)
	{
		//nullptr이 아니면 동작해라
		cout << ptr << endl;
		cout << "address of pointer func() " << &ptr << endl;
		//내부의 저장된 주소값은 같다.
		cout << "address of pointer func() " << ptr << endl;
	}
	else
	{
		cout << "nullPtr" << endl;
	}
}

int main()
{
	double *ptr = 0;//c-style
	double *ptr2 = nullptr;//modern c++

	doSomething(ptr2);
	doSomething(nullptr);
	double d = 3.0;
	ptr = &d;
	doSomething(ptr);
	cout << "address of pointer main() " << &ptr << endl;
	//내부의 저장된 주소값은 같다.
	cout << "address of pointer main() " << ptr << endl;
	std::nullptr_t nptr;//nullptr만 사용할 수 있다.
	
	return 0;
}