#include <iostream>
#include <cmath>

using namespace std;

void addOne(int &y) {
	//Call by Value라면 아무의미가 없다.
	cout <<"y : " << y << " &y : " << &y << endl;
	y = y + 1;
}


void addOnePointer(int* &y) {
	//Call by Value라면 아무의미가 없다.
	cout << "y : " << y << " &y : " << &y << endl;
	y = y + 1;
}

//2개의 데이터 값 변경
void getSinCos(const double degrees, double &sin_out, double &cos_out) {
	static const double pi = 3.141592;
	double radians = degrees * pi / 180.0;
	sin_out = std::sin(radians);
	cos_out = std::cos(radians);
}

int main()
{
	//리터럴은 불가능하다.
	//addOne(7);
	
	int x = 5;
	cout << "x : " << x << " &x : " << &x << endl;
	addOne(x);
	cout << "x : " << x << " &x : " << &x << endl;

	double sin_out (0.0);
	double cos_out (0.0);

	//sin_out,cos_out을 참조해 두개 변수 모두 값이 변경된다.
	getSinCos(30.0, sin_out, cos_out);
	cout << "sin_out : " << sin_out << endl;
	cout << "cos_out : " << cos_out << endl;

	//포인터 reference보내기
	int *ptr = &x;
	cout << "ptr : " << ptr << " &ptr : " << &ptr << endl;
	addOnePointer(ptr);


	return 0;
}