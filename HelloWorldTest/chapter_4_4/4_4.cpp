#include <iostream>

//리턴타입을 auto로 설정했다.
auto add(int a, int b)
{
	return a + b;
}

//-> double방식으로 설정할 수 있다.
auto add(double a, double b) -> double
{
	return a + b;
}

int main()
{
	using namespace std;

	//int a = 123;
	//int형
	auto a = 123;
	//double형
	auto b = 23.4;

	//함수 리턴 값도 auto로 설정가능하다.
	auto result = add(1, 3);
	
	return 0;
}