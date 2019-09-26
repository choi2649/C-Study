#include <iostream>
#include <string>

using namespace std;

class Something
{
public:
	int m_value = 0;
	string m_StrValue = "default";

	//복사 컨스트럭터
	Something(const Something& st_in) {
		cout << "copy Constructor" << endl;
		m_value = st_in.m_value;
	}
	Something() {
		cout << "Constructor" << endl;
	}

	void setValue(int value) {
		m_value = value;
	}
	//const를 선언해주어야한다.
	int getValue() const {
		return m_value;
	}
	
	string& getStrValue() {
		return m_StrValue;
	}

	const string& getStrValue() const{
		return m_StrValue;
	}

};

void print(Something st) {
	cout << &st << endl;
	cout << st.getValue() << endl;
}

void print2(const Something& st) {
	cout << &st << endl;
	cout << st.getValue() << endl;
}

int main()
{
	const Something something;
	//상수이기 떄문에 에러가 난다.
	//something.setValue(1);
	//클래스안 멤버함수에 const를 선언해주어야한다.
	something.getValue();

	cout << "=====================================" << endl;
	//복사 컨스트럭터 작동
	Something something2;
	cout << &something2 << endl;
	print(something2);

	cout << "=====================================" << endl;
	//const 파라미터
	cout << &something2 << endl;
	print2(something2);

	cout << "=====================================" << endl;

	//string 테스트
	something2.getStrValue() = "Test";
	cout << something2.getStrValue() << endl;

	const Something something3;
	//변경불가
	//something3.getStrValue() = "TEST";
	cout << something3.getStrValue() << endl;


	return 0;
}