#include <iostream>

using namespace std;

int main()
{
	const int num = 3;
	int a[num] = { 1,50,3 };

	//배열 크기 알아보기
	int a2[] = { 1,50,3 };
	const int num2 = sizeof(a2) / sizeof(int);

	int totalScore = 0;
	int maxScore = 0;

	for (int i = 0; i < num; i++) {
		totalScore += a[i];
		cout << a[i] << endl;
		maxScore = (maxScore < a[i]) ? a[i] : maxScore;
	}

	double avgScore = static_cast<double>(totalScore) / num;
	cout << "avg : " << avgScore << endl;
	cout << "max : " << maxScore << endl;
	return 0;
}