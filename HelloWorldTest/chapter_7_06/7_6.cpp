#include <iostream>

using namespace std;

inline int min(int x, int y) {
	return x > y ? y : x;
}

int main()
{
	cout << min(3,5) << endl;

	//inline함수는 아래 처럼 바로실행된다고 생각하면된다.
	cout << (3 > 5 ? 5 : 3) << endl;
	return 0;
}
