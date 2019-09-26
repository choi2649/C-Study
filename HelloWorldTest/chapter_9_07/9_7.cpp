#include <iostream>
#include <cassert>

using namespace std;
class Acc {
private:
	int m_conut = 0;
public:
	Acc operator () (int i) {
		m_conut += i;
		cout << m_conut << endl;
		return *this;
	}

	Acc &print() {
		cout << "m_count" << endl;
		return *this;
	}
};
int main()
{
	Acc acc;
	acc.print().print().print().print();
	acc(10).print();
	
	return 0;
}
