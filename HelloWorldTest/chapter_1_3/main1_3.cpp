#include <iostream>

int main()
{
	//x라는 정수형(interger)변수를 선언했다.
	//x도 객체이다. x는 숫자를 담을수있는공간을 메모리에 차지하고 있다.
	//x 메모리의 이름이다.
	int x;
	//x = 123 <- assignment 대입해준다.
	//프로그래밍에서 = 는 보통 오른쪽값을 왼쪽에 대입해준다.
	//즉, x란 변수가 가르키고있는 메모리 공간에 123을 대입해준다.
	x = 123;

	//x의 주소의 대입되어있는 값 출력
	std::cout << x << std::endl;
	//x의 주소 출력(메모리주소)
	std::cout << &x << std::endl;

	//Left-values int x 는 메모리의 주소를 가지고있다.
	//Right-values 123는 프로그래머가 임시로 저장된 주소를 가져오기가 어렵다.
	int a = 123;
	//왼쪽 a는 Left-values이나 오른쪽 a는 a의 값을 임시로 복사해온 right-values로 본다.
	a = a + 123;

	//int z = 123;
	//z라는 변수가 메모리에 할당받을때 바로 집어넣어준다.
	//메모리에 garbage 값이 있기에 초기화 해준다.
	//initialization
	int z = 123;
	
	//x = 123 <- assignment 대입해준다.
	z = 123;

	//initialization와 assignment같아보이지만 다르다.
	//ex)int z(123);으로 사용할 수 있다.
	//initialization의 개념은 생성자,소멸자,오버로딩,오버라이딩에 사용된다.
	
	return 0;
}