#include <iostream>

bool isEqual(int a, int b) {
	return a == b ? true : false;
}

int main()
{
	using namespace std;

	//bool �ʱ�ȭ �ٸ��ʱ�ȭ�� ����.
	//copy initialization
	bool b1 = true;
	//direct initializaion
	bool b2(false);
	//uniform initializaion
	bool b3{ true };


	//1,0���� ���
	cout << b1 << endl;
	cout << b2 << endl;

	//!�� ���̸� �ݴ�� ���
	cout << !b1 << endl;
	cout << !b2 << endl;

	//true,false ���
	cout << std::boolalpha;
	cout << b1 << endl;
	cout << b2 << endl;

	if (false)
		cout << "1" << endl;
	//if���� true�� �ƴҰ��
	else
		cout << "0" << endl;
	
	//�⺻ ¦�� Ȧ�� Ȯ���ϱ�
	int a(0);
	cin >> a;
	//a % 2 == 0 ������ true��� if���� �۵��ȴ�.
	if (a % 2 == 0) {
		cout << "¦����" << endl;
	}
	else {
		cout << "Ȧ����" << endl;
	}


	return 0;
}