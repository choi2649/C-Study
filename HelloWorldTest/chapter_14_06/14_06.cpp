#include <iostream>
//����ó���� ���輺�� ����
//����ó���� �ϴٺ��� �޸� ������ ���� �� �ִ�.
//����Ʈ �����͸� �̿��ϸ� �ذ��� �� �ִ�.

//�Ҹ��� �ȿ��� throw�� �����ϴ°� �ݽý� �ȴ�.

//ū ������Ʈ�ȿ� ���ֻ��Ǵ� �߿��� �ݺ������ȿ� 
//try catch�� ����ϸ� �ȵȴ�.
//�ۿ��� �ѷ��Ѵ�.

//��� ������ ����ó���� ������ �ȵȴ�.
//������ ����ó���� �ٸ���.
using namespace std;

class A {
public:
	~A() {
		//����ϸ� �ȵȴ�.
		//throw "ttt";
	}

};

int main()
{
	if (__cplusplus == 201703L) std::cout << "C++17\n";

	else if (__cplusplus == 201402L) std::cout << "C++14\n";

	else if (__cplusplus == 201103L) std::cout << "C++11\n";

	else if (__cplusplus == 199711L) std::cout << "C++98\n";

	else std::cout << "pre-standard C++\n";
	return 0;
}