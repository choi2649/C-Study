#include <iostream>

using namespace std;

//�����޸� �Ҵ�
int a = 0;

int main()
{

	//�ڵ��޸� �Ҵ�
	{
		int array[10];
	}

	int *ptr = new (std::nothrow)int (8);
	cout << *ptr << endl;
	//ptr�� delete�� �Ǹ� ptr2�� �޸𸮰� �ݳ��ȴ�.
	int *ptr2 = ptr;

	//de-reference
	*ptr = 7;

	cout << *ptr << endl;
	delete ptr;

	//delete�� �޸𸮸� �ݳ��߱⿡ garvage���� ��µȴ�.
	//cout << *ptr << endl;
	//�����ϴ¹�� 0,NULL,nullptr�� ����Ѵ�.
	ptr = nullptr;
	if (ptr != nullptr) 
		cout << *ptr << endl;

	while (true) {
		//delete�� �ϸ� �޸� ����memory leak�� �߻��Ѵ�.
		int *ptr = new int;
		cout << ptr << endl;
		delete ptr;
	}
	
	return 0;
}