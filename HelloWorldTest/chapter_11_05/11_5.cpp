#include <iostream>

using namespace std;

class Base {
public:
	int m_public;

	int funPublic() {
		return 0;
	}
protected:
	int m_protected;
	int funProtected() {
		return 0;
	}
private:
	int m_private;
};

class Derived : public Base
{
public:
	Derived() {
		m_public = 123;
		m_protected = 123;
		//m_private = 123;
		funPublic();
		funProtected();
	}
};

class Derived2 : protected Base
{
public:
	int a;
	Derived2() {
		m_public = 123;
		m_protected = 123;
		//m_private = 123;
		a = funPublic();
		a = funProtected();
	}
protected:
	int a2 = 0;
};

class Derived3 : private Base
{
public:
	int a;

	Derived3() {
		m_public = 123;
		m_protected = 123;
		//m_private = 123;
		a = funPublic();
		a = funProtected();
	}

};

class GrandChild : public Derived3 {
public:
	GrandChild() {
		//m_public; 불가능하다
		cout << a << endl;
	}
};

int main()
{
	Derived der;

	der.m_public = 123;
	//base.m_protected = 123;
	//base.m_private = 123;
	
	//protected 상속
	Derived2 der2;
	//der.m_public = 123;

	//private 상속
	Derived3 der3;
	//der.m_public = 123;


	return 0;
}