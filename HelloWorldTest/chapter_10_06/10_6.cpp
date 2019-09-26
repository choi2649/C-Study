#include <iostream>
#include <vector>
#include <array>
#include <cassert>
#include <initializer_list>

using namespace std;

class IntArr
{
private:
	int m_length = 0;
	int *m_data = nullptr;

	int beforeLen = 0;
	int *beforeData = nullptr;

public:
	void ixCheck(const int & ix) {
		assert(ix <= m_length);
		assert(ix >= 0);
	}

	//Constructor
	IntArr() {}

	IntArr(const int & len) 
	{
		assert(len >= 0);
		cout << "Constructor : " << len << endl;
		m_length = len;
		m_data = new int[m_length];
	}

	IntArr(const initializer_list<int> & list) 
	{
		m_length = list.size();
		//cout << "initializer_list : " << m_length << endl;
		m_data = new int[m_length];
		int a = 0;
		for (auto & ele : list) {
			m_data[a] = ele;
			a++;
		}
	}
	//Destrurctor
	~IntArr() {
		delete[] this -> m_data;
	}

	//initialize()
	IntArr & operator = (const initializer_list<int> & list) {
		delete[] m_data;
		m_length = list.size();
		m_data = new int[m_length];
		
		if (m_data != nullptr) {
			int a = 0;
			for (auto & ele : list) {
				m_data[a] = ele;
				a++;
			}
		}
		else {
			m_data = nullptr;
		}
		return *this;
	}

	int getSize() {
		return m_length;
	}

	

	void copyArr() {
		beforeLen = m_length;
		beforeData = new int[beforeLen];
		for (int i = 0; i < beforeLen; i++) {
			beforeData[i] = m_data[i];
		}
	}
	//reset()
	void reset() {
		m_length = 0;
		m_data = nullptr;
	}

	//resize()
	void resize(const int & ix) {
		this -> ixCheck(ix);
		this -> copyArr();

		m_length = ix;
		m_data = new int[m_length];

		for (int i = 0; i < m_length; i++) {
			m_data[i] = beforeData[i];
		}

		delete[] beforeData;
	}
	//insertBefore(const int & value, const int & ix);
	void insertBefore(const int & value, const int & ix) {
		this->ixCheck(ix);
		this->m_data[ix] = value;
	}
	//remover(const int & ix);
	void remover(const int & ix) {
		this->ixCheck(ix);
		this->copyArr();

		m_length = beforeLen - 1;
		m_data = new int[m_length];

		int count = 0;
		for (int i = 0; i < beforeLen; i++) {
			if (i != ix) {
				m_data[count] = beforeData[i];
				count++;
			}
		}

		delete[] beforeData;

	}

	IntArr & push_back(const int &val) {
		this->copyArr();

		m_length = m_length + 1;
		m_data = new int[m_length];

		for (int i = 0; i < m_length; i++) {
	
			if (m_length - 1 == i) {
				m_data[i] = val;
			}
			else {
				m_data[i] = beforeData[i];
			}
			
		}
		delete[] beforeData;

		return *this;
	};

	friend ostream & operator << (ostream & out, IntArr &iA) {
		for (int i = 0; i < iA.m_length; i++) {
			
			out << iA.m_data[i] << " ";
		}
		return out;
	}
};

int main()
{
	IntArr arr{ 1,2,3,4 };
	cout << arr << endl;
	cout << arr.getSize() << endl;


	return 0;
}