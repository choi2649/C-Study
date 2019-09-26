#include <iostream>

int main()
{
	using namespace std;

	//�Ѵ� A�� ��µȴ�.
	char c1(65);
	char c2('A');
	
	//������� ���α׷����� ���
	wchar_t c;
	//�̸�Ƽ�ܵ� unicode�� ��밡���ϴ�.
	char32_t c3;

	cout << c1 << " " << c2 << endl;

	//ĳ����
	//C style
	cout << (char)65 << endl;
	cout << (int)'A' << endl;
	
	//C++ style
	cout << char(65) << endl;
	cout << int('A') << endl;

	//���� ĳ������ ������ ��ȯ�ϴ� �����̴�.
	//�Ʒ� ����� �⺻Ÿ���� ��ȯ�Ҷ� �����Ϸ����� Ȯ���� ��ȯ�Ѵ�.
	cout << static_cast<char>(65) << endl;
	cout << static_cast<int>('A') << endl;

	char ch(97);
	cout << ch << endl;
	cout << static_cast<int>(ch) << endl;
	cout << ch << endl;

	//���� �׽�Ʈ abc �Է��ϸ� �ٷ� ��µȴ�.
	cin >> c1;
	cout << c1 << " " << static_cast<int>(c1) << endl;
	cin >> c1;
	cout << c1 << " " << static_cast<int>(c1) << endl; 
	cin >> c1;
	cout << c1 << " " << static_cast<int>(c1) << endl;


	//���� üũ
	cout << sizeof(char) << endl;
	cout << (int)std::numeric_limits<char>::max() << endl;
	cout << (int)std::numeric_limits<char>::lowest() << endl;

	cout << sizeof(unsigned char) << endl;
	cout << (int)std::numeric_limits<unsigned char>::max() << endl;
	cout << (int)std::numeric_limits<unsigned char>::lowest() << endl;

	cout << '\a' << endl;

	return 0;
}