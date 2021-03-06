#include <iostream>
#include <cmath>
#include <limits>

using namespace std;

int main()
{
	short s = 32767;
	int i = 1;
	long l = 1;
	long long ll = 1;

	//2출력
	//00000000 00000001
	cout << sizeof(s) << endl;
	//최대출력수 보기 32767
	cout << pow(2, sizeof(short) * 8 - 1) - 1 << endl;
	cout << numeric_limits<short>::max() << endl;
	cout << numeric_limits<short>::min() << endl;
	cout << numeric_limits<short>::lowest() << endl;

	s = s + 1;
	//-32768이 출력된다. 
	//이 현상을 overflow라고 한다.
	//2진수로 표현할 수 있는 숫자를 넘어가면 가장 작은 수로 변경된다.
	cout << s << endl;


	//2진수로 표현할 수 있는 가장 작은 숫자를 넘어가면 가장큰 수로 변경된다.
	s = numeric_limits<short>::min();
	s = s - 1;
	//32767이 출력된다.
	cout << s << endl;


	unsigned int i2 = -1;
	//overflow가 발생하여 큰 숫자가 출력된다.
	cout << i2 << endl;
	
	//int형으로 저장한다.
	int i3 = 22 / 4;
	cout << i3 << endl;


	//4출력
	cout << sizeof(i) << endl;
	//4출력
	cout << sizeof(l) << endl;
	//8출력
	cout << sizeof(ll) << endl;

	return 0;
}