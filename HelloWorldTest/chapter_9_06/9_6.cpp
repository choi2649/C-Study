#include <iostream>
#include <cassert>

using namespace std;

class IntList
{
private:
	int m_list[10]{ 0 };
public:
	void setItem(int index, int value)
	{
		assert(index >= 0);
		assert(index < 10);
		m_list[index] = value;
	}

	int getItem(int index) {
		return m_list[index];
	}
	int * getList() {
		return m_list;
	}

	int & operator [] (const int index) {
		assert(index >= 0);
		assert(index < 10);

		return m_list[index];
	}
	const int & operator [](const int index) const {
		return m_list[index];
	}
};

int main()
{
	IntList list;
	list.setItem(11, 4);
	cout << list.getItem(3) << endl;
	list.getList()[3] = 5;
	cout << list.getItem(3) << endl;
	list[11] = 8;
	cout << list.getItem(3) << endl;

	return 0;
}