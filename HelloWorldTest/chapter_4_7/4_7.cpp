#include <iostream>
#include <typeinfo>
#include <string>

using namespace std;

enum colorId {//����� ���� �ڷ���
	COLOR_BLACK,
	COLOR_RED,
	COLOR_BLUE,
	COLOR_GREEN,
};

enum feelId {//����� ���� �ڷ���
	HAPPY,
	JOY,
	//������� colorId�� feelId�� BLUE�� �̸��� ���ٸ� ����������.
	BLUE,
};

int getColor(int colorId)
{
	if (colorId == 0) {
		return 1;
	}
	else if (colorId == 1) {
		return 2;
	}
}

int main()
{
	colorId apple(COLOR_RED);
	cout << apple << endl;

	//ĳ�����ϱ�
	colorId id = static_cast<colorId>(3);
	cout << id << endl;
	//string���� �Է¹ޱ�(��õ���� �ʴ´�.)
	string str;
	getline(cin, str);
	if (str == "BLACK") {
		id = static_cast<colorId>(0);
	}
	cout << id << endl;

	return 0;
}