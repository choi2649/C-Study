#include <iostream>

using namespace std;

//�Է°� ����� �ּ��� ������ ����д�.
//forward declaration ���漱��
int add(int a, int b);
int multiply(int a, int b);

//main �Լ��� ���� ������ �Ʒ��� �ִ� �Լ��� ���� ���Ѵ�.
int main()
{
	cout << add(1, 2) << endl;

	return 0;
}

//definition ����
int add(int a, int b) 
{
	return a + b;
}

//definition ����
int multiply(int a, int b)
{
	return a * b;
}



