#include <iostream>

//BSS ��Ʈ ó���� ����ٰ� �������� �������.
int g_i = 0;

//3.Stack frame second(),int x
int second(int x) {
	return 2 * x;
}

//2.Stack frame first(),int x,y
int first(int x) {
	int y = 3;
	return second(x + y);
}

void initArray() {
	//�޸𸮸� �ݳ����������� ����� ���ϴµ� �޸𸮿� �Ҵ�Ǿ��ִ�.
	int *ptr2 = new int[1000];
}
//1.Stack frame main(),int a,b
int main()
{
	using namespace std;
	int a = 1, b;
	b = first(a);
	cout << b << endl;

	//�����͵� ������.
	int *ptr = nullptr;
	//���޸𸮿� �����Ҵ�� �ּҸ� �����´�.
	ptr = new int[1000000];
	//���޸𸮿� �Ҵ�� �޸𸮸� �ݳ��Ѵ�.
	delete[] ptr;
	//�޸𸮹ݳ��ص� �ּҴ� �������ִ� �ʱ�ȭ���ش�.
	ptr = nullptr;

	initArray();

	return 0;
}