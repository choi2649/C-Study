#include <iostream>
#include <bitset>

using namespace std;

int main()
{
	//4가지 아이템이 있다고 가정해보자.
	bool item1_flag = false;
	bool item2_flag = false;
	bool item3_flag = false;
	bool item4_flag = false;

	//아이템이 많아지면 bool변수를 많이 만들어야한다.
	//함수를 만들면 최대 아이템갯수가 파라미터 갯수가 될 수도 있다.
	
	//아이템은 가지고있다,없다 두가지로 생각할 수 있다.
	
	//아이템이 8가지 종류가 있다는 가정하에 char를 사용한다.
	
	const unsigned char opt0 = 1 << 0;
	const unsigned char opt1 = 1 << 1;
	const unsigned char opt2 = 1 << 2;
	const unsigned char opt3 = 1 << 3;

	cout << std::bitset<8>(opt0) << endl;
	cout << std::bitset<8>(opt1) << endl;
	cout << std::bitset<8>(opt2) << endl;
	cout << std::bitset<8>(opt3) << endl;

	unsigned char items_flag = 0;
	//00000000이 출력된다.
	//8자리의 숫자로 숫자하나당 각자 아이템 소유정보를 저장한다.
	cout << "NoItem : " << std::bitset<8>(items_flag) << endl;
	
	//|= OR를 사용해 아이템 습득 정보를 변경할 수 있다.
	//0번째 자리의 아이템을 습득했다.
	items_flag |= opt0;
	cout << "0Item Get : " << std::bitset<8>(items_flag) << endl;
	
	items_flag |= opt3;
	cout << "3Item Get : " << std::bitset<8>(items_flag) << endl;

	//&= 와 ~을 이용해 아이템 분실을 변경 할 수 있다.
	//opt0 = 00000000이다.
	//~opt0 = 11111111이다.
	//AND조건을 사용하면 둘다 1일때만 1이기에 아이템정보를 0으로 변경한다.
	items_flag &= ~opt0;
	cout << "0Item Lost : " << std::bitset<8>(items_flag) << endl;

	//아이템 보유여부 확인
	if (items_flag & opt3) {
		cout << "3번아이템 보유중" << endl;
	}

	//아이템 보유여부 확인
	if (items_flag & opt0) {
		cout << "0번아이템 보유중" << endl;
	}
	else {
		cout << "0번아이템 없음" << endl;
	}
	
	//두가지 아이템 습득할 경우
	//opt0 | opt1 는 00000011이다.
	items_flag |= (opt0 | opt1);

	if ((items_flag & opt1) && !(items_flag & opt2)) {
		items_flag ^= opt1;
		items_flag ^= opt2;
	}
	cout << std::bitset<8>(items_flag) << endl;


	unsigned int pixel_color = 0xDAA520;

	cout << std::bitset<32>(pixel_color) << endl;

	unsigned char red, green, blue;
	return 0;
}
