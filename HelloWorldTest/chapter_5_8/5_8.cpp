#include <iostream>

using namespace std;

void breakOrReturn()
{
	while (true)
	{
		char ch;
		cin >> ch;
		if (ch == 'b')
			break;
		
		if (ch == 'r')
			return;
	}
	cout << "break or return?" << endl;
}

int main()
{
	int count = 0;
	//while,for��� ��밡���ϴ� break����ϱ�
	while (true) {
		
		if (count > 10) {
			break;
		}
		cout << count << endl;
		count++;
	}

	//break Ȯ�� �Լ�
	breakOrReturn();

	//continue����ϱ�
	for (int i = 0; i < 20; i++) {
		if (i % 2 == 0) {
			continue;
		}
		cout << i << endl;

		//�Ʒ������� ����.
		/*if (i % 2 == 0) {
			cout << i << endl;
		}*/
	}

	//continue����Ͽ� Ư������ ���� ����ϱ�
	int i = 0;
	do
	{
		if (i == 5) {
			continue;
		}
		cout << i << endl;
	} while (i++ < 10);

	return 0;
}