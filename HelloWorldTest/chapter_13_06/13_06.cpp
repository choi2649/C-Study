#include <iostream>

using namespace std;

//템플릿을 부분적으로 특수화하기
//
//특정 자료형의 변수의 기능을 다르게 해주고싶을때 사용한다.
//
//템플릿 파라미터가 여러개일경우 부분적으로 특수화한다.
//상속 필요한 자료형을 상속하고 오버라이딩해준다.

template <typename T,unsigned int T_SIZE>
class StaticArray_BASE
{
private:
	T m_array[T_SIZE];

public:
	T * getArray() { return m_array; }

	T& operator [](int idx) {
		return m_array[idx];
	}
	void print() {
	for (int i = 0; i < T_SIZE; i++) {
		cout << (*this)[i] << ' ';
	}
	cout << endl;
	}

};

//클래스 상속으로 특정 자료형의 함수 기능 변경하기
//상속을 받는 이유 : 템플릿을 통째로 건드는것보다 훨씬 쉽다.
template <typename T, unsigned int T_SIZE>
class StaticArray : public StaticArray_BASE<T, T_SIZE> {

};

template <unsigned int T_SIZE>
class StaticArray<char, T_SIZE>: public StaticArray_BASE<char, T_SIZE> {
public:
	void print() {
		for (int i = 0; i < T_SIZE; i++) {
			cout << (*this)[i];
		}
	cout << endl;
	}
};

//template<typename T,unsigned int T_SIZE>
//void print(StaticArray<T, T_SIZE> & array) {
//	for (int i = 0; i < T_SIZE; i++) {
//		cout << array[i] << ' ';
//	}
//	cout << endl;
//}
//template<unsigned int T_SIZE>
//void print(StaticArray<char, T_SIZE> & array) {
//	for (int i = 0; i < T_SIZE; i++) {
//		cout << array[i];
//	}
//	cout << endl;
//}


int main()
{
	StaticArray<int, 4> s;
	s[0] = 1;
	s[1] = 2;
	s[2] = 3;
	s[3] = 4;

	s.print();
	StaticArray<char, 14> char14;
	char14[0] = 'H';
	strcpy_s(char14.getArray(), 14, "Hello, Wolrd");
	char14.print();
	return 0;
}