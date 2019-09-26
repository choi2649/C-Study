#include <iostream>
#include <string>
#include <limits>

using namespace std;

int main()
{
	//문자열을 출력한다.
	//아래글자는 char[12]로 출력된다.
	cout << "hello world" << endl;

	int age = 0;
	cin >> age;
	cout << age << endl;
	//cin 버퍼 초기화
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	const string str = "hello world";
	cout << str << endl;
	//숫자입력
	string num = "123";


	string num2 = "";
	//문자열 입력
	std::getline(std::cin, num);
	std::getline(std::cin, num2);

	//문자열 더하기(append)
	cout << num + num2 << endl;
	num += "test";

	//문자열 길이
	cout << num.length() << endl;
	return 0;
}