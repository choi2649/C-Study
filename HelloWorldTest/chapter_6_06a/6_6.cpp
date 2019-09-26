#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	char myStr[] = "string";

	for (int i = 0; i < 7; i++) {
		cout << myStr[i] << endl;
		cout <<(int) myStr[i] << endl;
	}

	myStr[255];
	cin.getline(myStr, 255);
	cout << myStr << endl;

	myStr[0] = 'A';
	cout << myStr << endl;

	int i = 0;
	while (true)
	{
		if (myStr[i] == '\0') break;

		cout << myStr[i] << " code : " << (int)myStr[i] << endl;
		i++;
	}
	
	char cpy[255];
	//strcpy(cpy, myStr);
	char myStr2[] = "Test !";
	strcpy_s(cpy, 255, myStr2);

	//문자열이 같으면 0출력 틀리면 -1출력
	cout << strcmp(cpy, myStr2) << endl;
	
	//문자열 붙이기
	strcat_s(cpy, myStr2);
	cout << cpy << endl;

	return 0;
}