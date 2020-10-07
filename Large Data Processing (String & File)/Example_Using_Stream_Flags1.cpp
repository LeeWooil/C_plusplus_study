#include <iostream>
using namespace std;

int main()
{
	char aChar;

	cout << "Enter <space z>    : ";
	cin >> aChar;
	cout << "Character read is    : " << aChar;
	cin.unsetf(ios::skipws); // 파일을 읽을 때 공백 문자가 나오면 버린다.
	cin >> aChar;
	cout << "\nCharacter read is    : " << int(aChar);
	cout << "\nEnter <space z> again: ";
	cin >> aChar;
	cout << "Character read is    : " << int(aChar);
	cin >> aChar;
	cout << "\nCharacter read is    : " << int(aChar);
	cin >> aChar;
	cout << "\nCharacter read is    : " << int(aChar);
	return 0;
}