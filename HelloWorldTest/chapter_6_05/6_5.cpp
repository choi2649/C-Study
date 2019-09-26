#include <iostream>

using namespace std;

int main() {

	//1층에 5개집이 있는 3층 건물
	const int num_rows = 3;
	const int num_columns = 5;
	for (int i = 0; i < num_rows; i++) {
		cout << i << " -------------------------------------------" << endl;
		for (int s = 0; s < num_columns; s++) {
			cout << "[rows:" << i << ']' << '[' << s << ']' << '\t';
		}
		cout << endl;
		cout << " -------------------------------------------" << endl;
	}

	//위에 코드를 다차원 배열로 생성하기
	int array[num_rows][num_columns] = //초기화하기
	{
		{1,2,3,4,5},
		{6,7,8,9,10},
		{11,12,13,14,15}
	};
	//형식으로 초기화 할 수도 있다.
	array[0][0] = 100;

	for (int i = 0; i < num_rows; i++) {
		for (int s = 0; s < num_columns; s++) {
			//메모리가 4byte씩 증가하는걸 확인할 수 있다.
			cout << array[i][s] << " &: " << (int)&array[i][s] << '\t';
		}
		cout << endl;
	}

	return 0;
}