# include <iostream>
using namespace std;

// void calcGugudan(int x) --> �Լ� ���� --> ���� �߻� x

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

/*
visual studio�� ������ ���� --> ���������� ����
���� �Լ��� declare ���� �ʴ� ���� �߻�
*/