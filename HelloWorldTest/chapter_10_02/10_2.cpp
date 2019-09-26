#include <iostream>
#include "Monster.h"
using namespace std;



int main() {
	//몬스터 정보안에 위치가 들어있다.
	Monster mon1("name", Position2D(0,0));
	mon1.getLocation();
	cout << mon1 << endl;
	Monster mon2("name2", Position2D(0, 0));
	mon2.getLocation();
	{
		mon1.moveTo(Position2D(1, 1));
		cout << mon1 << endl;
	}
	return 0;
}