#include <iostream>
using namespace std;

int main()
{
	int x = 4;
	int y = 5;
	int *p = &y;


	cout << endl << "(1)[address of x:" << &x << "]" << "[value of x: " <<x<<"]";
	cout << endl << "(1)[pointed by p: " << p << "]" << "[value of pointed p : " << *p << "]";

	p = &x;
	cout << endl << "(2)[address of x:" << &x << "]" << "[value of x: " <<x<<"]";
	cout << endl << "(2)[pointed by p: " << p << "]" << "[value of pointed p : " << *p << "]";

	*p = 7;
	cout << endl << "(3)[address of x:" << &x << "]" << "[value of x: " <<x<< "]";
	cout << endl << "(3)[pointed by p: " << p << "]" << "[value of pointed p : " << *p << "]";

	return 0;
}