#include <iostream>

using namespace std;

int main()
{
	double x;

//���ư��� �����ϱ�
notGood :

	cout << "cin start" << endl;
	cin >> x;
	if (x < 0.0)//goto�� ������
		goto notGood;

	return 0;
}