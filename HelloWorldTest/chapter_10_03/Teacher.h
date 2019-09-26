#pragma once

#include <string>
#include <iostream>

class Teacher
{
private:
	std::string m_name;

public:
	Teacher(const std::string & name = "noName")
		:m_name(name) {

	}
	
	void setName(std::string & name) {
		m_name = name;
	}

	friend std::ostream & operator << (std::ostream & out, const Teacher & t1) {
		out << t1.m_name;
		return out;
	}

};