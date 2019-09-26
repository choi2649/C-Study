#include <iostream>

using namespace std;

class Mother {
private:
	int m_i;

public:
	//Mother(){}

	Mother(const int & i_in) 
	: m_i(i_in) {
		cout << "constructor" << endl;
	}

	void setValue(const int & i) {
		m_i = i;
	}

	int getValue() {
		return m_i;
	}
};

class Child : public Mother
{
private:
	double m_d;

public:
	Child(const double & d_in, const int & i_in) 
	: Mother(i_in),m_d(d_in)
	{}

	void setValue(const double & d_in,const int & i_in) {
		Mother::setValue(i_in);
	}

	void setValue(const double & d) {
		m_d = d;
	}

	double getValue() {
		return m_d;
	}
};

//Mother 클래스 재사용
class Daughter : public Mother
{

};

int main()
{
	Mother mother(11);
	mother.setValue(1234);
	cout << mother.getValue() << endl;

	Child child(12,222);
	cout << child.getValue() << endl;
	cout << child.Mother::getValue() << endl;

	return 0;
}