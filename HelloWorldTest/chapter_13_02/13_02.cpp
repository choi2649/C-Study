#include <iostream>
#include "MyArray.h"

//Ŭ���� ���ø�
//
//include �ϸ� �� Code�� ��°�� ����Ȱ� ó�� �����Ѵ�.
//
//.h ���� �� �� Ŭ������.cpp�� �����ϰԵǸ� ���ø�����Ҷ� ������ ����.
//
//�׷���
//explicit instantiation������Ѵ�.
//
//�Լ�����
//template void Ŭ����<�ڷ���>::�Լ�()
//
//Ŭ��������
//template class Ŭ������<�ڷ���>

using namespace std;

int main()
{
	MyArray<double> my_array(10);

	for (int i = 0; i < my_array.getLength(); i++) {
		my_array[i] = i * 0.5;
	}

	my_array.print();
	return 0;
}