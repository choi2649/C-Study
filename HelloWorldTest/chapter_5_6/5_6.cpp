#include <iostream>

using namespace std;

int main() 
{
	int select = 0;

	do
	{
		cout << "selectNum : " << select << endl;
		cout << "1~5 select" << endl;
		cin >> select;
	} while (select < 0 || select > 5);

	return 0;
}