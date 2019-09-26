#include <iostream>

using namespace std;

//구조체선언
struct Rectangle
{
	int length;
	int width;
};

enum StudentName
{
	Jack,	//0
	Dash,	//1
	Violet,	//2
};

int main() 
{
	//배열만들기
	int a[3] = { 1,2,3 };

	cout << sizeof(a) << endl;
	a[Jack] = 1;
	a[Dash] = 2;
	a[Violet] = 3;

	int sum = 0;
	for (int i = 0; i < sizeof(a) / 4; i++) {
		sum += a[i];
		cout << a[i] << endl;
	}
	cout << sum << endl;

	cout << sizeof(Rectangle) << endl;
	//구조체 배열선언하기
	Rectangle r[10];
	cout << sizeof(r) << endl;
	r[0].length = 1;
	r[0].width = 2;
	
	//cin >> sum;
	//int ab[sum] <-형식은 안됌 사용하고싶다면 매크로 #define을 사용한다. 
	return 0;
}