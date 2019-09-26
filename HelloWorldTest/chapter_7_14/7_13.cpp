#include <iostream>
#include <cassert>
#include <array>

using namespace std;

void getArrData(array<int, 5> &arr, const int &idx) {
	//�ܼ�â�� ���������� ��µȴ�.
	assert(idx >= 0);
	assert(idx <= arr.size() - 1);

	cout << arr[idx] << endl;
}

int main() {

	const int num = 5;
	//�ݵ�� �¾ƾ��ϴ� �����͸� �Է��Ѵ�.
	assert(num == 5);
	//������Ÿ�ӿ� �����Ǵ� ������ ���尡���ϴ�.
	static_assert(num == 5,"GOOD");

	array<int, 5> arr{ 1,2,3,4,5 };
	getArrData(arr, 100);

	return 0;
}