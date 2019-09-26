#pragma once

#include<iostream>

class Test {

private:
	int a;

public:
	Test();
	Test(const int& i);
	void setInt(int i);
	void print();
	Test& test();
};
