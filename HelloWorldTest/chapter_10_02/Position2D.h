#pragma once
#include <iostream>

class Position2D
{
private:
	int m_x;
	int m_y;

public:
	Position2D(const int & x_in,const int & y_in)
		: m_x(x_in),m_y(y_in)
	{}

	void set(const Position2D & pos_target) {
		set(pos_target.m_x, pos_target.m_y);
	}

	void set(const int & x_in, const int & y_in) {
		m_x = x_in;
		m_y = y_in;
	}

	friend std::ostream & operator << (std::ostream & out, Position2D & position2D) {
		out << position2D.m_x << " " << position2D.m_y;
		return out;
	}
};
