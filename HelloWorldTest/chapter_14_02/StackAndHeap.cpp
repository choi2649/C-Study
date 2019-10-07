#include <iostream>
int g_i = 0;//처음생겼다 가장늦게 사라진다.

//Stack,Heap은 컴퓨터가 메모리를 사용하는 방법이다.
//메모리는 여러 구역(5가지)이 있다.(Segment)
//Code

//Data(initailized data segment)값이 정해진 정적,전역변수

//Bss(uninitailized data segment):0으로 초기화된 정적,전역변수

//Stack : 무언가 쌓는다. 실행후 돌아갈곳도 저장되어있다.
//단점: 빠르고 좋은것은 크기가 작다. 즉 ,Size가 작다 (큰 로컬변수를 할당 못한다)
//그게 바로 Stack Overflow

//Heap : Stack을 보완하기위해 사용
//싸이즈가 큰 대신 어떤 메모리에 할당할지 알 수 없다.

//세번째로 Stack에 쌓인다.
int second(int x)
{
	return 2 * x;
}

//두번째로 Stack에 쌓인다.
int first(int x) {
	int y = 3;
	int *ptr2 = new int[1000];
	//delete를 안해주면 메모리 누수가 생긴다.
	//계속 실행되고있다면 또 여러번 실행된다면 메모리는 가득찬다.
	delete[] ptr2;
	return second(y + x);
}

//Stack에 첫번째로 쌓인다.
int main()
{
	using namespace std;

	int a = 1, b;
	//first함수 호출
	b = first(a);
	cout << b << endl;

	//Heap 사용하기
	int *ptr = nullptr;
	ptr = new int[1000000];

	//Heap에 할당된 메모리를 반납한다.
	delete[] ptr;
	//ptr은 주소값을 가지고있다.
	//당연하다.포인터는 특정 주소값을 저장하는 형태이다.
	ptr = nullptr;

	return 0;
}