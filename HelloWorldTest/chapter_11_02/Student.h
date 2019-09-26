#pragma once

#include "Person.h"

class Student : public Person{
private:
	int m_intel;

public:
	Student(const std::string & name = "noName", const int & intel = 0)
		: Person(name), m_intel(intel) {}

	void setIntel(const int & intel) {
		m_intel = intel;
	}

	int getIntel()
	{
		return m_intel;
	}

	friend std::ostream & operator << (std::ostream & out, const Student & s) {
		out << s.getName() << " " << s.m_intel;
		return out;
	}
};