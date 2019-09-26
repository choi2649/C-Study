#include <cassert>
#include <iostream>

using namespace std;

class MyString {
public:
	char *m_data = nullptr;
	int m_length = 0;

public:
	MyString(const char *source = "") {
		assert(source);
		m_length = std::strlen(source)+1;
		m_data = new char[m_length];

		for (int i = 0; i < m_length; i++) {
			m_data[i] = source[i];
		}
		m_data[m_length - 1] = '\0';
	}
	
	MyString(const MyString &source) {
		cout << "Copy constructor" << endl;
		m_length = source.m_length;

		if (source.m_data != nullptr) {
			//�ּ� �����Ҵ�
			m_data = new char[m_length];
			for (int i = 0; i < m_length; i++) {
				m_data[i] = source.m_data[i];
			}
		}
		else {
			m_data = nullptr;
		}
	}

	MyString& operator = (const MyString &source) {

		//shallow copy;
		//this->m_length = source.m_length;
		//this->m_data = source.m_data;
		
		cout << "Assignment operator" << endl;

		//�ڱ��ڽ��� ����������
		if (this == &source)
			return *this;
	
		//�̹� �޸𸮸� ������ ���� �� �ִ�.
		delete[] m_data;

		m_length = source.m_length;

		if (source.m_data != nullptr) {
			//�ּ� �����Ҵ�
			m_data = new char[m_length];
			for (int i = 0; i < m_length; i++) {
				m_data[i] = source.m_data[i];
			}
		}
		else {
			m_data = nullptr;
		}

	}

	~MyString() {
		delete[] m_data;
	}

	char* getString() { return m_data; }
	int getLength() { return m_length; }
};

int main()
{

	MyString hello("Hello");

	cout << (int*)hello.m_data << endl;
	cout << hello.getString() << endl;

	{
		//��������� �ּҰ��� �������ش�.
		MyString copy;
		copy = hello;
		cout << (int*)copy.m_data << endl;
		cout << copy.getString() << endl;
		//scope�� ������ �޸𸮸� �ݳ��Ѵ�.
	}

	cout << hello.getString() << endl;
	return 0;
}