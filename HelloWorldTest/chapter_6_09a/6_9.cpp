#include <iostream>

using namespace std;

int main()
{
	int val = 7;
	int *ptr = &val;

	cout << uintptr_t(ptr) << endl;
	cout << uintptr_t(ptr + 1) << endl;
	cout << uintptr_t(ptr - 1) << endl;

	int arr[] = { 9,7,5,3,1 };

	int *ptrArr = arr;

	for (int i = 0; i < 5; i++) {
		cout << arr[i] << " addr : " << (uintptr_t)&arr[i] << endl;
		cout << *(ptrArr + i) << " addr : " << (uintptr_t)(ptrArr + i) << endl;
	}

	char name[] = "Choi";

	const int n_name = sizeof(name) / sizeof(name[0]);
	cout << "n_name : " << n_name << endl;

	for (int i = 0; i < n_name; i++) {
		cout << *(name + i);
	}

	return 0;
}