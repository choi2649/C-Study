#include <iostream>
#include <string>

using namespace std;

void print(int x = 0) {
	cout << x << endl;
}
void print(string  x) {
	cout << x << endl;
}
void print(char x = ' ') {
	cout << x << endl;
}

int main()
{
	print(10);
	return 0;
}