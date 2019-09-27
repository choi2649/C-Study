#include <iostream>
#include <string>

using namespace std;

class Animal
{
protected:
	string m_name;

public:
	Animal(string name)
		:m_name(name) {}

public:
	string getName() { return m_name; }

	virtual void speak() const = 0;
};

//void Animal::speak() const
//{
//	cout << m_name << " ??? " << endl;
//}

class Cat :public Animal
{
public:
	Cat(string name)
		:Animal(name) {

	}

	void speak() const
	{
		cout << m_name << " Meow " << endl;
	}
};


class Dog :public Animal
{
public:
	Dog(string name)
		:Animal(name) {

	}

	void speak() const
	{
		cout << m_name << " Woof " << endl;
	}
};

class Cow : public Animal
{
public:
	Cow(string name)
		:Animal(name) {

	}

	//void speak() const
	//{
	//	cout << m_name << " Woof " << endl;
	//}

};


//Interface 예제
//자신이 정의하지 않고 순수가상함수만 가지고 있다.
//Interface는 대문자 I를 붙여주는게 관습이다.
class IErrorlog
{
public:
	virtual bool reportError(const char * errorMessage) = 0;

	virtual ~IErrorlog() {}
};

class FileErrorLog : public IErrorlog
{
public:
	virtual bool reportError(const char * errorMessage)
	{
		cout << "File Error" << endl;
		return true;
	}

};

//부모클래스를 이용하기에 여러방법이 사용가능하다.
void logTest(IErrorlog & log) {
	log.reportError("Runtime Error!!");
}

int main()
{
	//speak()가 구현이 안되어있다.
	//Cow c("n");

	Cat c("cat");
	c.speak();

	FileErrorLog log;
	logTest(log);

	return 0;
}