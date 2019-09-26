#include <iostream>
#include <cmath>

using namespace std;

void addOne(int &y) {
	//Call by Value��� �ƹ��ǹ̰� ����.
	cout <<"y : " << y << " &y : " << &y << endl;
	y = y + 1;
}


void addOnePointer(int* &y) {
	//Call by Value��� �ƹ��ǹ̰� ����.
	cout << "y : " << y << " &y : " << &y << endl;
	y = y + 1;
}

//2���� ������ �� ����
void getSinCos(const double degrees, double &sin_out, double &cos_out) {
	static const double pi = 3.141592;
	double radians = degrees * pi / 180.0;
	sin_out = std::sin(radians);
	cos_out = std::cos(radians);
}

int main()
{
	//���ͷ��� �Ұ����ϴ�.
	//addOne(7);
	
	int x = 5;
	cout << "x : " << x << " &x : " << &x << endl;
	addOne(x);
	cout << "x : " << x << " &x : " << &x << endl;

	double sin_out (0.0);
	double cos_out (0.0);

	//sin_out,cos_out�� ������ �ΰ� ���� ��� ���� ����ȴ�.
	getSinCos(30.0, sin_out, cos_out);
	cout << "sin_out : " << sin_out << endl;
	cout << "cos_out : " << cos_out << endl;

	//������ reference������
	int *ptr = &x;
	cout << "ptr : " << ptr << " &ptr : " << &ptr << endl;
	addOnePointer(ptr);


	return 0;
}