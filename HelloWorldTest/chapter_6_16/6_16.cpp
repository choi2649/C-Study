#include <iostream>

using namespace std;

struct Person {
	int age;
	double weight;
};

int main()
{
	Person person;
	cout << "addr : " << &person << endl;
	//��� ���� ������
	person.age = 10;
	

	//���� �ּҰ� ��������
	Person &ref = person;
	ref.age = 20;
	cout << "addr ref : " << &ref << endl;

	Person *ptr = &person;
	cout << "addr &ptr : " << &ptr << endl;
	cout << "addr ptr : " << ptr << endl;
	ptr->age = 30;
	//()�� �� ������Ѵ�.
	(*ptr).age = 40;

	Person ref2 = *ptr;
	cout << "addr ref2 : " << &ref2 << endl;
	ref2.age = 50;

	return 0;
}