#include <iostream>
#include <bitset>

using namespace std;

int main()
{
	//4���� �������� �ִٰ� �����غ���.
	bool item1_flag = false;
	bool item2_flag = false;
	bool item3_flag = false;
	bool item4_flag = false;

	//�������� �������� bool������ ���� �������Ѵ�.
	//�Լ��� ����� �ִ� �����۰����� �Ķ���� ������ �� ���� �ִ�.
	
	//�������� �������ִ�,���� �ΰ����� ������ �� �ִ�.
	
	//�������� 8���� ������ �ִٴ� �����Ͽ� char�� ����Ѵ�.
	
	const unsigned char opt0 = 1 << 0;
	const unsigned char opt1 = 1 << 1;
	const unsigned char opt2 = 1 << 2;
	const unsigned char opt3 = 1 << 3;

	cout << std::bitset<8>(opt0) << endl;
	cout << std::bitset<8>(opt1) << endl;
	cout << std::bitset<8>(opt2) << endl;
	cout << std::bitset<8>(opt3) << endl;

	unsigned char items_flag = 0;
	//00000000�� ��µȴ�.
	//8�ڸ��� ���ڷ� �����ϳ��� ���� ������ ���������� �����Ѵ�.
	cout << "NoItem : " << std::bitset<8>(items_flag) << endl;
	
	//|= OR�� ����� ������ ���� ������ ������ �� �ִ�.
	//0��° �ڸ��� �������� �����ߴ�.
	items_flag |= opt0;
	cout << "0Item Get : " << std::bitset<8>(items_flag) << endl;
	
	items_flag |= opt3;
	cout << "3Item Get : " << std::bitset<8>(items_flag) << endl;

	//&= �� ~�� �̿��� ������ �н��� ���� �� �� �ִ�.
	//opt0 = 00000000�̴�.
	//~opt0 = 11111111�̴�.
	//AND������ ����ϸ� �Ѵ� 1�϶��� 1�̱⿡ ������������ 0���� �����Ѵ�.
	items_flag &= ~opt0;
	cout << "0Item Lost : " << std::bitset<8>(items_flag) << endl;

	//������ �������� Ȯ��
	if (items_flag & opt3) {
		cout << "3�������� ������" << endl;
	}

	//������ �������� Ȯ��
	if (items_flag & opt0) {
		cout << "0�������� ������" << endl;
	}
	else {
		cout << "0�������� ����" << endl;
	}
	
	//�ΰ��� ������ ������ ���
	//opt0 | opt1 �� 00000011�̴�.
	items_flag |= (opt0 | opt1);

	if ((items_flag & opt1) && !(items_flag & opt2)) {
		items_flag ^= opt1;
		items_flag ^= opt2;
	}
	cout << std::bitset<8>(items_flag) << endl;


	unsigned int pixel_color = 0xDAA520;

	cout << std::bitset<32>(pixel_color) << endl;

	unsigned char red, green, blue;
	return 0;
}
