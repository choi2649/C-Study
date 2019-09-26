#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double d1(100 - 99.99);
	double d2(10 - 9.99);
	//0.01이 출력된다.
	cout << d1 << endl;
	//0.01이 출력된다.
	cout << d2 << endl;
	cout << d1 - d2 << endl;

	
	if (d1 == d2)
		cout << "같다" << endl;
	else
		cout << "다르다" << endl;

	//오차의 한계를 사람의 손으로 지정한다.
	const double epsilon = 1e-10;
	cout << epsilon << endl;
	cout << std::abs(d1 - d2) << endl;
	if (std::abs(d1 - d2) < epsilon)
		cout << "거의 같다" << endl;
	else
		cout << "다르다" << endl;

	return 0;
}