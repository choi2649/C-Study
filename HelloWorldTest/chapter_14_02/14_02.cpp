//함수가 함수를 호출하고 그 함수가 또 다른 함수를 호출하면
//스택에 호출구조가 쌓이게 된다.
//만약 가장 안쪽에 함수가 예외를 던지면 어디서 받을지 찾게된다.
//
//이때 스택되감기가 사용된다.
//에러를 잡지못하면 아래 로직은 실행되지 않는다.

//(...)를 이용하면 모든 에러를 다 catch한다.

//함수명 뒤에 가시적으로 throw가 생길 수 있다고 표현할 수 있다.
//throw(자료형) 어떤 자료형을 넣어도 (...)로 인식된다.
//사용안해도된다.
#include <iostream>

using namespace std;

void last() {
	cout << "last Start" << endl;

	cout << "throw Start" << endl;

	throw - 1;
	//무시된다.
	cout << "end last" << endl;
}
void third() {
	cout << "third Start" << endl;

	last();
	//예외발생 스택을 거슬어올라간다.
	cout << "end third" << endl;
}
void second() {
	cout << "second Start" << endl;

	try
	{
		third();
		//catch가 double이라 잡지못한다.
	}
	catch (double) {
		cerr << "second caught double exception" << endl;
	}
	cout << "end second" << endl;
}
void first() throw(double){
	cout << "first Start" << endl;

	try
	{
		second();
		//catch int형이라 catch가 실행된다.
	}
	catch (int) {
		cerr << "first caught int exception" << endl;
	}
	cout << "end first" << endl;
}





//int main()
//{
//	cout << "Start" << endl;
//
//	try
//	{
//		first();
//	}
//	catch (int) {
//		cerr << "main caught int exception" << endl;
//	}
//	cout << "end" << endl;
//	return 0;
//}
//
