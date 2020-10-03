#include <iostream>
#include <iomanip>
#include <locale>

int main()
{
	int power = 1;
	std::cout.imbue(std::locale(""));
	while (power <= 1000000000)
	{
		std::cout << std::setw(13) << power << '\n';
		power *= 10;
	}
}
