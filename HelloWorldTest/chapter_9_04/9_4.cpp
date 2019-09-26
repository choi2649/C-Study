#include <iostream>
#include <vector>
#include <random>

using namespace std;

class Cents
{
private:
	int m_cents;
public:
	Cents(int cents = 0) :m_cents(cents) {}
	int getCents() const { return m_cents; }
	int &setCents() { return m_cents; }

	Cents operator - () const {
		return Cents(-m_cents);
	}

	friend bool operator == (const Cents &c1, const Cents &c2)
	{
		return (c1.m_cents == c2.m_cents) ? true : false;
	}

	friend bool operator < (const Cents &c1, const Cents &c2)
	{
		return (c1.m_cents < c2.m_cents) ? true : false;
	}

	friend std::ostream& operator << (std::ostream &out, const Cents &cents) {
		out << cents.m_cents;
		return out;
	}
};

int main()
{
	Cents c1(2);
	Cents c2(2);

	if (c1 == c2) {
		cout << "Equal" << endl;
	}

	vector<Cents> arr(20);

	for (unsigned i = 0; i < 20; ++i) {
		arr[i].setCents() = i;
	}

	std::random_shuffle(begin(arr), end(arr));

	for (auto &e : arr) {
		cout << e << endl;
	}

	std::sort(begin(arr), end(arr));
	
	cout << "============" << endl;

	for (auto &e : arr) {
		cout << e << endl;
	}

	return 0;
}