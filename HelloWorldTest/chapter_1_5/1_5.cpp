#include <iostream>

using namespace std;


//�Լ��� �޸𸮿� ����Ǿ� �ִ�.
//integer���·� ��ȯ�Ѵ�.
//int a,int b�� parameters �Ű����� �̴�.
int addTwoNumbers(int a, int b)
{
	int sum = a + b;
	cout << sum << endl;

	//��ȯ��
	return sum;
}

//return ���� ������ void�� ����Ѵ�.
void printHello() 
{
	cout << "Hello" << endl;
}

int main()
{
	//�ݺ����� �۾��� �����ڵ带 ��ӻ����ϴ°� ��������̴�.
	//�Ѱ��������� ������ ��Ÿ���� �Լ��� �и��Ѵ�.
	cout << 1 + 3 << endl;
	cout << 4 + 5 << endl;
	cout << 8 + 7 << endl;

	//�Լ��� ����� �Ʒ�ó�� ���� ����� �� �ִ�.
	//�� �ڸ� ���ϱ⿡ ����ϸ� ���ʿ��غ����� ������ ����� ������ �ɰ��� ����Ѵ�.
	//�޸𸮿� ����� �Լ��� �ҷ��� ����Ѵ�.
	//�Լ��� ȣ���Ҷ� (1,3) �־��ִ°��� aguments �μ���� �Ѵ�.
	//�Լ�����ɶ� �Ķ���Ϳ� �μ��� �ʱ�ȭ�Ѵ�.
	addTwoNumbers(1, 3);
	addTwoNumbers(4, 5);
	addTwoNumbers(8, 7);

	//�Լ��� integer���̱⿡ int�� ���� ������ �� �ִ�.
	int a = addTwoNumbers(4, 5);
	cout << "a ������ ����? " << a << endl;

	printHello();

	return 0;
}