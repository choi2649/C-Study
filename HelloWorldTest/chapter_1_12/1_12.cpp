#include <iostream>
#include "getTest.h"
//getTest.h안에 add.h가 선언되어있다.
//헤더가드가 없으면 에러가 난다.
#include "add.h"

using namespace std;

int main()
{
	cout << "test" << endl;
	getTest();

	return 0;
}