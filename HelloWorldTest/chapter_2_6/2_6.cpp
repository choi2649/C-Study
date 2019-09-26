#include <iostream>

bool isEqual(int a, int b) {
	return a == b ? true : false;
}

int main()
{
	using namespace std;

	//bool 초기화 다른초기화와 같다.
	//copy initialization
	bool b1 = true;
	//direct initializaion
	bool b2(false);
	//uniform initializaion
	bool b3{ true };


	//1,0으로 출력
	cout << b1 << endl;
	cout << b2 << endl;

	//!를 붙이면 반대로 출력
	cout << !b1 << endl;
	cout << !b2 << endl;

	//true,false 출력
	cout << std::boolalpha;
	cout << b1 << endl;
	cout << b2 << endl;

	if (false)
		cout << "1" << endl;
	//if문이 true가 아닐경우
	else
		cout << "0" << endl;
	
	//기본 짝수 홀수 확인하기
	int a(0);
	cin >> a;
	//a % 2 == 0 조건이 true라면 if문이 작동된다.
	if (a % 2 == 0) {
		cout << "짝수다" << endl;
	}
	else {
		cout << "홀수다" << endl;
	}


	return 0;
}