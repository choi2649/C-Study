#include<iostream>

using namespace std;
class Cents
{
private:
	int m_cents;
public:
	Cents(int a) {
		cout << "in" << endl;
		m_cents = a;
	}
	int getCents() {
		return m_cents;
	}
	void setCents(int a) {
		m_cents = a;
	}

	operator int() {
		cout << "cast here" << endl;
		return m_cents;
	}


};

class Dollar {

private:
	int m_dollar = 0;
public:
	Dollar(int a) :m_dollar(a) {}
	 operator Cents() {
		 cout << "Cents cast here" << endl;
		 return Cents(m_dollar * 100);
	}
};

void printInt(const int& value) {
	cout << value << endl;
}

int main()
{
	//달러 센트 형변환 예제
	Dollar d(100);

	cout << "1" << endl;
	Cents c(d);

	cout << "2" << endl;
	printInt(c);

	cout << "3" << endl;
	Cents c1(c);
	return 0;
}