#include <iostream>

using namespace std;

int add(int x, int y)
{
	return x + y;
}

int multiply(int x, int y)
{
	return x * y;
}

int evaluate(int (*f)(int, int), int x, int y)
// 두개의 정수를 parameter로 받고 정수를 return 하는 f라는 함수를 포인터로 선언
{
	return f(x, y);
}

int main()
{
	cout << add(2, 3) << '\n';
	cout << multiply(2, 3) << '\n';
	cout << evaluate(&add, 2, 3) << '\n'; // f = add
	cout << evaluate(&multiply, 2, 3) << '\n'; // f = multiply
}