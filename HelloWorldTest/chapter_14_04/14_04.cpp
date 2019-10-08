#include <iostream>
#include <exception>
#include <string>

using namespace std;

//std::exception 기본라이브러리에 포함되어있다.
//여러 자료형의 기본적인 에러가 구현되어 있다.

class CustomException : public exception
{
public:
	const char * what() const noexcept override
	{
		return "Custom exception";
	}
};

int main() {
	try
	{
		string s;
		//상속받아 에러메시지 구현하기
		//throw CustomException();
		s.resize(-1);

		//exception에 에러던져주기
		//throw runtime_error("Bad thing happened");
	}
	catch (length_error & e)
	{
		//자식클래스
		cout << "Error Catch" << endl;
		cerr << e.what() << endl;
	}
	catch (exception & e)
	{
		//자식클래스 찾기
		cout << typeid(exception).name() << endl;
		cerr << e.what() << endl;
	}
	return 0;
}