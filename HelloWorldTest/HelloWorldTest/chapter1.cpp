//�׽�Ʈ �ڵ�
#include <iostream> 
//iostream�� ���̺귯���� ���α׷��� ���Խ�Ų��.

int main(void)
{//������,������,MAC�� ���۷����ýý����� ���� �������̵� �ڵ带 �����Ų��.
	int x = 2;//���ͷ�,literal
	int y = x + 3;
	//std::cout ����
	//std�� namespace�̴�.
	//����� ��ɵ����ϴ� �Լ��� ��������� ����Ѵ�.
	//:: �� namespace�ȿ� �Լ��� ����Ҷ� ����Ѵ�.
	//�� std::cout�� std�� namespace�ȿ� cout�Լ��� ����Ѵ�.
	std::cout << y << std::endl;


	return 0;
}