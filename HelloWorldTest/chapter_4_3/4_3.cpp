#include <iostream>

namespace a
{
	int a1(2);
}
namespace b
{
	int a1(3);
}

int main()
{
	//std::를 생략할 수 있다.
	using namespace std;
	//아래처럼 하나만 불러와 사용할 수 있다.
	//using std::cout;

	//cout << "hello" << endl;

	//아래 두namespace에 똑같은 이름의 변수가 있다.
	//사용할려면 영역을 분리해서 사용하자
	{
		using namespace a;
		cout << a1 << endl;
	}
	{
		using namespace b;
		cout << a1 << endl;
	}
	

	return 0;
}