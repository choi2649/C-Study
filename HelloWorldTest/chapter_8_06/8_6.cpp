#include <iostream>

using namespace std;

class Simple
{
private:
	int m_id;
public:
	Simple(const int& id)
		:m_id(id) {
		cout << "Constructor" << m_id << endl;
	}

	~Simple() {
		cout << "Destructor" << m_id << endl;
	}
};

class IntArr
{
private:
	int *m_arr = nullptr;
	int m_length = 0;

public:
	IntArr(const int length_in) {
		m_length = length_in;
		m_arr = new int(length_in);
	}
	IntArr& chaning() {
		return *this;
	}
	//소멸자 Destructor
	//지역을 벗어날때 자동으로 실행된다.
	~IntArr() {
		if (m_arr != nullptr) {
			delete[] m_arr;
		}
	}

	int size() {
		return m_length;
	}
};
int main()
{
	//{}지역을 벗어날때 자동으로 소멸자가 자동으로 실행
	Simple *s1 = new Simple(0);
	Simple s2(1);
	Simple s3(2);
	
	delete s1;

	IntArr arr(3);
	arr.chaning().chaning().chaning().size();

	return 0;
}