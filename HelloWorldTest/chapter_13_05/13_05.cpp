#include <iostream>
//
//Ŭ���� ���ø� Ư��ȭ
//
//template<>�� ����ϸ�Ǵµ�
//
//class�� ���� �ϳ� �����ϴ°Ͱ� ���������̴�.
//
//A<int> a;
//c++17������  �����ڸ� �̿��ϸ� <�ڷ���>�� �Ⱦ� �� �ִ�.
//
//bool�ڷ��� class bitMask�� ����Ҷ� �����ϴ�.
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

//�׳� ���� �ϳ� �����ϴ°Ͱ� ����.
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
	//a2.test(); <= ����.
	return 0;
}