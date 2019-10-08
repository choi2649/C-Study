#include <iostream>
//예외처리의 위험성과 단점
//예외처리를 하다보면 메모리 누수가 생길 수 있다.
//스마트 포인터를 이용하면 해결할 수 있다.

//소멸자 안에서 throw를 구현하는건 금시시 된다.

//큰 프로젝트안에 자주사용되는 중요한 반복루프안에 
//try catch를 사용하면 안된다.
//밖에서 둘러싼다.

//모든 오류를 예외처리로 잡으면 안된다.
//오류와 예외처리는 다르다.
using namespace std;

class A {
public:
	~A() {
		//사용하면 안된다.
		//throw "ttt";
	}
};

int main()
{
	try
	{
		int *arr = new int[10000];
		//스마트 포인터
		unique_ptr<int> up_i(arr);
		throw "error";

		//스마트포인터가 있을시 필요없다.
		//delete[] arr;
	}
	catch (...)
	{

	}
	return 0;
}