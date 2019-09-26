#pragma once

#include <string>
#include "Position2D.h"

class Monster
{
private:
	std::string m_name;

	//subClass
	Position2D m_location;//m_x,m_y

	//int m_x;//location
	//int m_y;

public:
	//����Ŭ������ ��ġŬ������ ����Ѵ�.
	Monster(const std::string name_in, const Position2D & pos_in)
		:m_name(name_in), m_location(pos_in) {

	}
	//set�� ������ �� �� ����.
	void moveTo(const Position2D & pos_target) {
		m_location.set(pos_target);
	}

	void getLocation () {
		std::cout << m_location << std::endl;
	}


	friend std::ostream & operator << (std::ostream & out, Monster & monster) {
		out << monster.m_name << " " << monster.m_location;
		return out; 
	}
};
