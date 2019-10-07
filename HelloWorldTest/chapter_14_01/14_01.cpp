#include <iostream>
#include <string>
//���� ���α׷��Ӷ�� �����Ȳ�� �ƴ�
//���������� ��Ȳ ��, �������� ��Ȳ������
//�ߵ��ư��� ���α׷��� �������Ѵ�.
using namespace std;

//�������ܰ��� �ణ�ٸ���.
//����ó���� �ϰ� �Ǹ� �ణ ��������.
//�����͵� ������ �� �־���ϴ°� ���������� ����ϴ°� �ùٸ���.
//�ƴϸ� �Ѵܰ� ���ư��Ⱑ �����ϴ�.

//����ó���� ����� ����ұ�?
//������ �� ���� ���� ���� �������� ��쿡 ����Ѵ�.

//����ó�� ���ʹ���
//try(�õ�),catch(������ ������ ó���Ѵ�.),throw(���ܸ� ������. ���� ����)

//���ǻ��� : auto casting�� �ȵȴ�. char * -> string, double -> int ���µ�
//�� catch�� �� ����������Ѵ�.

//catch�� �����ȵǸ� runtime error�� �����.
int main()
{
	double d;
	cin >> d;

	try
	{//�õ��Ѵ�.
		if (d < 0.0) throw std::string("Negative input");//������ ����� ������ ������.
		cout << std::sqrt(d) << endl;
	}
	catch (std::string error_message) 
	{//������ ó���Ѵ�.
		cout << error_message << endl;
	}
	return 0;
}