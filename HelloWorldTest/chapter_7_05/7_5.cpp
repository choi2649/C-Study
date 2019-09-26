#include <iostream>
#include <tuple>

using namespace std;

int returnByValue(int a) {
	a += 4;
	int s = 0;
	cout << "value : " << &s << " s : " <<s << endl;
	return s;
}


int* returnByAddress(int size) {
	return new int[size];
}

int& returnByReference(int a) {
	int b = 10;
	cout << "reference : " << &b << " b : " << b << endl;
	return b;
}

tuple<int,double> getTuple()
{
	int a = 10;
	double b = 3.14;
	return make_tuple(a, b);
}

int main()
{
	//Return By Value
	int val = returnByValue(3);
	cout << "&val : " << &val << " val : " << val << endl;
	
	//동적할당 포인터 반환
	int *ptr = returnByAddress(3);
	cout << "ptr : " << ptr << endl;

	int rVal = returnByReference(3);
	//메모리 새로 할당받는다.
	cout << "메모리 새로 할당받음" << endl;
	cout << "&rVal : " << &rVal << " rVal : " << rVal << endl;
	cout << rVal << endl;
	cout << rVal << endl;
	
	int &rVal2 = returnByReference(3);
	cout << "&rVal2 : " << &rVal2 << " rVal2 : "<<rVal2 << endl;
	val = returnByValue(5);
	cout << "&val : " << &val << " val : " << val << endl;
	cout << "&rVal2 : " << &rVal2 << " rVal2 : " << rVal2 << endl;
	//튜플사용하기
	tuple<int, double> my_t = getTuple();
	cout << get<0>(my_t) << endl;
	cout << get<1>(my_t) << endl;

	//c++ 17 에서 사용가능
	//auto[a, b] = getTuple();
	return 0;
}