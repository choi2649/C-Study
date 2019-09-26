#include <iostream>
#include <string>

using namespace std;
int a = 0;
int main()
{
	string s = "test test test";
	while (true)
	{
		//사용자에게 범위를 말한다.
		cout << "input from 0 to " << s.size() - 1 << endl;
		int x;
		cin >> x;
		//사용자에게 범위를 말하는것만 아니라 방어까지 해놓는다.
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