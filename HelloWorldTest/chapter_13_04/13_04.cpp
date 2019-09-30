#include <iostream>
#include "Storage.h"

using namespace std;

template <typename T>

T getMax(T x, T y)
{
	return (x > y) ? x : y;
}

//Æ¯¼öÈ­
template<>
char getMax(char x, char y)
{
	cout << "chars" << endl;
	return (x > y) ? x : y;
}
int main()
{
	cout << getMax(1,3) << endl;
	cout << getMax<double>(1, 3) << endl;
	cout << getMax('a', 'A') << endl;

	Storage<int> st(10);
	Storage<double> st2(10);

	st.pirnt();
	st2.pirnt();
	return 0;
}