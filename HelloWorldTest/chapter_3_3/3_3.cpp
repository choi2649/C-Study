#include <iostream>

using namespace std;

int add(int a, int b)
{
	return a + b;
}

int main()
{

	int c = 6;

	//아래형식으로 코딩하면 안된다.
	//cout << add(c, ++c) << endl;

	int y = 2;

	cout << add(c, ++y) << endl;

	return 0;
}