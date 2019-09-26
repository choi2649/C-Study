#include <iostream>
#include <vector>

using namespace std;

void printStack(const vector<int> &stack) {
	cout << "printStack" << endl;
	for (auto &a : stack) {
		cout << a << endl;
	}
	cout << "end" << endl;
}
int main()
{
	//int *v_ptr = new int[3]{1,2,3};
	vector<int> v{ 1,2,3 };
	//size,capacity
	//capacity �� ������ �޸𸮿� ������ �ִ� ����
	//size�� �޸𸮿��� ���� ����ϴ� ����
	cout << "=====================================" << endl;
	v.resize(2);
	for (int &a : v) {
		cout << a << endl;
	}
	cout << v.size() << endl;
	cout << v.capacity() << endl;

	//������ �����ͷ� �����ؼ� �����Ͱ�������
	//�����Ͱ� �����ִ°� Ȯ���� �� �ִ�.
	int *ptr = v.data();
	cout << ptr[2] << endl;
	cout << "=====================================" << endl;
	v.reserve(1024);
	cout << v.capacity() << endl;
	//����ϰ��ִ� ������ 1,2�� ��µȴ�.
	for (int &a : v) {
		cout << a << endl;
	}
	cout << "=====================================" << endl;
	vector<int> stack;
	//�̸� �޸𸮸� Ȯ���Ѵ�.
	stack.reserve(1024);
	stack.push_back(3);
	printStack(stack);
	stack.push_back(5);
	printStack(stack);
	stack.push_back(7);
	printStack(stack);
	stack.pop_back();
	printStack(stack);
	stack.pop_back();
	printStack(stack);
	stack.pop_back();
	printStack(stack);


	
	return 0;
}