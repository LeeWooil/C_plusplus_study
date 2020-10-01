# include <iostream>
using namespace std;

// void calcGugudan(int x) --> 함수 선언 --> 오류 발생 x

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
visual studio는 번역의 관점 --> 위에서부터 실행
따라서 함수가 declare 되지 않는 오류 발생
*/