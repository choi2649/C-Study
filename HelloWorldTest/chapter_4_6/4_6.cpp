#include <iostream>
#include <string>
#include <limits>

using namespace std;

int main()
{
	//���ڿ��� ����Ѵ�.
	//�Ʒ����ڴ� char[12]�� ��µȴ�.
	cout << "hello world" << endl;

	int age = 0;
	cin >> age;
	cout << age << endl;
	//cin ���� �ʱ�ȭ
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	const string str = "hello world";
	cout << str << endl;
	//�����Է�
	string num = "123";


	string num2 = "";
	//���ڿ� �Է�
	std::getline(std::cin, num);
	std::getline(std::cin, num2);

	//���ڿ� ���ϱ�(append)
	cout << num + num2 << endl;
	num += "test";

	//���ڿ� ����
	cout << num.length() << endl;
	return 0;
}