#include <iostream>
#include <vector>

//����� �θ�Ŭ�������ٴ� �ڽ�Ŭ������ ������ ���� ������ �ִ�.
//�߰� �Լ�, �߰� ����, �������̵� ���
//
//���� �θ��� ��ü�� ū �ڽ�Ŭ������ �����Ѵٸ� �������� �������.
//
//�θ�ü�� �ν��Ѵٰ� �����ϸ�ȴ�.
//
//reference_wapper�� ����ϰ� �����͸� ����ϸ� ��ü�߸��� ���� �� �ִ�.
using namespace std;

class Base
{
public:
	int m_i = 0;
	virtual void print() 
	{
		cout << "I'm Base" << endl;
	}

};

class Der : public Base
{
public:
	int m_d = 0;
	virtual void print() override 
	{
		cout << "I'm Der" << endl;
	}

};
int main()
{
	Der d;
	Base b = d;
	b.print();
	
	//reference_wrapper�� ����ϰų� *������ ����̰����ϴ�.
	vector<reference_wrapper<Base>> my_vec;
	my_vec.push_back(b);
	my_vec.push_back(d);

	//reference_wrapper�� ref�� �޾ƿ������� get()�� ����Ѵ�.
	for (auto & a : my_vec)
		a.get().print();

	vector<Base*> my_vec2;
	my_vec2.push_back(&b);
	my_vec2.push_back(&d);

	for (auto & a : my_vec2)
		a->print();
	return 0;
}