#include <iostream>

using namespace std;

inline int min(int x, int y) {
	return x > y ? y : x;
}

int main()
{
	cout << min(3,5) << endl;

	//inline�Լ��� �Ʒ� ó�� �ٷν���ȴٰ� �����ϸ�ȴ�.
	cout << (3 > 5 ? 5 : 3) << endl;
	return 0;
}
