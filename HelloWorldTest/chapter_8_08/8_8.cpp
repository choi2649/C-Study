#include "Test.h"

int main()
{
	Test t(1);
	t.setInt(1);
	t.print();
	t.test().test().test().print();
	return 0;
}