#include <iostream>
#include <cassert>
#include <initializer_list>

using namespace std;

class IntArray {
private:
	unsigned m_length = 0;
	int *m_data = nullptr;

public:
	IntArray(unsigned length)
		:m_length(length) {
		m_data = new int[m_length];
	}

	IntArray(const std::initializer_list<int> & list) 
	:IntArray(list.size()){
		cout << "initializer_list" << endl;
		int count = 0;
		for (auto & element : list) {
			m_data[count] = element;
			++count;
		}
	}

	IntArray& operator =(const std::initializer_list<int> & list)
	{
		delete[] m_data;

		m_length = list.size();
		m_data = new int[m_length];
		cout << "= initializer_list" << endl;

		if (m_data != nullptr) {
			int count = 0;
			for (auto & element : list) {
				m_data[count] = element;
				++count;
			}
		}
		else {
			m_data = nullptr;
		}

		return *this;
	}

	~IntArray() {
		delete[] this->m_data;
	}

	friend ostream & operator << (ostream &out, IntArray &iA) {
		for (unsigned i = 0; i < iA.m_length; i++) {
			out << iA.m_data[i] << " ";
		}
		out << endl;
		return out;
	}
};

int main()
{
	auto il = { 1,2,3 };

	IntArray iA{ 12,3,3 };
	cout << &iA << endl;
	cout << iA << endl;
	iA = { 1,2,3,4,5,6 };
	cout << &iA << endl;
	cout << iA << endl;
	return 0;
}