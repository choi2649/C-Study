//테스트 코드
#include <iostream> 
//iostream란 라이브러리를 프로그램에 포함시킨다.

int main(void)
{//윈도우,리눅스,MAC등 오퍼레이팅시스템을 통해 컴파일이된 코드를 실행시킨다.
	int x = 2;//리터럴,literal
	int y = x + 3;
	//std::cout 설명
	//std는 namespace이다.
	//비슷한 기능들을하는 함수는 묶어놓을때 사용한다.
	//:: 는 namespace안에 함수를 사용할때 사용한다.
	//즉 std::cout는 std란 namespace안에 cout함수를 사용한다.
	std::cout << y << std::endl;


	return 0;
}