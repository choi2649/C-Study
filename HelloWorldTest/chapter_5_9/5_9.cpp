#include <iostream>
#include <cstdlib>
#include <ctime>
#include <random>

using namespace std;

int main()
{
	//시드넘버
	srand(5324);
	//시드넘버변경하기
	srand(static_cast<unsigned int>(time(0)));
	for (int i = 1; i <= 100; i++) {
		cout << rand() <<"\t";
		if (i % 5 == 0) {
			cout << endl;
		}
	}

	random_device rd;
	mt19937 ran(rd());
	uniform_int_distribution<> dice(1, 32);

	for (int a = 0; a < 5; a++) {
		cout << a << " : ";
		for (int i = 0; i < 6; i++) {
			cout << dice(ran);
			if (i == 5) {
				cout << endl;
			}
			else {
				cout << "\t";
			}
		}
	}
	
	return 0;
}