#include <iostream>
#include <string>

using namespace std;

class Student
{
private:
	int		m_id;
	string	m_name;

public:

	Student(const string& name)
		: Student(0,name) //위임생성자
	{

	}
	Student(const int& id, const string& name)
		:	m_id(id),
			m_name(name) 
	{
		//과거엔 초기화함수를 사용했다.
		init(id, name);
	}

	//초기화함수
	void init(const int& id, const string& name) {
		m_id = id;
		m_name = name;
	}

	void print() {
		cout << "id : " << m_id << " name : " << m_name << endl;
	}
	
};
int main()
{
	Student st1(0, "Choi");
	st1.print();

	//비추천
	Student st2("Choi");
	st2.print();
	return 0;
}