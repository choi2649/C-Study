#include <iostream>
#include "MyConst.h"

using namespace std;

//�������� ����
int a = 123;
//�������� ����
void getTest()
{
	//���������� �� �ʱ�ȭ�ؾ��Ѵ�.
	static int a = 1;
	++a;
	cout << a << endl;
}

//�ٸ� cpp �Լ�,���� ����ϱ�
//forward declaration
//��򰡿� ���� �Լ��� ã�´�.
//extern ������ �����Ǿ� �ִ�.
//extern void getCppTest();
//���α׷���ü���� Ȯ���Ѵ�.
void getCppTest();
extern int a2;

int main()
{
	//��������(Global variabel)�� ��µȴ�.
	cout << a << endl;
	//��������(local variabel)�̴�.
	//������  {}�� ��������.
	int a = 0;

	//��������(Global variabel)�� ��µȴ�.
	cout << a << endl;

	//���������ڸ� ����ϸ� ���������� ��±Ⱑ���ϴ�.
	cout << ::a << endl;

	//static�� ������ ���������� ����ϱ� Test
	//getTest()�Լ��� �ҷ�����
	//static int a�� �޸𸮿� �Ҵ�޴´�.
	getTest();
	//�ι�° �Լ� ��¶� static�� ������ ������ ����� ������ �����Ѵ�.
	getTest();

	getCppTest();

	cout << a2 << endl;
	//header�� ����� ������ test���� �ҷ����� Constants�� �޸� �ּҰ� �ٸ���.
	//cpp������ ����� extern header�� ���Ǹ��ϰ� cpp ���Ͽ��� extern���� �������ָ�
	//���� �޸� �ּҸ� ����ϴ� �� �� �� �ִ�.
	cout << "main : " << Constants::pi << " �ּ�: " << &Constants::pi << endl;
	return 0;
}