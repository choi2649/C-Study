#include "Student.h"
#include "Teacher.h"

using namespace std;

int main()
{
	string name = "";
	Student s("Jack Jack");
	Teacher t("Choi");

	cout << s.getName() << endl;
	cout << t.getName() << endl;

	s.doNothing();
	t.doNothing();

	return 0;
}