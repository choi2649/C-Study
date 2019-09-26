#include <iostream>

using namespace std;

int main()
{
	int *ptr = nullptr;
	int **ptrptr = nullptr;

	int value = 5;
	//value�� �ּ� ptr�����Ϳ� ����
	ptr = &value;
	//ptr�������� �ּ� ptrptr�����Ϳ� ����
	ptrptr = &ptr;

	cout << "==============================================" << endl;
	cout << "���� ������ �⺻��" << endl;
	cout << "value�� �ּҰ� : " << &value << endl;
	cout << endl;

	cout << "ptr�������� �ڽ��� �ּҰ� : " << &ptr << endl;
	cout << "ptr�����Ϳ� ����� �ּҰ� : " << ptr << endl;
	cout << "ptr������ de-reference : " << *ptr << endl;

	cout << endl;
	cout << "ptrptr�������� �ڽ��� �ּҰ� : " << &ptrptr << endl;
	cout << "ptrptr�����Ϳ� ����� �ּҰ� : " << ptrptr << endl;
	cout << "ptrptr������ de-reference(ptr�� �������ִ� �ּ�) : " << *ptrptr << endl;
	cout << "ptrptr�������� double de-reference : " << **ptrptr << endl;
	cout << endl;

	//�迭�� �����ʹ� ����.
	int a[3] = { 1,2,3 };
	int *aa = a;
	cout << "==============================================" << endl;
	cout << "�迭�� ������ ��" << endl;
	cout << "==============================================" << endl;
	cout << "a[3]" << endl;
	for (int i = 0; i < 3; i++) {
		cout << "\t�迭���� �� a : " << a[i] << endl;
		cout << "\t�迭�� �ּ� &a : " << &a[i] << endl;
		//cout << *ptrTest[i] << endl;
	}
	cout << "==============================================" << endl;
	cout << "*aa" << endl;
	for (int i = 0; i < 3; i++) {
		cout << "\t�迭���� �� aa : " << aa[i] << endl;
		cout << "\t�迭�� �ּ� &aa : " << &aa[i] << endl;
		//cout << *ptrTest[i] << endl;
	}
	cout << "==============================================" << endl;

	cout << "1���迭 �����Ҵ�" << endl;
	cout << "*ptrTest = new int [3]" << endl;
	int *ptrTest = new int [3];
	for (int i = 0; i < 3; i++) {
		cout << "\t�迭���� �ּ� &ptrTest[i] : " << &ptrTest[i] << endl;
		cout << "\t�迭���� �� ptrTest[i] : " << ptrTest[i] << endl;
		ptrTest[i] = 3;
		cout << "\t�迭���� �� ptrTest[i] : " << ptrTest[i] << endl;
		//cout << *ptrTest[i] << endl;
	}
	cout << "==============================================" << endl;
	cout << "2���迭 �����Ҵ�" << endl;
	cout << "int *(*ptrTest2) = new int *[3]" << endl;
	
	int *(*ptrTest2) = new int *[3];
	cout << "ptrTest2 : " << ptrTest2 << endl;
	for (int i = 0; i < 3; i++) {
		cout << "\t�迭���� �ּ� &ptrTest2[i] : " << &ptrTest2[i] << endl;
		cout << "\t�迭 �����Ҵ� �� ptrTest2[i]: " << ptrTest2[i] << endl;
		//����������
		//cout << "\t�迭 �����Ҵ� �� *ptrTest2[i]: " << *ptrTest2[i] << endl;
		//cout << *ptrTest2[i] << endl;
		ptrTest2[i] = new int[5]{};
		cout << "\t�迭 �����Ҵ� �� ptrTest2[i]: " << ptrTest2[i] << endl;
		cout << "\t�迭 �����Ҵ� �� *ptrTest2[i]: " << *ptrTest2[i] << endl;
	}
	cout << "==============================================" << endl;
	
	const int row = 3;
	const int col = 5;

	int (*arr2)[col] = new int [row][col];
	for (int i = 0; i < row; i++) {
		cout << "����� �����Ҵ�" << endl;
		cout << &arr2[i] << endl;
		for (int s = 0; s < col; s++) {
			cout << &arr2[i][s] << endl;
		}
	}
	cout << "==============================================" << endl;
	int **arr3 = new int *[row];
	for (int i = 0; i < row; i++) {
		cout << "���������� �ּ�" << endl;
		cout << &arr3[i] << endl;
	}
	cout << "==============================================" << endl;
	for (int i = 0; i < row; i++) {
		cout << "���������� ����" << endl;
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
	cout << "rows�� ����� �ּҰ� : " << rows << endl;
	cout << " *de-reference : " << *rows << endl;
	cout << "&�������� �ּҰ� : " << &rows << endl;
	cout << endl;

	
	//�ʱ�ȭ
	for (int r = 0; r < row; r++) {
		rows[r] = new int[col];
		cout << "�ʱ�ȭ" << endl;
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
	//�޸� ����
	for (int r = 0; r < row; r++) {
		delete[] rows[r];
	}
	delete[] rows;

	//���߹迭 ������� �ʱ�
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