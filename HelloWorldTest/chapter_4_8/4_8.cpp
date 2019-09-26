#include <iostream>

using namespace std;

int main()
{
	enum class Color
	{
		RED,
		BLUE,
	};
	enum class Fruit
	{
		BANANA,
		APPLE,
	};

	Color c = Color::RED;
	Color c1 = Color::RED;
	Fruit f = Fruit::BANANA;
	
	//두 출력 0으로 같지만 class를 선언하면 직접적으로 비교는 안된다.
	cout << static_cast<int>(c)<< " : " << static_cast<int>(f) << endl;

	//다른 enum class는 비교할 수 없다.
	/*if (c == f) {

	}*/
	//같은 class는 비교는 가능하다.
	if (c == c1) {
		cout << "같다." << endl;
	}

	return 0;
}
