#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double d1(100 - 99.99);
	double d2(10 - 9.99);
	//0.01�� ��µȴ�.
	cout << d1 << endl;
	//0.01�� ��µȴ�.
	cout << d2 << endl;
	cout << d1 - d2 << endl;

	
	if (d1 == d2)
		cout << "����" << endl;
	else
		cout << "�ٸ���" << endl;

	//������ �Ѱ踦 ����� ������ �����Ѵ�.
	const double epsilon = 1e-10;
	cout << epsilon << endl;
	cout << std::abs(d1 - d2) << endl;
	if (std::abs(d1 - d2) < epsilon)
		cout << "���� ����" << endl;
	else
		cout << "�ٸ���" << endl;

	return 0;
}