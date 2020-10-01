# include <iostream>
using namespace std;

void calcGugudan(int x)
{
	int y = 1;
	cout << x << "*" << y << "=" << x * y << endl;
	y++;
	cout << x << "*" << y << "=" << x * y << endl;
	y++;
	cout << x << "*" << y << "=" << x * y << endl;
	y++;
	cout << x << "*" << y << "=" << x * y << endl;
	y++;
	cout << x << "*" << y << "=" << x * y << endl;
	y++;
	cout << x << "*" << y << "=" << x * y << endl;
	y++;
	cout << x << "*" << y << "=" << x * y << endl;
	y++;
	cout << x << "*" << y << "=" << x * y << endl;
	y++;
	cout << x << "*" << y << "=" << x * y << endl;
	y++;

}

int main()
{
	int x = 1;
	calcGugudan(x);

	x = 2;
	calcGugudan(x);

	x = 3;
	calcGugudan(x);

	x = 4;
	calcGugudan(x);

	x = 5;
	calcGugudan(x);

	x = 6;
	calcGugudan(x);

	x = 7;
	calcGugudan(x);

	x = 8;
	calcGugudan(x);

	x = 9;
	calcGugudan(x);
}