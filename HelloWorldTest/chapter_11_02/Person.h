#pragma once
#include <string>
#include <iostream>

class Person 
{
private:
	std::string m_name;

public:
	Person(const std::string & name) 
	:m_name(name) {}

	void setName(const std::string & name) {
		m_name = name;
	}

	std::string getName() const{
		return m_name;
	}

	void doNothing() const
	{
		std::cout << m_name << " doNothing" << std::endl;
	}
};