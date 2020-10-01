# include <iostream>
using namespace std;

void calcGugudan(int x)
{
	int y = 1;
	cout << x << " * " << y << " = " << x * y << endl;
	y++;
	cout << x << " * " << y << " = " << x * y << endl;
	y++;
	cout << x << " * " << y << " = " << x * y << endl;
	y++;
	cout << x << " * " << y << " = " << x * y << endl;
	y++;
	cout << x << " * " << y << " = " << x * y << endl;
	y++;
	cout << x << " * " << y << " = " << x * y << endl;
	y++;
	cout << x << " * " << y << " = " << x * y << endl;
	y++;
	cout << x << " *" << y << " = " << x * y << endl;
	y++;
	cout << x << " * " << y << " = " << x * y << endl;
	y++;

}

int main()
{
	int x = 1;
	calcGugudan(x++);
	calcGugudan(x++);
	calcGugudan(x++);
	calcGugudan(x++);
	calcGugudan(x++);	
	calcGugudan(x++);
	calcGugudan(x++);
	calcGugudan(x++);
	calcGugudan(x++);
}