#include <iostream>

int main()
{
	using namespace std;
	//��� ������ �ʴ°�.
	3.14;

	//pi�� �޸𸮿� ������ �����ϰ� �ִ�.
	//pi�� �����̴�.
	float pi = 3.14f;

	//signed unsigned�� ����
	//int i = -12345u;
	//�� �Ʒ� ����.
	//i = (unsigned)-12345;

	//const ���� ������ �� ����.
	const float pi2 = 3.14;
	
	//Decimal 10����
	// 0 1 2 3 4 5 6 7 8 9
	//Octal 8����
	// 0 1 2 3 4 5 6 7 10 11 12 13
	//Hexa 16����
	// 0 2 3 4 5 6 7 8 9 A B C D E F

	//0�̺����� 8������ �ν��Ѵ�.
	int x = 012;
	cout << x << endl;

	//0x�� ������ 16������ �ν��Ѵ�.
	x = 0xF;
	cout << x << endl;

	//0b�� ������ 2������ �ν��Ѵ�.
	x = 0b0111;
	cout << x << endl;

	//���ͷ� ���
	//10�� �����̴�.
	int price = x * 10;

	//�����ѹ�(���)�� �Է��ϴ� �ͺ��� ����� ����Ѵ�.
	//�ּ� ��� ����Ѵ�.
	const int price_num = 10;
	price = x * price_num;

	return 0;

}