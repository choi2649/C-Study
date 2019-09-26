#include <iostream>
#include <array>
#include <functional>

using namespace std;

int func() {
	return 5;
}

void printNumbers(const array<int, 10>& myArr,bool print_even) {
	for (int a : myArr) 
	{
		if (print_even && a % 2 == 0) {
			cout << a << " ";
		}
		else if (!print_even && a % 2 == 1) {
			cout << a << " ";
		}
	}
	cout << endl;
}

bool isEven(const int& number) {
	
	if (number % 2 == 0) return true;
	else return false;
}
bool isOdd(const int& number) {
	if (number % 2 != 0) return true;
	else return false;
}

void printNumbersFunP(const array<int, 10>& myArr, bool (*check_fcn)(const int&)) {
	for (int a : myArr)
	{
		if (check_fcn(a)==true) {
			cout << a << " ";
		}
	}
	cout << endl;
}

void printNumbersFun(const array<int, 10>& myArr, function<bool(const int&)> funct) {
	for (int a : myArr)
	{
		if (funct(a) == true) {
			cout << a << " ";
		}
	}
	cout << endl;
}

int main()
{
	//함수의 주소가 출력된다.
	cout << func << endl;
	
	//함수포인터 설정하기
	int (*funcPtr)() = func;

	//func()함수와 메모리 주소도 같고 같이 사용한다.
	cout << funcPtr << " " << funcPtr() << " " << &funcPtr << endl;

	//함수포인터 사용하기전 홀수 짝수 출력 함수
	std::array<int, 10> myArr{ 1,2,3,4,5,6,7,8,9,10 };
	printNumbers(myArr, true);
	printNumbers(myArr, false);

	//함수포인터 파라미터로 사용하기(함수명)
	printNumbersFunP(myArr, isEven);
	printNumbersFunP(myArr, isOdd);

	std::function<bool(const int&)> funct = isEven;
	//fuction사용해서 함수포인터 파라미터로 이용하기(포인터명)
	printNumbersFun(myArr, funct);
	funct = isOdd;
	printNumbersFun(myArr, funct);

	return 0;
}