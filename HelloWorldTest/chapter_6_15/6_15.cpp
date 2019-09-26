#include <iostream>

using namespace std;

//��������
void doSomething(const int &const a) {
	cout << &a << endl;
	cout << a << endl;
}


//������
void doSomething2(const int *const a) {
	cout << a << endl;
	cout << *a << endl;
}


int main()
{
	int val = 5;
	
	const int &ref = val;
	int &ref2 = val;
	//�׳� ���������� L_Value�� �����ϴ�.
	//int &ref3_1 = 3 + 4;

	//������,�������� �ΰ��� ����
	const int &ref3 = 3 + 4;
	cout << ref3 << endl;
	cout << &ref3 << endl;

	doSomething(val);
	//ref3�� �ּҰ��� ���ڰ� �ȴ�.
	doSomething(ref3);
	doSomething(1 + 3);

	//�����Ͱ� �Ķ�����϶� �޸��ּ�,���������� �ȵȴ�.
	doSomething2(&val);
	//doSomething2(ref3);
	//doSomething2(1 + 3);
	return 0;
}