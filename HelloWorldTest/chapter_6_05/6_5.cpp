#include <iostream>

using namespace std;

int main() {

	//1���� 5������ �ִ� 3�� �ǹ�
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

	//���� �ڵ带 ������ �迭�� �����ϱ�
	int array[num_rows][num_columns] = //�ʱ�ȭ�ϱ�
	{
		{1,2,3,4,5},
		{6,7,8,9,10},
		{11,12,13,14,15}
	};
	//�������� �ʱ�ȭ �� ���� �ִ�.
	array[0][0] = 100;

	for (int i = 0; i < num_rows; i++) {
		for (int s = 0; s < num_columns; s++) {
			//�޸𸮰� 4byte�� �����ϴ°� Ȯ���� �� �ִ�.
			cout << array[i][s] << " &: " << (int)&array[i][s] << '\t';
		}
		cout << endl;
	}

	return 0;
}