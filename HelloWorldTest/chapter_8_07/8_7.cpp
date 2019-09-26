#include <iostream>

using namespace std;

class Simple
{
private:
	int m_id;
public:
	Simple(const int& id)
		:m_id(id) {
		cout <<"this : "<< this << endl;
		//->포인터에 값을 넣는것
		
	}
	void setId(int id) {
		this -> m_id = id;
	}
	int getId() {
		return m_id;
	}
	//체이닝 함수
	Simple& nextId() {
		m_id += 1;
		return *this;
	}
	void print() {
		cout << "nextId : " << m_id << endl;
	}
};
int main()
{
	Simple s1(1), s2(2);
	s1.setId(3);
	s2.setId(4);
	s2.print();
	/*
	체이닝함수 동작의 이해
	Simple& sim = s2.nextId();
	sim = s2.nextId();
	sim = s2.nextId();*/
	s2.nextId().nextId().nextId().print();

	cout << "&s1 : " << &s1 << " &s2 : " << &s2 << endl;
	return 0;
}