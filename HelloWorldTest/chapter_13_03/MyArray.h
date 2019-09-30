#pragma once

#include <iostream>
#include <assert.h>

template <typename T,unsigned int T_SIZE>

class MyArray {
private:
	//int m_length;
	T * m_array;

public:
	MyArray() {
		//m_length = 0;
		m_array = new T[T_SIZE];
	}

	//MyArray(int length) {
	//	//m_array = new T[length];
	//	m_length = length;
	//}

	~MyArray() {
		reset();
	}
	
	void reset() {
		delete[] m_array;
		m_array = nullptr;
		//m_length = 0;
	}

	T & operator[](int idx) {
		assert(idx >= 0 && idx < T_SIZE);
		return m_array[idx];
	}

	void print() {
		for (int i = 0; i < T_SIZE; i++) {
			std::cout << m_array[i] << " ";
		}
		std::cout << std::endl;
	}

	int getLength() {
		return T_SIZE;
	}

};