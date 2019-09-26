#include <iostream>
#include <cstdio>

int main()
{
	//using namespace std;
	//{}안에서 std::를 사용하지 않아도 된다.
	using namespace std;
	int x = 1024;

	//std란 namespace안에 cout함수를 사용한다.
	std::cout << "Test" << std::endl;
	std::cout << "x is " << x << std::endl;
	std::cout << "tab" << "\t" << "test" << std::endl;
	std::cout << "tab2" << "\t" << "test" << std::endl;

	//using namespace std;를 해놨기에 std::는 생략되어도 된다.
	//입력받는방법 cin
	cin >> x;
	cout << "x change " << x << endl;

	return 0;
}
