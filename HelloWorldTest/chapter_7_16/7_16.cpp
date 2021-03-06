#include <iostream>
#include <cstdarg>

using namespace std;

double findAverage(int count, ...) {
	double sum = 0;
	//파라미터로 꺼내올 리스트를 선언한다.
	va_list list;

	//리스트와 크기를 정해준다.
	va_start(list, count);

	for (int arg = 0; arg < count; arg++) {
		//리스트안에서 값을 꺼내온다.
		//intiger로 변환
		sum += va_arg(list, int);
	}
	//리스트를 마무리해준다.
	va_end(list);

	return sum / count;
}

int main()
{
	cout << findAverage(3, 1, 2, 3) << endl;
	//사용자가 지정한 카운트와 크기가 안맞으면 문제가 생긴다.
	cout << findAverage(100, 1, 2, 3) << endl;
	return 0;
}