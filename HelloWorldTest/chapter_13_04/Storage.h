#pragma once

#include <iostream>

template <typename T>

class Storage
{
private:
	T m_value;

public:
	Storage(T value) {
		m_value = value;
	}
	~Storage(){}

	void pirnt() {
		std::cout << m_value << std::endl;
	}

};

template<>
void Storage<double>::pirnt() {
	std::cout << "double : "<< m_value << std::endl;
}