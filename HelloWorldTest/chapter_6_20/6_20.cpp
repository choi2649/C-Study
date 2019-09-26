#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

void arrCheck(const array<int, 5> arr) {
	cout << &arr << endl;
	for (int i = 0; i < arr.size(); i++) {
		cout << arr[i] << endl;
		cout << arr.at(i) << endl;
	}
}

void arrRefCheck(const array<int,5> &arr) {
	cout << &arr << endl;
	for (int i = 0; i < arr.size(); i++) {
		cout << arr[i] << endl;
		cout << arr.at(i) << endl;
	}
}

int main()
{
	//int array2[5] = {};

	array<int, 5> arr = {1,10,3,7,5};
	cout << "arrSize() : " << arr.size() << endl;
	cout <<"main() : "<< &arr << endl;
	arrCheck(arr);
	arrRefCheck(arr);

	//sort
	std::sort(arr.begin(), arr.end());
	arrCheck(arr);
	arrRefCheck(arr);

	//sort ¿ª¼ø
	std::sort(arr.rbegin(), arr.rend());
	arrCheck(arr);
	arrRefCheck(arr);

	return 0;
}