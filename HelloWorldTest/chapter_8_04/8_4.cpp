#include <iostream>

using namespace std;
class B
{
private:
	int m_b;
public:
	B(const int& m_b_in)
		: m_b(m_b_in) {

	}
};
class Something
{
private://생성자 초기화가 있을시 기본값설정은 무시된다.
	int m_i = 100;
	double m_d = 200.1;
	char m_c = 'b';
	B m_b{ 2 };

public:
	Something()	//우선순위가 가장 높다.
		: m_i(1), m_d(3.14), m_c('a') ,m_b(m_i-1)
	{//생성자 초기화 선언후 동작한다.
		m_i *= 3;
		m_d *= 3;
	}
	void print() {
		cout << m_i << " " << m_d << endl;
	}
};

int main() {
	Something s;
	s.print();

	return 0;
}