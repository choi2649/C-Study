#include <iostream>

using namespace std;


//�Ű�����(parameter)�� �Լ������ɶ� ���������.
//���� ���簳������ ��������.
//numChange(x)�� main���� �����ϸ�
//�޸𸮿� �ö���ִ� numChange(int a) �Լ��� ������ �����Ѵ�.
void numChange(int a)
{
	a = 123;
	//int a�� �Լ����� ������ �Ű������̹Ƿ� �ּҰ� �ٸ���.
	cout << "numChange : "<< a << " : " << &a << endl;
}
int main()
{
	//�޸𸮿� ����ɶ� ���� �ִ´�.
	//�ʱ�ȭ
	int x(0);

	cout << x << " : " << &x << endl;
	{
		int x(0);
		//�� �߰�ȣ�� �޸��ּҰ� �ٸ����� �� �� �ִ�.
		cout << x << " : " << &x << endl;
	}

	{
		//�ۿ� �ִ� ��ȣ�� ������ �׳� ����� �� �ִ�.
		x = 3;
	}
	//x�� ���� ����Ȱ� Ȯ���Ѵ�.
	cout << x << " : " << &x << endl;

	numChange(x);
	//numChange���� ��ȯ��Ų ���ڴ� �ٸ� �޸𸮿� �ִ� �����̹Ƿ�
	//3�� �����ȴ�.
	cout << "numChange After : " << x << " : " << &x << endl;

	return 0;
}