#include <iostream>

//���̾Ƹ�� ��ӹ���.
//
//�ذ��ϱ����� ���� �⺻ Ŭ������ ����Ѵ�.
//���ڴ� class :�� ����� ��Ÿ����.
//�Ʒ�ó�� ����ϸ� ���̾Ƹ�� ������ �ɰ� ������
//1class�� �ι� �����ȴ�.
//1
//2 : 1, 3, 1
//4 : 2, 3
//
//����Ҷ� virtual�� ���� �ѹ��� �����ȴ�.
//�� ������ �ڽ� ���̺��� 1class �����ڸ� �������ش�.

using namespace std;
class PowerDevice
{

public:
	int m_power;
	PowerDevice(int power){
		cout << "PowerDevice : " << power << endl;
	}

};

class Scanner : virtual public PowerDevice
{
public:
	Scanner(int scan, int power)
		:PowerDevice(power) {
		cout << "Scanner : " << scan << endl;
	}
};

class Printer : virtual public PowerDevice
{
public:
	Printer(int prin, int power)
		:PowerDevice(power) {
		cout << "Printer : " << prin << endl;
	}
};

class Copier : public Scanner, public Printer
{
public:
	Copier(int scan, int prin, int power)
		:Scanner(scan, power), Printer(prin, power) ,PowerDevice(power){}
};
int main()
{
	Copier c(1, 2, 3);
	//�ּҰ��� �ٸ���.
	cout << &c.Scanner::PowerDevice::m_power << endl;
	cout << &c.Printer::PowerDevice::m_power << endl;
	return 0;
}