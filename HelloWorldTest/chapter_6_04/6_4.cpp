#include <iostream>

using namespace std;

int main()
{
	const int length = 5;

	int aArr[length] = { 3,5,2,1,4 };
	/*
	정렬순서
	3,5,2,1,4
	1,5,2,3,4
	1,2,5,3,4
	1,2,3,5,4
	1,2,3,4,5
	*/
	for (int i = 0; i < length-1; i++) {
		int temp = 0;
		int arr = i;
		for (int s = 0; s < length - i; s++) {
			cout << aArr[arr] << " > " << aArr[s + i] << endl;
			if (aArr[arr] > aArr[s + i]) {
				arr = s + i;
				
			}
		}
		{
			temp = aArr[arr];
			aArr[arr] = aArr[i];
			aArr[i] = temp;
		}
	}

	cout << "sort" << endl;
	for (int i = 0; i < length; i++) {
		cout << aArr[i] << endl;
	}

	return 0;
}