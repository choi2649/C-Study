#include <iostream>
//
//클래스 템플릿 특수화
//
//template<>를 사용하면되는데
//
//class를 따로 하나 생성하는것과 마찬가지이다.
//
//A<int> a;
//c++17에서는  생성자를 이용하면 <자료형>을 안쓸 수 있다.
//
//bool자료형 class bitMask를 사용할때 유용하다.
using namespace std;

template <typename T>
class A
{
public:
	void doSomething() {
		cout << typeid(T).name() << endl;
	}

	void test(){}
};

//그냥 따로 하나 생성하는것과 같다.
template<>
class A<char>
{
public:
	void doSomething() {
		cout << "chars" << endl;
	}

	//void test() {}
};

int main()
{
	A<int> a;
	a.doSomething();
	A<char> a2;
	a2.doSomething();
	//a2.test(); <= 없다.
	return 0;
}