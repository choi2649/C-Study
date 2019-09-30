#include <iostream>
#include "Cents.h"

//단순반복작업을 줄여주기 위한 것
//
//템플릿 ?
//여러가지 자료형에 대해 거의 비슷한 코드를 만드는것을 방지해준다.
//
//프로그래머가 할걸 컴파일러에게 넘겨준다.
//
//template<typename T>로 사용한다.
//
//내부로직은 auto 형추론과 비슷하지 않을까 ?
//
//템플릿은 구현이될려면 필요한 기능들이 구현 되어야한다.
//class도 가능하지만 > , << 연산자등이 구현되어야한다.

using namespace std;

template<typename T>

T getMax(T x, T y)
{
	return (x > y) ? x : y;
}
//아래 코드가 모두 구현되었다.
//int getMax(int x, int y)
//{
//	return (x > y) ? x : y;
//}
//
//double getMax(double x, double y)
//{
//	return (x > y) ? x : y;
//}
//
//float getMax(float x, float y)
//{
//	return (x > y) ? x : y;
//}


int main()
{
	cout << getMax(2, 3) << endl;
	cout << getMax(3.2, 2.3) << endl;
	cout << getMax(2.01f, 2.02f) << endl;
	cout << getMax('c', 'a') << endl;

	//클래스도 가능하다. >,<< operator 구현하였다.
	cout << getMax(Cents(3), Cents(5)) << endl;


	return 0;
}