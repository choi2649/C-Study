#include <iostream>
#include "MyArray.h"

//template <typename T, unsigned int T_SIZE>
//형식으로 사용한다.
//
//T_SIZE가 컴파일 타임에 결정된다.
//즉, 프로그램이 실행될때 결정된다.
//동적할당이 아니게된다.
//
//explicit instantiation는 사용하기 어렵다
//숫자를 하나하나정해줘야한다.

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