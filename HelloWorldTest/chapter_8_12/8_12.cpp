#include <iostream>

using namespace std;
//전방선언
class A;

class B
{
private:
	int m_val = 2;

public:
	//A가 선언되어 있기에 A를 사용가능하다.
	void doSomething(A& a);
};

class A
{
private:
	int m_val = 1;
	//class A가 생성될떄 B를 알 수없다.
	//class통쨰로 선언
	//friend class B;
	//B Class가 먼저 선언되어 있어 함수를 구현할 수 있다.
	//class일부함수만 선언
	friend void B::doSomething(A& a);
};

//A에 m_val변수가 있는지 확인 불가능하기때문에 A Class가 구현된후 함수 구현
void B::doSomething(A& a) {
	a.m_val = 3;
	cout << a.m_val << endl;
}

int main()
{
	A a;
	B b;
	b.doSomething(a);
	

	return 0;
}