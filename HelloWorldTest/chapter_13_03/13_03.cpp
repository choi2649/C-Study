#include <iostream>
#include "MyArray.h"

//template <typename T, unsigned int T_SIZE>
//�������� ����Ѵ�.
//
//T_SIZE�� ������ Ÿ�ӿ� �����ȴ�.
//��, ���α׷��� ����ɶ� �����ȴ�.
//�����Ҵ��� �ƴϰԵȴ�.
//
//explicit instantiation�� ����ϱ� ��ƴ�
//���ڸ� �ϳ��ϳ���������Ѵ�.

using namespace std;

int main()
{
	MyArray<int,100> my_array;

	for (int i = 0; i < my_array.getLength(); i++)
	{
		my_array[i] = i * 10;
	}

	my_array.print();
	return 0;
}