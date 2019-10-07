#include <iostream>

using namespace std;

template<typename T>
class A
{
protected:
	T m_value;

public:
	A(const T & input)
		:m_value(input) {

	}

	void print()
	{
		cout << m_value << endl;
	}

};

template<typename T>
class A<T*>
{
protected:
	T* m_value;

public:
	A(T * input)
		:m_value(input) {

	}

	void print()
	{
		cout << *m_value << endl;
	}

};

int main()
{
	A<int> a_int(123);
	a_int.print();

	int temp = 456;

	A<int*> a_int_ptr(&temp);
	a_int_ptr.print();


	return 0;
}