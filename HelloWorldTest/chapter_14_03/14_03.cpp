#include <iostream>

using namespace std;
//���� Ŭ������ ���
//����� ���� �ڷ���(���� Ŭ���� ����ϱ�)
//�ڷ��������� ��Ȯ�� ���ܸ� ǥ���ϱ� �����.

//������� Exception Ŭ������ �����ϸ� ��ü�߸������� �����.
//�ڽ�Ŭ������ catch�������� ���� �ö󰡸� ������ ó���ȴ�.
//Exception ����� ���� catch�� �ٽ� ������ �� �ִ�.
//catch���� throw���ٶ� throw;�� ���ָ� ��ü�߸� ������ ���� �� �ִ�.
class Exception
{
public:
	void report()
	{
		cerr << "Exception report" << endl;
	}

};

class ArrayException : public Exception
{
public:
	void report()
	{
		cerr << "Array Exception report" << endl;
	};

};
class MyArray
{
private:
	int m_arr[5];

public:
	int & operator [] (const int & index)
	{
		//if (index < 0 || index >= 5) throw - 1;
		if (index < 0 || index >= 5) throw ArrayException();

		return m_arr[index];
	}

};
void doSomething() {
	MyArray ma;
	try {
		ma[100];
	}
	catch (const int & a) {
		cerr << "Exception : " << a << endl;
	}
	catch (ArrayException & e) {
		e.report();
		throw e;
	}
	catch (Exception & e) {
		e.report();
	}
	
}
int main()
{
	try
	{
		doSomething();
	}
	catch (ArrayException e) 
	{
		e.report();
	};

	return 0;
}