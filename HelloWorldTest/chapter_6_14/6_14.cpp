#include <iostream>

using namespace std;

void doSomething(int &n)
{
	n = 10;
	cout << "In doSomething : " << n << endl;
	cout << "In doSomething : " << &n << endl;
}
void doSomethingPointer(int *n)
{
	*n = 10;
	cout << "In doSomethingPointer : " << n << endl;
	cout << "In doSomethingPointer : " << &n << endl;
}

struct SubA {
	int v1;

};

struct A {
	int v1;
	SubA subA;
};

int main()
{

	A a;
	a.subA.v1 = 3;
	cout << a.subA.v1 << endl;
	//����ü���� ������ Ȱ���� �� �ִ�.
	int &v1 = a.subA.v1;
	v1 = 4;
	cout << a.subA.v1 << endl;


	int val = 5;
	//�Ķ���ͷ� int�ڷ����� ������ ���簡 �ȴ�.
	doSomething(val);
	cout << val << endl;
	cout << &val << endl;

	//�Ķ���ͷ� ���������� ������ ���簡 ���� �ʴ´�.
	//��, ���� ���� �����ϴ�.
	doSomethingPointer(&val);
	cout << val << endl;
	cout << &val << endl;

	//�����Ϳ��� ���������� ��밡���ϴ�.
	int *ptr = nullptr;
	ptr = &val;

	//���� 
	int &ref = val;

	ref = 10;
	cout << ref << endl;
	cout << val << endl;

	//constȰ��
	const int val2 = 3;
	//�Ұ����ϴ�.
	//int &ref2 = &val2;
	const int &ref2 = val2; 


	return 0;
}