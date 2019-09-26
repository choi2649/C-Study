#include <iostream>
#include <string>

using namespace std;

struct Person
{
	int id;
	double	height;
	float	weight;
	int		age;
	//기본값 정의도 가능하다.
	string	name = "me";
	//구조체안 함수 구현
	void printPersonInfo()
	{
		cout << height << endl;
		cout << weight << endl;
		cout << age << endl;
		cout << name << endl;
	}
};

struct family {
	Person me;
	Person mom;
};

void printPersonInfo(Person p)
{
	cout << p.height << endl;
	cout << p.weight << endl;
	cout << p.age << endl;
	cout << p.name << endl;
}

int main()
{

	//사람1정보구현
	double	height;
	float	weight;
	int		age;
	string	name;
	//사람2정보구현
	double	height2;
	float	weight2;
	int		age2;
	string	name2;
	
	//구조체구현이 훨씬 간단하다.
	Person person1{1, 2.0,100.0,20,"me" };
	Person person2{2, 2.0,100.0,20,"you" };

	//구조체로 묶여있어 인자로 보내기도 편하다.
	printPersonInfo(person1);
	//구조체안에 함수 구현 출력하기
	person1.printPersonInfo();

	//구조체 대입하기
	Person copyP = person1;
	cout << &person1 << " copyP addr : " << &copyP << endl;

	//사용Byte알아오기
	cout << sizeof(copyP) << endl;

	family f;
	f.me = person1;
	f.me.printPersonInfo();

	typedef int person_t;
	

	return 0;
}