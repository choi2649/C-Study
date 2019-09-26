#include <iostream>
#include <typeinfo>
#include <string>

using namespace std;

enum colorId {//사용자 지정 자료형
	COLOR_BLACK,
	COLOR_RED,
	COLOR_BLUE,
	COLOR_GREEN,
};

enum feelId {//사용자 지정 자료형
	HAPPY,
	JOY,
	//예를들어 colorId와 feelId의 BLUE가 이름이 같다면 에러가난다.
	BLUE,
};

int getColor(int colorId)
{
	if (colorId == 0) {
		return 1;
	}
	else if (colorId == 1) {
		return 2;
	}
}

int main()
{
	colorId apple(COLOR_RED);
	cout << apple << endl;

	//캐스팅하기
	colorId id = static_cast<colorId>(3);
	cout << id << endl;
	//string으로 입력받기(추천하지 않는다.)
	string str;
	getline(cin, str);
	if (str == "BLACK") {
		id = static_cast<colorId>(0);
	}
	cout << id << endl;

	return 0;
}