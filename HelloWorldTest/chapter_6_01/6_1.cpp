#include <iostream>

using namespace std;

//����ü����
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
	//�迭�����
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
	//����ü �迭�����ϱ�
	Rectangle r[10];
	cout << sizeof(r) << endl;
	r[0].length = 1;
	r[0].width = 2;
	
	//cin >> sum;
	//int ab[sum] <-������ �ȉ� ����ϰ�ʹٸ� ��ũ�� #define�� ����Ѵ�. 
	return 0;
}