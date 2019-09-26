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
	//while,for모두 사용가능하다 break사용하기
	while (true) {
		
		if (count > 10) {
			break;
		}
		cout << count << endl;
		count++;
	}

	//break 확인 함수
	breakOrReturn();

	//continue사용하기
	for (int i = 0; i < 20; i++) {
		if (i % 2 == 0) {
			continue;
		}
		cout << i << endl;

		//아래로직과 같다.
		/*if (i % 2 == 0) {
			cout << i << endl;
		}*/
	}

	//continue사용하요 특정숫자 뺴고 출력하기
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