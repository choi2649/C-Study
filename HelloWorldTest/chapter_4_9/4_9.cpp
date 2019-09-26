#include <iostream>
#include <cstdint>
#include <vector>

using namespace std;


int main()
{
	typedef double distance_t;
	//고정너비 변수
	std::int8_t i(97);


	//컴파일러입장에선 같다.
	double distance;
	distance_t distance2;

	//vector<pair<string, int>> 를 줄여사용하기
	typedef vector<pair<string, int>> pairlist_t;
	//using사용
	using pairlist_t1 = vector<pair<string, int>>;

	return 0;
}