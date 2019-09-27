#include <iostream>
#include <vector>

//상속은 부모클래스보다는 자식클래스가 정보를 많이 가지고 있다.
//추가 함수, 추가 변수, 오버라이딩 등등
//
//작은 부모의 객체에 큰 자식클래스를 대입한다면 다형성이 사라진다.
//
//부모객체로 인식한다고 생각하면된다.
//
//reference_wapper를 사용하거 포인터를 사용하면 객체잘림을 막을 수 있다.
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
	
	//reference_wrapper를 사용하거나 *포인터 사용이가능하다.
	vector<reference_wrapper<Base>> my_vec;
	my_vec.push_back(b);
	my_vec.push_back(d);

	//reference_wrapper는 ref를 받아오기위해 get()을 사용한다.
	for (auto & a : my_vec)
		a.get().print();

	vector<Base*> my_vec2;
	my_vec2.push_back(&b);
	my_vec2.push_back(&d);

	for (auto & a : my_vec2)
		a->print();
	return 0;
}