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
	//멤버 선택 연산자
	person.age = 10;
	

	//참조 주소값 가져오기
	Person &ref = person;
	ref.age = 20;
	cout << "addr ref : " << &ref << endl;

	Person *ptr = &person;
	cout << "addr &ptr : " << &ptr << endl;
	cout << "addr ptr : " << ptr << endl;
	ptr->age = 30;
	//()를 꼭 해줘야한다.
	(*ptr).age = 40;

	Person ref2 = *ptr;
	cout << "addr ref2 : " << &ref2 << endl;
	ref2.age = 50;

	return 0;
}