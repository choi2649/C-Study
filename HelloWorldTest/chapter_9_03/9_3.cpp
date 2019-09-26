#include <iostream>

using namespace std;
class Cents
{
private:
	int m_cents;
public:
	Cents(int cents = 0):m_cents(cents){}
	int getCents() const { return m_cents; }
	int &getCents() { return m_cents; }

	Cents operator - () const {
		return Cents(-m_cents);
	}

	bool operator ! () const
	{
		return (m_cents == 0) ? true : false;
	}

	friend std::ostream& operator << (std::ostream &out, const Cents &cents) {
		out << cents.m_cents;
		return out;
	}
};
int main()
{
	Cents c1(2);
	Cents c2(3);

	cout << c1 << endl;
	cout << -c1 << endl;

	cout << !Cents(0) << endl;
	cout << !Cents(1) << endl;


	return 0;
}