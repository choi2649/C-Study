#pragma once

#include <vector>
#include "Teacher.h"
#include "Student.h"

class Lecture
{
private:
	std::string m_name;
	Teacher * m_t;
	std::vector<Student*> m_s;

public:
	Lecture(const std::string & name)
		:m_name(name) 
	{}



	void assignTeacher(Teacher * const t) {
		m_t = t;
	}

	void registerStudent(Student * const student) {
		m_s.push_back(student);
	}

	

	void study() {
		std::cout << m_name << " Study " << std::endl;

		for (auto &  ele : m_s) {
			(*ele).setIntel((*ele).getIntel() + 1);
		}
	}

	friend std::ostream & operator << (std::ostream & out, Lecture l) {
		out << "Lecture name : " << l.m_name << std::endl;
		out << "Teacher name : " << *l.m_t << std::endl;
		for (auto ele : l.m_s) {
			out << *ele << std::endl;
		}

		return out;
	}
};