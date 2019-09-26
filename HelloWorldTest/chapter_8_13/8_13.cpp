#include <iostream>

using namespace std;
class A
{
private:
	int a;
public:
	void print()
	{
		cout << "Hello" << endl;
	}
	A(const int& val)
		:a(val){
		cout << val << endl;
		cout <<this<< " constructor" << endl;
	}
	~A()
	{
		cout << this <<" destructor" << endl;
	}
	int getA() const {
		return a;
	}
};

A add(const A& a1, const A& a2) {
	return A(a1.getA() + a2.getA());
}

int main()
{
	A a(1);
	//�Ʒ� �� �ν��Ͻ��� �ּҰ� �ٸ���.
	A(1).print();
	A(2).print();
	
	cout << add(A(3), A(4)).getA() << endl;

	return 0;
}