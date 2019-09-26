#pragma once

#include "Person.h"

class Teacher :public Person
{
private:


public:
	Teacher(const std::string & name = "noName")
		:Person(name) {

	}

	friend std::ostream & operator << (std::ostream & out, const Teacher & t1) {
		out << t1.getName();
		return out;
	}

};