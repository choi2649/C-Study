#include <iostream>

using namespace std;

class Cents
{
private:
	int m_cents;

public:
	Cents(int cent): m_cents(cent){}
	int getCents() const { return m_cents; }
	//friend Cents operator +(const Cents &c1, const Cents &c2);
	Cents operator +(const Cents &c2) {
		cout << this << endl;
		cout << "this->m_cents : " << this->m_cents << endl;
		cout << "c2.m_cents : " << c2.m_cents << endl;

		return Cents(this->m_cents + c2.m_cents);
	}
};

////friend선언
//Cents operator +(const Cents &c1, const Cents &c2) {
//	return Cents(c1.m_cents + c2.m_cents);
//}
//
////외부함수
//Cents operator +(const Cents &c1, const Cents &c2) {
//	return Cents(c1.getCents() + c2.getCents());
//}

int main()
{
	Cents c1(4);
	cout << "c1 : " << &c1 << endl;
	Cents c2(5);
	cout << "c2 : " << &c2 << endl;

	cout << (c1 + c2 + Cents(10)+Cents(11)).getCents() << endl;

	return 0;

}