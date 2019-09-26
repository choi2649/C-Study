#include <iostream>

using namespace std;

int main()
{
	int *ptr = nullptr;
	int **ptrptr = nullptr;

	int value = 5;
	//value의 주소 ptr포인터에 저장
	ptr = &value;
	//ptr포인터의 주소 ptrptr포인터에 저장
	ptrptr = &ptr;

	cout << "==============================================" << endl;
	cout << "다중 포인터 기본예" << endl;
	cout << "value의 주소값 : " << &value << endl;
	cout << endl;

	cout << "ptr포인터의 자신의 주소값 : " << &ptr << endl;
	cout << "ptr포인터에 저장된 주소값 : " << ptr << endl;
	cout << "ptr포인터 de-reference : " << *ptr << endl;

	cout << endl;
	cout << "ptrptr포인터의 자신의 주소값 : " << &ptrptr << endl;
	cout << "ptrptr포인터에 저장된 주소값 : " << ptrptr << endl;
	cout << "ptrptr포인터 de-reference(ptr이 가지고있는 주소) : " << *ptrptr << endl;
	cout << "ptrptr포인터의 double de-reference : " << **ptrptr << endl;
	cout << endl;

	//배열과 포인터는 같다.
	int a[3] = { 1,2,3 };
	int *aa = a;
	cout << "==============================================" << endl;
	cout << "배열과 포인터 비교" << endl;
	cout << "==============================================" << endl;
	cout << "a[3]" << endl;
	for (int i = 0; i < 3; i++) {
		cout << "\t배열안의 값 a : " << a[i] << endl;
		cout << "\t배열의 주소 &a : " << &a[i] << endl;
		//cout << *ptrTest[i] << endl;
	}
	cout << "==============================================" << endl;
	cout << "*aa" << endl;
	for (int i = 0; i < 3; i++) {
		cout << "\t배열안의 값 aa : " << aa[i] << endl;
		cout << "\t배열의 주소 &aa : " << &aa[i] << endl;
		//cout << *ptrTest[i] << endl;
	}
	cout << "==============================================" << endl;

	cout << "1차배열 동적할당" << endl;
	cout << "*ptrTest = new int [3]" << endl;
	int *ptrTest = new int [3];
	for (int i = 0; i < 3; i++) {
		cout << "\t배열안의 주소 &ptrTest[i] : " << &ptrTest[i] << endl;
		cout << "\t배열안의 값 ptrTest[i] : " << ptrTest[i] << endl;
		ptrTest[i] = 3;
		cout << "\t배열안의 값 ptrTest[i] : " << ptrTest[i] << endl;
		//cout << *ptrTest[i] << endl;
	}
	cout << "==============================================" << endl;
	cout << "2차배열 동적할당" << endl;
	cout << "int *(*ptrTest2) = new int *[3]" << endl;
	
	int *(*ptrTest2) = new int *[3];
	cout << "ptrTest2 : " << ptrTest2 << endl;
	for (int i = 0; i < 3; i++) {
		cout << "\t배열안의 주소 &ptrTest2[i] : " << &ptrTest2[i] << endl;
		cout << "\t배열 동작할당 전 ptrTest2[i]: " << ptrTest2[i] << endl;
		//에러가난다
		//cout << "\t배열 동작할당 후 *ptrTest2[i]: " << *ptrTest2[i] << endl;
		//cout << *ptrTest2[i] << endl;
		ptrTest2[i] = new int[5]{};
		cout << "\t배열 동작할당 후 ptrTest2[i]: " << ptrTest2[i] << endl;
		cout << "\t배열 동작할당 후 *ptrTest2[i]: " << *ptrTest2[i] << endl;
	}
	cout << "==============================================" << endl;
	
	const int row = 3;
	const int col = 5;

	int (*arr2)[col] = new int [row][col];
	for (int i = 0; i < row; i++) {
		cout << "상수로 동적할당" << endl;
		cout << &arr2[i] << endl;
		for (int s = 0; s < col; s++) {
			cout << &arr2[i][s] << endl;
		}
	}
	cout << "==============================================" << endl;
	int **arr3 = new int *[row];
	for (int i = 0; i < row; i++) {
		cout << "다중포인터 주소" << endl;
		cout << &arr3[i] << endl;
	}
	cout << "==============================================" << endl;
	for (int i = 0; i < row; i++) {
		cout << "다중포인터 생성" << endl;
		arr3[i] = new int[5]{};
		for (int s = 0; s < col; s++) {
			cout << &arr3[i][s] << endl;
		}

	}
	cout << "==============================================" << endl;
	int arr[row][col] = 
	{ 
	{1,2,3,4,5},
	{},
	{} 
	};
	
	int *(*rows) = new int *[row];
	cout << "rows에 저장된 주소값 : " << rows << endl;
	cout << " *de-reference : " << *rows << endl;
	cout << "&포인터의 주소값 : " << &rows << endl;
	cout << endl;

	
	//초기화
	for (int r = 0; r < row; r++) {
		rows[r] = new int[col];
		cout << "초기화" << endl;
		cout << "&rows[" << r << "] : " << &rows[r] << endl;
		cout << "rows[" << r << "] : " << rows[r] << endl;
		int *a = &rows[r][0];
		cout << "a : " << a << endl;
		cout << "rows[" << r << "][0] : " << rows[r][0] << endl;

	}
	cout << endl;

	cout << "*de-reference : " << *rows << endl;
	cout << "**de-reference : " << **rows << endl;
	cout << "pointer : " << rows << endl;
	cout << endl;

	for (int r = 0; r < row; r++) {
		cout << "&rows["<< r <<"] : " << &rows[r] << endl;
		
		cout << endl;
		for (int i = 0; i < col; i++) {
			rows[r][i] = arr[r][i];
			cout << "&rows[" << r << "]["<< i <<"]" << &rows[r][i] << endl;
			cout << "rows[" << r << "][" << i << "]" << rows[r][i] << endl;
		}

		cout << "===================================" << endl;
	}
	//메모리 제거
	for (int r = 0; r < row; r++) {
		delete[] rows[r];
	}
	delete[] rows;

	//다중배열 사용하지 않기
	int *arrx2 = new int[row*col];
	for (int r = 0; r < row; r++) {
		for (int i = 0; i < col; i++) {
			cout << " i + col * r : " << i + col * r << endl;
			arrx2[i + col * r] = arr[r][i];
		}
	}

	
	for (int r = 0; r < row; r++) {
		for (int i = 0; i < col; i++) {
			cout << arrx2[i + col * r] << " ";
		}
		cout << endl;
	}


	delete[] arrx2;

	return 0;
}