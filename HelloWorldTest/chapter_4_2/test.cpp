#include <iostream>
#include "MyConst.h"

//�ʱ�ȭ�� ������Ѵ�.
extern int a2 = 0;
void getCppTest() 
{
	using namespace std;
	cout << "test : " << Constants::pi << " �ּ�: " << &Constants::pi << endl;
	
}