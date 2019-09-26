#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Friend{
	//���
	string m_name;
	string address;
	int age;

	void printFriend() {
		cout << "name : " << m_name << " addr : " << address << " age : " << age << endl;
	}
};
class ClassFriend{
//����������
public:
	//���
	string name;
	string address;
	int age;

	void printFriend() {
		cout << "name : " << name << " addr : " << address << " age : " << age << endl;
	}
};

//�Լ��� ���� ����� ������ �Ķ���ͷ� �Է��ϱ�
void printFriend(const string &name, const string &address, const int &age) {
	cout << "name : " << name << " addr : " << address << " age : " << age << endl;
}

//�Լ��� ���� ����� ����ü�� �Ķ���ͷ� �Է��ϱ�
void printFriend(Friend f) {
	cout << "name : " << f.m_name << " addr : " << f.address << " age : " << f.age << endl;
}

int main()
{
	Friend f1;
	f1.m_name = "CHOI";
	f1.address = "test";
	f1.age = 100;
	
	//�Ķ���ͷ� �� ���� �ֱ�� ������.
	printFriend(f1.m_name, f1.address, f1.age);

	//����ü�� �� �����ϰ� �ڵ带 �ۼ��Ѵ�.
	Friend f2{ "KIM","TEST",133 };
	//����ü�� �Ķ���ͷ� ����Ѵ�.
	printFriend(f2);

	//����ü struct�ȿ� print�� �����Ѵ�.
	f2.printFriend();

	//Ŭ������ �����ϱ�
	ClassFriend f3{ "KIM","TEST",133 };
	f3.printFriend();

	//vector�� Ŭ������ ������ ���� Ȱ���� �� �ִ�.
	vector<ClassFriend> friendVec;
	friendVec.push_back(f3);
	friendVec.push_back(ClassFriend{ "KIM1","TEST1",1 });
	for (int i = 0; i < friendVec.size(); i++) {
		friendVec[i].printFriend();
	}

	return 0;
}