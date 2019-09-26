#pragma once
#include <string>
#include <iostream>

class Student {
private:
	std::string m_name;
	int m_intel;

public:
	Student(const std::string & name = "noName", const int & intel = 0)
		:m_name(name), m_intel(intel) {

	}

	void setName(const std::string & name) {
		m_name = name;
	}

	void setIntel(const int & intel) {
		m_intel = intel;
	}

	int getIntel()
	{
		return m_intel;
	}

	friend std::ostream & operator << (std::ostream & out, const Student & s) {
		out << s.m_name << " " << s.m_intel;
		return out;
	}
};