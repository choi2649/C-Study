#include <iostream>

using namespace std;

int main()
{
	bool a = true;
	bool b = false;

	cout << (a && b) << endl;
	cout << (a || b) << endl;

	//��𸣰� ��Ģ
	//�Ʒ�ó�� �й��� ��Ģ�� �����ʴ´�.
	!(a && b);
	!a && !b;
	//�Ʒ�ó�� �����ؾ��Ѵ�.
	!(a && b);
	!a || !b;
	
	int x = 5;
	int y = 7;

	cout << !x << endl;
	//������ ����� false�� �������� �۵������ʴ´�.
	if (x == 2 && y++ == 7)
	{

	}

	cout << y << endl;

	return 0;
}