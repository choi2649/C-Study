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

	//using namespace NamespaceTest; 를 통해 test함수를 바로 쓸 수 있다.
	cout << test(1, 3) << endl;
	//NamespaceTest namespace안에 InnerSpace를 불러올 수 있다.
	cout << InnerSpace::test(1, 3) << endl;
	//함수명은 같지만 다른 namespace에 있는 함수를 사용할 수 있다.
	cout << NamespaceTest2::test(1, 3) << endl;

	return 0;
}