#include<iostream>
#include <cstdint>

int main()
{
	using namespace std;

	//2Byte�� ����
	int16_t i(5);
	//1Byte�� ���� char����
	//Ư���� ���� �ƴϸ� ��������
	int8_t myInt = 65;

	//A�� ��µȴ�.
	cout << myInt << endl;

	return 0;
}