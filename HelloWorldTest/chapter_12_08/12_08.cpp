#include <iostream>

//다이아몬드 상속문제.
//
//해결하기위해 가상 기본 클래스를 사용한다.
//숫자는 class :는 상속을 나타낸다.
//아래처럼 상속하면 다이아몬드 구조로 될거 같지만
//1class가 두번 생성된다.
//1
//2 : 1, 3, 1
//4 : 2, 3
//
//상속할때 virtual을 쓰면 한번만 생성된다.
//맨 마지막 자식 테이블에서 1class 생성자를 정의해준다.

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
	//주소값이 다르다.
	cout << &c.Scanner::PowerDevice::m_power << endl;
	cout << &c.Printer::PowerDevice::m_power << endl;
	return 0;
}