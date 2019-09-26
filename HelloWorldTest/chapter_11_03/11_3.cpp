#include <iostream>

using namespace std;

class Mother
{
public:
	int m_i;
	//3.부모클래스 생성자를 실행한다.
	Mother() :m_i(1){
		cout << "Mother Constructor" << endl;
	}
	~Mother() {
		cout << "Mother Destructor" << endl;
	}
	Mother(const int &a) :m_i(a) {
		cout << "Mother Constructor" << endl;
	}
};

class Child : public Mother 
{
public:
	double m_d;
	//2. 자식클래스 생성자로 온다.
	Child()
	: //내부적으로 숨어있다.Mother(),
		//4.자식클래스의 생성자를 초기화한다.
		m_d(1.0){
		cout << "Child Constructor" << endl;
	}
	~Child() {
		cout << "Child Destructor" << endl;
	}
};


class A : public Child
{
public:
	A() {
		cout << "A" << endl;
	}
	~A() {
		cout << "A Destructor" << endl;
	}
};
int main()
{
	//1.객체생성
	Child c1;
	
	return 0;
}