#include <iostream>
#include <cmath>
#include <typeinfo>

int main()
{
	using namespace std;

	//int형으로 저장된다.
	int a = 123.4;
	cout << a << endl;
	cout << typeid(4.0).name() << endl;

	float f = 123.4f;
	double d = f;
	d = 123.4567891011;
	f = d;

	int i = 30000;
	char c = i;
	//제대로 저장이 안된다.
	cout << static_cast<int>(c) << endl;

	//명시적형변환
	//c++스타일
	int i2 = int(4.0);
	//c스타일
	i2 = (int)4.0;
	//다른방법
	i2 = static_cast<int>(4.0);
	return 0;
}
