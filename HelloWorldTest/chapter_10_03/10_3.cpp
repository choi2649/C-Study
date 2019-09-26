#include <iostream>

#include "Lecture.h"
#include "Teacher.h"
#include "Student.h"

int main()
{
	using namespace std;
	//다른곳에서 쓰게되면 동적할당으로 사용함.
	Student std1("Jack", 0);
	Student std2("cho", 0);
	Student std3("ahn", 0);

	Teacher t1("t_lee");
	Teacher t2("t_choi");

	Lecture lec1("test1");
	lec1.assignTeacher(&t1);
	lec1.registerStudent(&std1);
	lec1.registerStudent(&std3);

	Lecture lec2("test2");
	lec2.assignTeacher(&t2);
	lec2.registerStudent(&std1);
	lec2.registerStudent(&std2);
	lec2.registerStudent(&std3);

	{
		cout << lec1 << endl;
		cout << lec2 << endl;

		lec1.study();
		cout << lec1 << endl;
		cout << lec2 << endl;


	}
}