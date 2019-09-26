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
	//�Ҹ��� Destructor
	//������ ����� �ڵ����� ����ȴ�.
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
	//{}������ ����� �ڵ����� �Ҹ��ڰ� �ڵ����� ����
	Simple *s1 = new Simple(0);
	Simple s2(1);
	Simple s3(2);
	
	delete s1;

	IntArr arr(3);
	arr.chaning().chaning().chaning().size();

	return 0;
}