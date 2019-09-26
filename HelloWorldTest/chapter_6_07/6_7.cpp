#include <iostream>
#include <typeinfo>

using namespace std;

int* nullPoint(int* a)
{
	return nullptr;
}

struct A {
	int a, b, c;
};

int main() {

	int x = 5;

	cout << x << endl;
	cout << &x << endl;
	cout << *(&x) << endl;

	//������ ����
	//������ �ּҸ� �����Ϳ� �־��ش�.
	//������ Ÿ�԰��� ������� �߸����̴�.
	//�ٸ� de-reference�Ҷ� Ÿ���� �˾ƾ��ϱ⿡ Ÿ���� �����ش�.
	int *ptr_x = &x;

	cout << ptr_x << endl;
	//de-reference ����Ű���ִ� �޸𸮾ȿ��ִ� �����͸� �����´�.
	cout << *ptr_x << endl;
	//���������� Ȯ�� �� �� �ִ�.
	cout << typeid(ptr_x).name() << endl;

	A a;
	A *ptr_a;

	//12Byte�̴�.
	cout << sizeof(a) << endl;
	//�����ʹ� 4Byte�̴�.
	cout << sizeof(ptr_a) << endl;

	return 0;
}