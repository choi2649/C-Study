#include <iostream>
#include <string>

using namespace std;
int a = 0;
int main()
{
	string s = "test test test";
	while (true)
	{
		//����ڿ��� ������ ���Ѵ�.
		cout << "input from 0 to " << s.size() - 1 << endl;
		int x;
		cin >> x;
		//����ڿ��� ������ ���ϴ°͸� �ƴ϶� ������ �س��´�.
		if (x <= s.size() - 1) {
			cout << "GOOD! " << s[x] << endl;
			break;
		}
		else {
			cout << "again" << endl;
		}

	}

	return 0;
}