#include <iostream>

using namespace std;

int pow(int b, int e)
{
	int result = 1;
	for (int count = 0; count < e; count++) {
		cout << result << " * " << b << " = "<< endl;
		result *= b;
	}
	return result;
}

int main()
{
	cout << "test" << endl;
	for (int i = 0; i < 10; i++)//iteration
	{
		cout << i << endl;
	}

	//제곱구하기
	pow(2, 4);

	//여러개 변수 선언하기
	for (int i = 0,s = 0; (i + s) < 100; i++, s += 5) {
		cout << "i : " << i;
		cout << "\ts : " << s << endl;
	}//end of for i

	//2중 for문사용
	//구구단 사용
	for (int i = 2; i < 10; i++) {
		cout << i << endl;
		for (int s = 1; s < 10; s++) {
			cout << "\t" << i << " * " << s << " = " << i * s << endl;
		}
	}
	return 0;
}