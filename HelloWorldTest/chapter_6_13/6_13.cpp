#include <iostream>

using namespace std;

int main()
{

	int value = 5;
	

	const int *ptr2 = &value;
	cout << *ptr2 << endl;
	//�������� �Ұ����ϴ�.
	//�����͸� �̿��� ���� �������� �ʰڴٴ� ǥ������ ������ �� �ִ�.
	//*ptr = 6;


	int value2 = 3;
	//�ּҿ� �ִ� ���� �ٲ��� �ʰڴٴ� ���̴�.
	ptr2 = &value2;
	cout << *ptr2 << endl;
	//����������.
	//*ptr2 = 6;

	//������ ��ü�� ����� �����
	int *const ptr = &value;
	//�ּҰ��� ������ �� ����.
	//ptr = &value2;

	//������ ���� �Ұ����ϴ�.
	const int *const ptr3 = &value;
	return 0;
}