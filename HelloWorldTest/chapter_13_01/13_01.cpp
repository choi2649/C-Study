#include <iostream>
#include "Cents.h"

//�ܼ��ݺ��۾��� �ٿ��ֱ� ���� ��
//
//���ø� ?
//�������� �ڷ����� ���� ���� ����� �ڵ带 ����°��� �������ش�.
//
//���α׷��Ӱ� �Ұ� �����Ϸ����� �Ѱ��ش�.
//
//template<typename T>�� ����Ѵ�.
//
//���η����� auto ���߷а� ������� ������ ?
//
//���ø��� �����̵ɷ��� �ʿ��� ��ɵ��� ���� �Ǿ���Ѵ�.
//class�� ���������� > , << �����ڵ��� �����Ǿ���Ѵ�.

using namespace std;

template<typename T>

T getMax(T x, T y)
{
	return (x > y) ? x : y;
}
//�Ʒ� �ڵ尡 ��� �����Ǿ���.
//int getMax(int x, int y)
//{
//	return (x > y) ? x : y;
//}
//
//double getMax(double x, double y)
//{
//	return (x > y) ? x : y;
//}
//
//float getMax(float x, float y)
//{
//	return (x > y) ? x : y;
//}


int main()
{
	cout << getMax(2, 3) << endl;
	cout << getMax(3.2, 2.3) << endl;
	cout << getMax(2.01f, 2.02f) << endl;
	cout << getMax('c', 'a') << endl;

	//Ŭ������ �����ϴ�. >,<< operator �����Ͽ���.
	cout << getMax(Cents(3), Cents(5)) << endl;


	return 0;
}