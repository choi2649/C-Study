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


//Interface ����
//�ڽ��� �������� �ʰ� ���������Լ��� ������ �ִ�.
//Interface�� �빮�� I�� �ٿ��ִ°� �����̴�.
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

//�θ�Ŭ������ �̿��ϱ⿡ ��������� ��밡���ϴ�.
void logTest(IErrorlog & log) {
	log.reportError("Runtime Error!!");
}

int main()
{
	//speak()�� ������ �ȵǾ��ִ�.
	//Cow c("n");

	Cat c("cat");
	c.speak();

	FileErrorLog log;
	logTest(log);

	return 0;
}