#include <iostream>

using namespace std;

int main()
{
	int a;
	while (true) {

		cin >> a;
		
		if (cin.fail()) {
			cin.clear();
			cin.ignore(32767, '\n');
			cout << "�ٽ��Է�" << endl;
		}
		else {
			break;
		}

	}
	cout << "a : " << a << endl;
	return 0;
}