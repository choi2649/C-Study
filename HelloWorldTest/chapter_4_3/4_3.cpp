#include <iostream>

namespace a
{
	int a1(2);
}
namespace b
{
	int a1(3);
}

int main()
{
	//std::�� ������ �� �ִ�.
	using namespace std;
	//�Ʒ�ó�� �ϳ��� �ҷ��� ����� �� �ִ�.
	//using std::cout;

	//cout << "hello" << endl;

	//�Ʒ� ��namespace�� �Ȱ��� �̸��� ������ �ִ�.
	//����ҷ��� ������ �и��ؼ� �������
	{
		using namespace a;
		cout << a1 << endl;
	}
	{
		using namespace b;
		cout << a1 << endl;
	}
	

	return 0;
}