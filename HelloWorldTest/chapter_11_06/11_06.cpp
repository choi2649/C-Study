#include <iostream>
using namespace std;
class Base {
protected:
	int m_public;

public:
	Base(const int & a) 
	:m_public(a){

	}
};

class Derived : public Base
{
public:
	Derived(const int & a) 
	:Base(a){
	
	}

	void setValue(int value) {
		Base::m_public + value;
	}
};
int main()
{

	return 0;
}