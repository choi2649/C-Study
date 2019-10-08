#include <iostream>
#include <exception>
#include <string>

using namespace std;

//std::exception �⺻���̺귯���� ���ԵǾ��ִ�.
//���� �ڷ����� �⺻���� ������ �����Ǿ� �ִ�.

class CustomException : public exception
{
public:
	const char * what() const noexcept override
	{
		return "Custom exception";
	}
};

int main() {
	try
	{
		string s;
		//��ӹ޾� �����޽��� �����ϱ�
		//throw CustomException();
		s.resize(-1);

		//exception�� ���������ֱ�
		//throw runtime_error("Bad thing happened");
	}
	catch (length_error & e)
	{
		//�ڽ�Ŭ����
		cout << "Error Catch" << endl;
		cerr << e.what() << endl;
	}
	catch (exception & e)
	{
		//�ڽ�Ŭ���� ã��
		cout << typeid(exception).name() << endl;
		cerr << e.what() << endl;
	}
	return 0;
}