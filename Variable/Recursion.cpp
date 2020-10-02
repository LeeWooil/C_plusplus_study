#include <iostream>

int factorial(int n)
{
	if (n == 0)
		return 1;
	else
		return n * factorial(n - 1);
}

int main()
{
	std::cout << " 6! = " << factorial(6) << '\n';
	/*
	factorial(6) = 6 * factorial(5)
	= 6 * 5 * factorial(4)
	= 6 * 5 * factorial(3)
	.
	.
	.
	6*5*4*3*2*1*factorial(0)

	*/
}