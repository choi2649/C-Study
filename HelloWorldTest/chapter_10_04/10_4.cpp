#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Doctor;

class Patient {
private:
	string m_name;
	vector<Doctor*> m_doc;

public:
	Patient(string name)
		:m_name(name) {

	}

	void addDoc(Doctor *new_doc) 
	{
		m_doc.push_back(new_doc);
	}

	void meetDot();
	friend class Doctor;
};

class Doctor {
private:
	string m_name;
	vector<Patient*> m_pat;
	
public:
	Doctor(string name)
		:m_name(name) {

	}

	void addPai(Patient *new_pai)
	{
		m_pat.push_back(new_pai);
	}

	void meetPai() {
		for (auto & ele : m_pat) {
			cout << m_name << " - >Meet Pat : " << ele->m_name << endl;
		}
	}
	friend class Patient;
};
void Patient::meetDot() {
	for (auto & ele : m_doc) {
		cout << m_name << " - >Meet Doc : " << ele->m_name << endl;
	}
}
int main()
{
	Patient *p1 = new Patient("choi");
	Patient *p2 = new Patient("lee");
	Patient *p3 = new Patient("kim");

	Doctor *d1 = new Doctor("D_kim");
	Doctor *d2 = new Doctor("D_jung");

	p1->addDoc(d1);
	d1->addPai(p1);
	p2->addDoc(d1);
	d1->addPai(p2);
	p1->meetDot();
	p2->meetDot();
	d1->meetPai();
	delete p1;
	delete p2;
	delete p3;

	delete d1;
	delete d2;
	return 0;
}