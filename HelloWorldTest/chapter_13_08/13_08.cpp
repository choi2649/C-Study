#include <iostream>
//��� �Լ��� �� �� �� ���ø� �ϱ�
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

	template<typename TT>
	void doSomething() {
		cout << typeid(T).name() << " " << typeid(TT).name() << endl;
	}
	//TT�� doSomething�Լ������� ����ȴ�.
	template<typename TT>
	void doSomething(const TT & t) {
		cout << typeid(T).name() << " " << typeid(TT).name() << endl;
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
	//�Ķ���ͷ� �ڷ����� ���ԵǸ� <>�� �������� �ʿ䰡 ����.
	//char �ڷ����� int�� ���ڷ� ����� �� �ִ�.
	a_int.doSomething(1.23);


	return 0;
}