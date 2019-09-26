#include <iostream>

using namespace std;

int main()
{
	//정적 할당 배열은 컴파일될때 배열의 크기가 고정되어야한다.
	const int length = 5;
	//정적 할당 배열
	int arr[length] = { 1,2,3,4,5 };
	
	int dlen;
	cin >> dlen;

	//동적 할당 배열 받기
	int *ptrArr = new int[dlen];

	for (int i = 0; i < dlen; i++) {
		cout << "i : " << i << endl;
		ptrArr[i] = i;
		cout << (uintptr_t)&ptrArr[i] << endl;
		cout << ptrArr[i] << endl;
	}

	delete[] ptrArr;
	ptrArr = nullptr;

	return 0;
}