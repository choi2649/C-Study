#include <iostream>
#include <cstdlib>

using namespace std;

int main() 
{
	//출력 2번하는 프로그램
	cout << "test" << endl;
	//return은 return type에 맞춰서 값을줘야하지만 exit(숫자)는 상관없이 종료한다.
	exit(0);
	cout << "good" << endl;
	
	return 0;
}