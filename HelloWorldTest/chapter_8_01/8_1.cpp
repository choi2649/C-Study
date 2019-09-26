#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Friend{
	//멤버
	string m_name;
	string address;
	int age;

	void printFriend() {
		cout << "name : " << m_name << " addr : " << address << " age : " << age << endl;
	}
};
class ClassFriend{
//접근제한자
public:
	//멤버
	string name;
	string address;
	int age;

	void printFriend() {
		cout << "name : " << name << " addr : " << address << " age : " << age << endl;
	}
};

//함수를 따로 만들어 각변수 파라미터로 입력하기
void printFriend(const string &name, const string &address, const int &age) {
	cout << "name : " << name << " addr : " << address << " age : " << age << endl;
}

//함수를 따로 만들어 구조체를 파라미터로 입력하기
void printFriend(Friend f) {
	cout << "name : " << f.m_name << " addr : " << f.address << " age : " << f.age << endl;
}

int main()
{
	Friend f1;
	f1.m_name = "CHOI";
	f1.address = "test";
	f1.age = 100;
	
	//파라미터로 다 직접 넣기는 귀찮다.
	printFriend(f1.m_name, f1.address, f1.age);

	//구조체로 더 간단하게 코드를 작성한다.
	Friend f2{ "KIM","TEST",133 };
	//구조체를 파라미터로 사용한다.
	printFriend(f2);

	//구조체 struct안에 print를 선언한다.
	f2.printFriend();

	//클래스로 생성하기
	ClassFriend f3{ "KIM","TEST",133 };
	f3.printFriend();

	//vector를 클래스로 선언해 쉽게 활용할 수 있다.
	vector<ClassFriend> friendVec;
	friendVec.push_back(f3);
	friendVec.push_back(ClassFriend{ "KIM1","TEST1",1 });
	for (int i = 0; i < friendVec.size(); i++) {
		friendVec[i].printFriend();
	}

	return 0;
}