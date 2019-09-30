#include <iostream>
#include "MyArray.h"

//클래스 템플릿
//
//include 하면 그 Code가 통째로 복사된것 처럼 동작한다.
//
//.h 구현 후 그 클래스의.cpp를 구현하게되면 템플릿사용할때 오류가 난다.
//
//그럴땐
//explicit instantiation해줘야한다.
//
//함수적용
//template void 클래스<자료형>::함수()
//
//클래스적용
//template class 클래스명<자료형>

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