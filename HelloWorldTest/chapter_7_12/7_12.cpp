#include <iostream>
#include <vector>

using namespace std;

void countDown(int count) {
	cout << count << endl;
	if (count != 0) {
		countDown(count - 1);
	}
}
int a = 1;

int sumTo(int sumto) {
	
	if (sumto <= 0) {
		return 0;
	}
	else if (sumto <= 1) {
		return 1;
	}	
	else {
		int sum_minus_one = 0;
		sum_minus_one =	sumTo(sumto - 1);
		return sum_minus_one + sumto;
	}
}


int fibo(int i) {

	if (i == 0)
		return 0;
	else if (i == 1)
		return 1;
	else
		return fibo(i - 1) + fibo(i - 2);
}
//0,1,2,3,5,8,13,21,34,55
void test(int a,int b) {
	if (a == 0) {
		cout << "0" << endl;
		test(1,2);
	}
	else {
		cout << b << endl;
		if (b == 21) {
		}
		else {
			test(b, a + b);
		}
	}

}

int main()
{
	countDown(10);
	cout << "=========================" << endl;
	cout << sumTo << endl;
	//���ȣ���ϸ� 10���� 1�� ���ҽ�Ű�� 1�� ���ö����� �ݺ��Ѵ�.
	//1�� ������ ���ϰ����� �ϳ��� �����ش�.
	//1(else if(sumto <= 1)�� �����)+2(sumto)
	//3�� ������ ȣ��� sum_minus_one�� ��������� ����.
	//3 + 3, 6 + 4, 10 + 5 �������� ��� �����ش�.
	//cout << sumTo(10) << endl;
	test(0, 0);
	cout << "=========================" << endl;
	for (int i = 0; i < 15; i++) {
		cout << fibo(i) << endl;
	}

	vector<int> v;
	v.reserve(10);
	v.push_back(45+10);
	v.push_back(36+9);
	v.push_back(28+8);
	v.push_back(21+7);
	v.push_back(15+6);
	v.push_back(10+5);
	v.push_back(6+4);//return 6�� �ް� ����
	v.push_back(3+3);//return 3�� �ް� ����
	v.push_back(1+2);//return 1�� �ް� ����


	return 0;
}