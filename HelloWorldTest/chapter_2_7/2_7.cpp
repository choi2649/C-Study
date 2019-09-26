#include <iostream>

int main()
{
	using namespace std;

	//둘다 A가 출력된다.
	char c1(65);
	char c2('A');
	
	//윈도우용 프로그램에서 사용
	wchar_t c;
	//이모티콘등 unicode를 사용가능하다.
	char32_t c3;

	cout << c1 << " " << c2 << endl;

	//캐스팅
	//C style
	cout << (char)65 << endl;
	cout << (int)'A' << endl;
	
	//C++ style
	cout << char(65) << endl;
	cout << int('A') << endl;

	//위에 캐스팅은 강제로 변환하는 개념이다.
	//아래 방법은 기본타입을 변환할때 컴파일러에게 확인후 변환한다.
	cout << static_cast<char>(65) << endl;
	cout << static_cast<int>('A') << endl;

	char ch(97);
	cout << ch << endl;
	cout << static_cast<int>(ch) << endl;
	cout << ch << endl;

	//버퍼 테스트 abc 입력하면 바로 출력된다.
	cin >> c1;
	cout << c1 << " " << static_cast<int>(c1) << endl;
	cin >> c1;
	cout << c1 << " " << static_cast<int>(c1) << endl; 
	cin >> c1;
	cout << c1 << " " << static_cast<int>(c1) << endl;


	//범위 체크
	cout << sizeof(char) << endl;
	cout << (int)std::numeric_limits<char>::max() << endl;
	cout << (int)std::numeric_limits<char>::lowest() << endl;

	cout << sizeof(unsigned char) << endl;
	cout << (int)std::numeric_limits<unsigned char>::max() << endl;
	cout << (int)std::numeric_limits<unsigned char>::lowest() << endl;

	cout << '\a' << endl;

	return 0;
}