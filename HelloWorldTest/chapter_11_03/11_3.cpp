#include <iostream>

using namespace std;

class Mother
{
public:
	int m_i;
	//3.�θ�Ŭ���� �����ڸ� �����Ѵ�.
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
	//2. �ڽ�Ŭ���� �����ڷ� �´�.
	Child()
	: //���������� �����ִ�.Mother(),
		//4.�ڽ�Ŭ������ �����ڸ� �ʱ�ȭ�Ѵ�.
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
	//1.��ü����
	Child c1;
	
	return 0;
}