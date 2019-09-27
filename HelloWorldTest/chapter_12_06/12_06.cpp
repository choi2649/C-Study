#include <iostream>

using namespace std;

//virtual 함수(가상함수)는 정적이 아닌 동적으로 실행된다.
//
//함수를 실행시 virtual펑션 테이블(포인터)을 찾고 테이블안에 함수 포인터를 사용한다.
//
//다형성 사용시 자식 클래스에도 virtual펑션 테이블(포인터)가 생긴다.
//다만 오버라이딩된 함수는 자식 테이블 함수 주소 값을 가진다.
//
//virtual을 사용하면 sizeof()로 확인시  포인터 메모리까지 할당되는 걸 볼 수 있다.
class Base
{
public:
	virtual void fun1() {};
	void fun2() {};
};

class Der : Base
{
public:
	void fun1() {};
	void fun3() {};

};

int main()
{
	cout << sizeof(Base) << endl;
	cout << sizeof(Der) << endl;
	return 0;
}