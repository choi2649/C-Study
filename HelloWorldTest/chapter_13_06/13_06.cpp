#include <iostream>

using namespace std;

//���ø��� �κ������� Ư��ȭ�ϱ�
//
//Ư�� �ڷ����� ������ ����� �ٸ��� ���ְ������ ����Ѵ�.
//
//���ø� �Ķ���Ͱ� �������ϰ�� �κ������� Ư��ȭ�Ѵ�.
//��� �ʿ��� �ڷ����� ����ϰ� �������̵����ش�.

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

//Ŭ���� ������� Ư�� �ڷ����� �Լ� ��� �����ϱ�
//����� �޴� ���� : ���ø��� ��°�� �ǵ�°ͺ��� �ξ� ����.
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