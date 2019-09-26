#include <iostream>
#include <iomanip>
#include <limits>

int main()
{
	using namespace std;


	//3.14 == 31.4 * 0.1
	//31.4e-1는 같다
	//e는 십진수 e-1은 10의 -1제곱
	float f(3.141592f);
	double d(3.141592);
	long double ld(3.141592);

	cout << sizeof(float) << endl;
	cout << sizeof(double) << endl;
	cout << sizeof(long double) << endl;

	cout << numeric_limits<float>::min() << endl;
	cout << numeric_limits<double>::min() << endl;
	cout << numeric_limits<long double>::min() << endl;


	//iomanip로 출력 숫자를 정할 수 있다.
	cout << 1.0 / 3.0 << endl;
	cout << setprecision(16) << 1.0 / 3.0 << endl;

	//출력할 수 있는 가장 가까운 수를 출력한다.
	d = 0.1;
	cout << d << endl;
	cout << setprecision(17) << d << endl;

	return 0;
}