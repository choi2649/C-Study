#include <iostream>
#include <string>
//좋은 프로그래머라면 정상상황이 아닌
//비정상적인 상황 즉, 예외적인 상황에서도
//잘돌아가는 프로그램을 만들어야한다.
using namespace std;

//사전차단과는 약간다르다.
//예외처리를 하게 되면 약간 느려진다.
//빅데이터등 파일이 꼭 있어야하는건 사전차단을 사용하는게 올바르다.
//아니면 한단계 돌아가기가 적당하다.

//예외처리는 어느때 사용할까?
//예측할 수 없는 일이 많이 벌어지는 경우에 사용한다.

//예외처리 기초문법
//try(시도),catch(던져진 에러를 처리한다.),throw(예외를 던진다. 예외 감지)

//주의사항 : auto casting이 안된다. char * -> string, double -> int 형태등
//즉 catch를 잘 구현해줘야한다.

//catch가 구현안되면 runtime error가 생긴다.
int main()
{
	double d;
	cin >> d;

	try
	{//시도한다.
		if (d < 0.0) throw std::string("Negative input");//에러가 생길시 에러를 던진다.
		cout << std::sqrt(d) << endl;
	}
	catch (std::string error_message) 
	{//에러를 처리한다.
		cout << error_message << endl;
	}
	return 0;
}