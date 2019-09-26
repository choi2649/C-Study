#include <iostream>

using namespace std;


enum Type {
	INT,
	FLOAT,
	CHAR,
};
int main()
{

	int i = 5;
	float f = 3.4f;
	char c = 'c';

	void *ptr = nullptr;

	ptr = &i;
	ptr = &f;
	ptr = &c;

	//자료형을 알 수 없어 연산할 수 없다.
	//cout << ptr + 1 << endl;
	ptr = &i;
	cout << *(static_cast<int*>(ptr)) << endl;
	
	return 0;
}