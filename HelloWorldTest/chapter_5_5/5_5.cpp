#include <iostream>

using namespace std;

int main()
{
	int a = 0;
	//a�� 10���� �۴ٸ� �̶�� ������ ����ߴ�.
	while ( a < 10) {
		//��������ϱ�! �� �����Ѵ�.
		//static int a = 0;
		cout << "a : " << a << endl;
		a++;
	}

//goto������ while�� ���� �����ϱ�
startNumAdd:

	cout << "goto a : " << a << endl;
	if (a < 20) {
		a++;
		goto startNumAdd;
	}

	a = 2;
	//unsigned�� ����ϸ� �����÷ο찡 �߻��Ͽ� ������ �����.
	//unsigned int count = 0;
	//while (count >= 0) {
	//	cout << count << endl;
	//	count--;
	//}

	//�ߺ�while��
	//���������
	while (a < 10) {
		int b = 1;
		cout << "a : " << a << endl;
		while (b < 10) {
			cout << "\t"<< a << " * " << b << " = " << a*b << endl;
			b++;
		}
		a++;
		b = 0;
	}

	return 0;
}