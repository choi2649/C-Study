#include <iostream>

using namespace std;

//��ũ�ζ���Ѵ�. ���� ��ũ�δ� �빮�ڷ� ����Ѵ�.
//���� �ڵ忡�� ��ũ�θ� ������ �� �����ͷ� �����Ų��.
#define MY_NUMBER 9
//���ڵ� ��밡�� �ϴ�.
//#define MY_NUMBER "Test"

//#define �������� ���
//����� �߻������ �ʴ´�
#define MAX(a, b) ((a > b) ? a : b)

//���ǿ� ���� �������ϴ� ����̴�.
//define ���Ǵ� cpp���� �ȿ����� ����ȴ�.
#define LIKE_APPLES

void getTest()
{
	//��ó���� �����ϱ����� ���ȴ�.
	//������,MAX� �ü���� Ȯ���Ҷ� ���ȴ�.
	//��ó���� �ȿ����� ������ �����۵��� ���Ѵ�.
	#ifdef LIKE_APPLES
		cout << "apples" << endl;
	#endif

	#ifndef LIKE_APPLES
		cout << "Orange" << endl;
	#endif
}

int main() 
{
	getTest();

	cout << MAX(1, 3) << endl;

	return 0;
}