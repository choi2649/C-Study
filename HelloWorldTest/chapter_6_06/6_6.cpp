#include <iostream>

using namespace std;

int main()
{
	char a[] = "Jack Jack";
	//"Jack Jack"�� ���ͷ��̴�.
	//�����ʹ� �޸��� �ּҸ� ����Ų��.
	//�޸𸮸� ������ΰ� �ϴ� ������ ����.
	//char *name = "Jack Jack";

	//��ȣ���� ���ó�� ����� �� �ִ�.
	const char *name = "Jack Jack";
	const char *name2 = "Jack Jack";

	//�����Ϸ��� ���ͷ��� ���� ��� ���� �޸𸮸� ����ϰ��Ѵ�.
	cout << (uintptr_t)name << endl;
	cout << (uintptr_t)name2 << endl;
	cout << &name << endl;
	cout << &name2 << endl;

	int int_arr[5] = { 0 };
	char ch[] = "char";
	const char *ch2 = "char2";

	//cout���� ���ڿ��� Ư���� ó���Ѵ�.
	cout << int_arr << endl;
	cout << ch << endl;
	cout << ch2 << endl;

	char s = 's';
	cout << &s << endl;

	return 0;
}