#include <iostream>

using namespace std;

//���࿡ �����̸��� ������,�Լ��� ����ϰ� �ʹٸ�
//namespace�� ����Ѵ�.
namespace work1
{
	int a = 0;
	void getTest() {
		a += 1;
		cout << "work1::getTest() : " << a << endl;
	}
	
}


int a = 0;
void getTest() {
	a += 2;
	cout << "getTest() : " << a << endl;
}

int main()
{
	
	//apple������ �����ؼ� ����� �� �ְ� �ȴ�.
	//OS�� ���� int�޸𸮸� �Ҵ� �޴´�.
	//int main(){}�ȿ��� ��밡�� �ϴ�.
	int apple = 5;
	cout << apple << endl;
	if(true)
	{
		//{}�ۿ��� ����� ������ �� {}������ ��밡�� �ϴ�.
		//apple������ ���� �Ǿ��ֱ⿡ ����� �� �ִ�.
		//apple = 1;
		//cout << apple << endl;
		
		//�����̸����� ���� ������ �����ϴ�.
		//���� {} �ȿ����� ����ȴ�.
		//�ܺο� �ִ� apple�� ���� �̸��� ����� ��� �����.
		//�������̸� �̸��� �ٸ��� ���ϴ°��� ����.
		int apple = 1;
		cout << apple << endl;

		getTest();
		work1::getTest();
	}
	cout << apple << endl;

	return 0;
}