#include <iostream>
#include <string>

using namespace std;

struct Person
{
	int id;
	double	height;
	float	weight;
	int		age;
	//�⺻�� ���ǵ� �����ϴ�.
	string	name = "me";
	//����ü�� �Լ� ����
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

	//���1��������
	double	height;
	float	weight;
	int		age;
	string	name;
	//���2��������
	double	height2;
	float	weight2;
	int		age2;
	string	name2;
	
	//����ü������ �ξ� �����ϴ�.
	Person person1{1, 2.0,100.0,20,"me" };
	Person person2{2, 2.0,100.0,20,"you" };

	//����ü�� �����־� ���ڷ� �����⵵ ���ϴ�.
	printPersonInfo(person1);
	//����ü�ȿ� �Լ� ���� ����ϱ�
	person1.printPersonInfo();

	//����ü �����ϱ�
	Person copyP = person1;
	cout << &person1 << " copyP addr : " << &copyP << endl;

	//���Byte�˾ƿ���
	cout << sizeof(copyP) << endl;

	family f;
	f.me = person1;
	f.me.printPersonInfo();

	typedef int person_t;
	

	return 0;
}