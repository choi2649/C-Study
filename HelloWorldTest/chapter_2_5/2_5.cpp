#include <iostream>
#include <iomanip>
#include <limits>

int main()
{
	using namespace std;


	//3.14 == 31.4 * 0.1
	//31.4e-1�� ����
	//e�� ������ e-1�� 10�� -1����
	float f(3.141592f);
	double d(3.141592);
	long double ld(3.141592);

	cout << sizeof(float) << endl;
	cout << sizeof(double) << endl;
	cout << sizeof(long double) << endl;

	cout << numeric_limits<float>::min() << endl;
	cout << numeric_limits<double>::min() << endl;
	cout << numeric_limits<long double>::min() << endl;


	//iomanip�� ��� ���ڸ� ���� �� �ִ�.
	cout << 1.0 / 3.0 << endl;
	cout << setprecision(16) << 1.0 / 3.0 << endl;

	//����� �� �ִ� ���� ����� ���� ����Ѵ�.
	d = 0.1;
	cout << d << endl;
	cout << setprecision(17) << d << endl;

	return 0;
}