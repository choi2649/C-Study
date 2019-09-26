#include <iostream>
#include <vector>

using namespace std;

int main()
{
	std::vector<int> array;
	
	std::vector<int> array2 = { 1,2,3,4,5 };
	cout << array2.size() << endl;

	vector<int> arr = { 1,2,3,4 };
	for (auto &a : arr) {
		cout << a << endl;
	}

	return 0;
}