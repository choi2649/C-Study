#include <iostream>

using namespace std;

void add(int &a) {
	a = 30;
}

int add(int x, int y) {
	return x + y;
}

int add(unsigned int x, unsigned int y) {
	return x + y;
}
double add(double x, double y) {
	return x + y;
}

float add(float x, float y) {
	return x + y;
}

int main()
{
	cout << typeid(add(1, 3)).name() << " " << add(1, 3) << endl;
	cout << typeid(add(1u, 3u)).name() << " " << add(1, 3) << endl;
	cout << typeid(add(1.3, 1.5)).name() << " " << add(1.3, 1.5) << endl;
	cout << typeid(add(1.3f, 1.5f)).name() << " " << add(1.3, 1.5) << endl;

	cout  << (unsigned int)'a' << endl;

	return 0;
}