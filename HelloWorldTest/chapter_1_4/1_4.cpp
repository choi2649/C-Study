#include <iostream>
#include <cstdio>

int main()
{
	//using namespace std;
	//{}�ȿ��� std::�� ������� �ʾƵ� �ȴ�.
	using namespace std;
	int x = 1024;

	//std�� namespace�ȿ� cout�Լ��� ����Ѵ�.
	std::cout << "Test" << std::endl;
	std::cout << "x is " << x << std::endl;
	std::cout << "tab" << "\t" << "test" << std::endl;
	std::cout << "tab2" << "\t" << "test" << std::endl;

	//using namespace std;�� �س��⿡ std::�� �����Ǿ �ȴ�.
	//�Է¹޴¹�� cin
	cin >> x;
	cout << "x change " << x << endl;

	return 0;
}
