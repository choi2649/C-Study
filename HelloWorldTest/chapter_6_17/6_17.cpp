#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	for (int num : arr) {
		cout << num << endl;
	}

	//값 변경하기
	for (int &num : arr) {
		num = 10;
	}

	for (int num : arr) {
		cout << num << endl;
	}
	
	vector<int> arr2 = { 1,2,3,4,5,6,7 };
	for (int num : arr2) {
		cout << num << endl;
	}


	return 0;
}