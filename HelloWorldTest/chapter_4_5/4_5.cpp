#include <iostream>
#include <cmath>
#include <typeinfo>

int main()
{
	using namespace std;

	//int������ ����ȴ�.
	int a = 123.4;
	cout << a << endl;
	cout << typeid(4.0).name() << endl;

	float f = 123.4f;
	double d = f;
	d = 123.4567891011;
	f = d;

	int i = 30000;
	char c = i;
	//����� ������ �ȵȴ�.
	cout << static_cast<int>(c) << endl;

	//���������ȯ
	//c++��Ÿ��
	int i2 = int(4.0);
	//c��Ÿ��
	i2 = (int)4.0;
	//�ٸ����
	i2 = static_cast<int>(4.0);
	return 0;
}
