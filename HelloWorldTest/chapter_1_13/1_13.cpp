#include <iostream>

using namespace std;

namespace NamespaceTest
{
	int test(int a, int b)
	{
		return a + b;
	}
	namespace InnerSpace
	{
		int test(int a, int b)
		{
			return a + b;
		}
	}
}

namespace NamespaceTest2
{
	int test(int a, int b)
	{
		return a + b;
	}
	 
}


int main()
{

	using namespace NamespaceTest;

	//using namespace NamespaceTest; �� ���� test�Լ��� �ٷ� �� �� �ִ�.
	cout << test(1, 3) << endl;
	//NamespaceTest namespace�ȿ� InnerSpace�� �ҷ��� �� �ִ�.
	cout << InnerSpace::test(1, 3) << endl;
	//�Լ����� ������ �ٸ� namespace�� �ִ� �Լ��� ����� �� �ִ�.
	cout << NamespaceTest2::test(1, 3) << endl;

	return 0;
}