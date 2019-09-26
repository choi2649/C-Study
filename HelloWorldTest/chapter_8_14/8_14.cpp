#include <iostream>

using namespace std;



class Fruit
{
//클래스에서 사용하는 enum
public:
enum class FruitType
	{
		APPLE,
		BANANA,
		CHERRY,
	};
private:
	FruitType m_ft;

public:
	Fruit(FruitType ft)
		:m_ft(ft) {
	}

	FruitType getFt() {
		return m_ft;
	}

};
int main()
{
	cout << "1" << endl;
	Fruit f(Fruit::FruitType::APPLE);

	return 0;
}