#include <iostream>

using namespace std;

//virtual �Լ�(�����Լ�)�� ������ �ƴ� �������� ����ȴ�.
//
//�Լ��� ����� virtual��� ���̺�(������)�� ã�� ���̺�ȿ� �Լ� �����͸� ����Ѵ�.
//
//������ ���� �ڽ� Ŭ�������� virtual��� ���̺�(������)�� �����.
//�ٸ� �������̵��� �Լ��� �ڽ� ���̺� �Լ� �ּ� ���� ������.
//
//virtual�� ����ϸ� sizeof()�� Ȯ�ν�  ������ �޸𸮱��� �Ҵ�Ǵ� �� �� �� �ִ�.
class Base
{
public:
	virtual void fun1() {};
	void fun2() {};
};

class Der : Base
{
public:
	void fun1() {};
	void fun3() {};

};

int main()
{
	cout << sizeof(Base) << endl;
	cout << sizeof(Der) << endl;
	return 0;
}