#include <iostream>
//멤버 함수를 한 번 더 템플릿 하기
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
	//TT는 doSomething함수에서만 적용된다.
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
	//파라미터로 자료형이 들어가게되면 <>로 정의해줄 필요가 없다.
	//char 자료형을 int형 숫자로 출력할 수 있다.
	a_int.doSomething(1.23);


	return 0;
}