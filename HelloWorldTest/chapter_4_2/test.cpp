#include <iostream>
#include "MyConst.h"

//초기화를 해줘야한다.
extern int a2 = 0;
void getCppTest() 
{
	using namespace std;
	cout << "test : " << Constants::pi << " 주소: " << &Constants::pi << endl;
	
}