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
	//capacity 는 실제로 메모리에 가지고 있는 갯수
	//size는 메모리에서 현재 사용하는 갯수
	cout << "=====================================" << endl;
	v.resize(2);
	for (int &a : v) {
		cout << a << endl;
	}
	cout << v.size() << endl;
	cout << v.capacity() << endl;

	//강제로 포인터로 변경해서 데이터가져오기
	//데이터가 남아있는걸 확인할 수 있다.
	int *ptr = v.data();
	cout << ptr[2] << endl;
	cout << "=====================================" << endl;
	v.reserve(1024);
	cout << v.capacity() << endl;
	//사용하고있는 데이터 1,2만 출력된다.
	for (int &a : v) {
		cout << a << endl;
	}
	cout << "=====================================" << endl;
	vector<int> stack;
	//미리 메모리를 확보한다.
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