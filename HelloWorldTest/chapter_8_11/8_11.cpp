#include <iostream>

using namespace std;

class Something
{
public:
	int a;
private:
	static int m_value;
	int p_value = 1024;
public:
	Something() {
	}
	
	static int getValue() {
		return m_value+1;
	}

	int getPValue() {
		return this -> p_value + this ->m_value;
	}

};

int Something::m_value = 1024;

int main()
{
	cout << Something::getValue << endl;
	cout << Something::getValue() << endl;

	Something st;
	cout << st.getValue() << endl;

	//¸â¹öÇÔ¼ö
	int(Something::*ptr)() = &Something::getPValue;
	//Á¤Àû¸â¹öÇÔ¼ö
	int (*ptr2)() = Something::getValue;

	cout << "=============" << endl;
	cout << (st.*ptr)() << endl;
	cout << (*ptr2)() << endl;

	int value = 5;
	Something *ptr3 = &st;
	ptr3->a = 3;
	cout << (*ptr3).a << endl;

	return 0;
}