#include <iostream>

//����Ÿ���� auto�� �����ߴ�.
auto add(int a, int b)
{
	return a + b;
}

//-> double������� ������ �� �ִ�.
auto add(double a, double b) -> double
{
	return a + b;
}

int main()
{
	using namespace std;

	//int a = 123;
	//int��
	auto a = 123;
	//double��
	auto b = 23.4;

	//�Լ� ���� ���� auto�� ���������ϴ�.
	auto result = add(1, 3);
	
	return 0;
}