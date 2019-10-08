#include <iostream>

using namespace std;
//예외 클래스와 상속
//사용자 정의 자료형(예외 클래스 사용하기)
//자료형만으로 정확한 예외를 표현하긴 힘들다.

//상속으로 Exception 클래스를 구현하면 객체잘림형상이 생긴다.
//자식클래스가 catch순서에서 위로 올라가면 간단히 처리된다.
//Exception 결과를 받은 catch가 다시 던져줄 수 있다.
//catch에서 throw해줄때 throw;로 해주면 객체잘림 현상을 막을 수 있다.
class Exception
{
public:
	void report()
	{
		cerr << "Exception report" << endl;
	}

};

class ArrayException : public Exception
{
public:
	void report()
	{
		cerr << "Array Exception report" << endl;
	};

};
class MyArray
{
private:
	int m_arr[5];

public:
	int & operator [] (const int & index)
	{
		//if (index < 0 || index >= 5) throw - 1;
		if (index < 0 || index >= 5) throw ArrayException();

		return m_arr[index];
	}

};
void doSomething() {
	MyArray ma;
	try {
		ma[100];
	}
	catch (const int & a) {
		cerr << "Exception : " << a << endl;
	}
	catch (ArrayException & e) {
		e.report();
		throw e;
	}
	catch (Exception & e) {
		e.report();
	}
	
}
int main()
{
	try
	{
		doSomething();
	}
	catch (ArrayException e) 
	{
		e.report();
	};

	return 0;
}