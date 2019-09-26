#include <iostream>
#include <fstream>

using namespace std;

class Point
{
private:
	double m_x, m_y, m_z;

public:
	Point(double x, double y, double z)
		:m_x(x), m_y(y), m_z(z) {

	}
	double getX() {
		return m_x;
	}
	double getY() {
		return m_y;
	}
	double getZ() {
		return m_z;
	}

	void Print() {
		cout << m_x << " " << m_y << " " << m_z;
	}

	friend std::ostream& operator << (std::ostream &out, const Point &point) {
		out << point.m_x+1.0 << " " << point.m_y+1.0 << " " << point.m_z + 1.0;
		return out;
	}
	//const아님
	friend std::istream& operator >> (std::istream &in, Point &point) {
		in >> point.m_x >> point.m_y >> point.m_z;
		return in;
	}
};

int main()
{
	Point p1(3.2, 3.1, 3.5);
	cout << "p1 : " << &p1 << endl;
	Point p2(1.2, 1.1, 1.5);
	cout << "p2 : " << &p2 << endl;

	//print함수사용
	p1.Print();
	cout << " ";
	p2.Print();
	cout << endl;

	cout << p1 << " " << p2 << endl;
	//파일출력
	ofstream of("out.txt");
	of << p1 << " " << p2 << endl;
	of.close();


	//파일입력
	ifstream is("out.txt");
	is >> p1 >> p2;
	is.close();

	cout << p1 << " " << p2 << endl;
	return 0;
}