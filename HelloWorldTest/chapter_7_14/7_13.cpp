#include <iostream>
#include <cassert>
#include <array>

using namespace std;

void getArrData(array<int, 5> &arr, const int &idx) {
	//콘솔창에 오류내용이 출력된다.
	assert(idx >= 0);
	assert(idx <= arr.size() - 1);

	cout << arr[idx] << endl;
}

int main() {

	const int num = 5;
	//반드시 맞아야하는 데이터를 입력한다.
	assert(num == 5);
	//컴파일타임에 결정되는 변수만 저장가능하다.
	static_assert(num == 5,"GOOD");

	array<int, 5> arr{ 1,2,3,4,5 };
	getArrData(arr, 100);

	return 0;
}