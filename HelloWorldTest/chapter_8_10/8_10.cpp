#include <iostream>

using namespace std;

int generateID() {
	static int s_id = 0;
	cout << &s_id << endl;
	return ++s_id;
}

class Something
{
public:
	static int s_value;
};

int Something::s_value = 1;

int main()
{
	//계속 늘어나는걸 볼 수 있다.
	cout << generateID() << endl;
	cout << generateID() << endl; 
	cout << generateID() << endl;

	Something st1;
	Something st2;

	st1.s_value = 2;

	cout << &st1.s_value << " " << st1.s_value << endl;
	cout << &st2.s_value << " " << st2.s_value << endl;
	return 0;
}