#include <iostream>
/*
Using while Statement
int main()
{
	int in_value = -1;
	std::cout << "Please enter an integer in the range 0-10: ";
	while (in_value < 0 || in_value >10)
		std::cin >> in_value;
	std::cout << "Legal value entered was " << in_value << '\n';
}
*/

//Using do-while Statement
int main()
{
	int in_value ;
	std::cout << "Please enter an integer in the range 0-10: ";
	do
		std::cin >> in_value;
	while (in_value < 0 || in_value >10);
	std::cout << "Legal value entered was " << in_value << '\n';
}