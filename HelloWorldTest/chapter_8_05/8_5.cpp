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
		: Student(0,name) //���ӻ�����
	{

	}
	Student(const int& id, const string& name)
		:	m_id(id),
			m_name(name) 
	{
		//���ſ� �ʱ�ȭ�Լ��� ����ߴ�.
		init(id, name);
	}

	//�ʱ�ȭ�Լ�
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

	//����õ
	Student st2("Choi");
	st2.print();
	return 0;
}