//�Լ��� �Լ��� ȣ���ϰ� �� �Լ��� �� �ٸ� �Լ��� ȣ���ϸ�
//���ÿ� ȣ�ⱸ���� ���̰� �ȴ�.
//���� ���� ���ʿ� �Լ��� ���ܸ� ������ ��� ������ ã�Եȴ�.
//
//�̶� ���õǰ��Ⱑ ���ȴ�.
//������ �������ϸ� �Ʒ� ������ ������� �ʴ´�.

//(...)�� �̿��ϸ� ��� ������ �� catch�Ѵ�.

//�Լ��� �ڿ� ���������� throw�� ���� �� �ִٰ� ǥ���� �� �ִ�.
//throw(�ڷ���) � �ڷ����� �־ (...)�� �νĵȴ�.
//�����ص��ȴ�.
#include <iostream>

using namespace std;

void last() {
	cout << "last Start" << endl;

	cout << "throw Start" << endl;

	throw - 1;
	//���õȴ�.
	cout << "end last" << endl;
}
void third() {
	cout << "third Start" << endl;

	last();
	//���ܹ߻� ������ �Ž���ö󰣴�.
	cout << "end third" << endl;
}
void second() {
	cout << "second Start" << endl;

	try
	{
		third();
		//catch�� double�̶� �������Ѵ�.
	}
	catch (double) {
		cerr << "second caught double exception" << endl;
	}
	cout << "end second" << endl;
}
void first() throw(double){
	cout << "first Start" << endl;

	try
	{
		second();
		//catch int���̶� catch�� ����ȴ�.
	}
	catch (int) {
		cerr << "first caught int exception" << endl;
	}
	cout << "end first" << endl;
}





//int main()
//{
//	cout << "Start" << endl;
//
//	try
//	{
//		first();
//	}
//	catch (int) {
//		cerr << "main caught int exception" << endl;
//	}
//	cout << "end" << endl;
//	return 0;
//}
//
