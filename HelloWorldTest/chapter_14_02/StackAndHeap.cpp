#include <iostream>
int g_i = 0;//ó������� ����ʰ� �������.

//Stack,Heap�� ��ǻ�Ͱ� �޸𸮸� ����ϴ� ����̴�.
//�޸𸮴� ���� ����(5����)�� �ִ�.(Segment)
//Code

//Data(initailized data segment)���� ������ ����,��������

//Bss(uninitailized data segment):0���� �ʱ�ȭ�� ����,��������

//Stack : ���� �״´�. ������ ���ư����� ����Ǿ��ִ�.
//����: ������ �������� ũ�Ⱑ �۴�. �� ,Size�� �۴� (ū ���ú����� �Ҵ� ���Ѵ�)
//�װ� �ٷ� Stack Overflow

//Heap : Stack�� �����ϱ����� ���
//����� ū ��� � �޸𸮿� �Ҵ����� �� �� ����.

//����°�� Stack�� ���δ�.
int second(int x)
{
	return 2 * x;
}

//�ι�°�� Stack�� ���δ�.
int first(int x) {
	int y = 3;
	int *ptr2 = new int[1000];
	//delete�� �����ָ� �޸� ������ �����.
	//��� ����ǰ��ִٸ� �� ������ ����ȴٸ� �޸𸮴� ��������.
	delete[] ptr2;
	return second(y + x);
}

//Stack�� ù��°�� ���δ�.
int main()
{
	using namespace std;

	int a = 1, b;
	//first�Լ� ȣ��
	b = first(a);
	cout << b << endl;

	//Heap ����ϱ�
	int *ptr = nullptr;
	ptr = new int[1000000];

	//Heap�� �Ҵ�� �޸𸮸� �ݳ��Ѵ�.
	delete[] ptr;
	//ptr�� �ּҰ��� �������ִ�.
	//�翬�ϴ�.�����ʹ� Ư�� �ּҰ��� �����ϴ� �����̴�.
	ptr = nullptr;

	return 0;
}