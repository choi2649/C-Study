#include <iostream>

using namespace std;

class A
{
public:
	virtual void printOverride(int x)  const{ cout << "A" << endl; }
	
	//final�� ���̸� �������̵� �� �� ����.
	virtual void printFinal(int x) final { cout << "A" << endl; }
	
	void print() { cout << "A" << endl; }
	virtual A *getThis() { return this; }
};

class B : public A
{
public:
	void printOverride(int x)  const override { cout << "B" << endl; }
	
	//��������.
	//virtual void printFinal(int x) { cout << "B " << endl; }
	
	void print() { cout << "B" << endl; }
	B *getThis() { return this; }
};
int main() {

	A a;
	B b;
	
	A &ref = b;
	b.getThis()->print();
	ref.getThis()->print();

	cout << typeid(b.getThis()).name() << endl;
	//�θ�Ŭ������ ��µȴ�.
	cout << typeid(ref.getThis()).name() << endl;
	return 0;
}
