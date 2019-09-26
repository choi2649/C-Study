#include "Test.h"

Test::Test()
	:a(0) {

}

Test::Test(const int & i)
	:a(i) {

}

void Test::setInt(int i) {
	a = i;
}

void Test::print()
{
	std::cout << a << std::endl;
}

Test & Test::test()
{
	a += 1;
	return *this;
}
