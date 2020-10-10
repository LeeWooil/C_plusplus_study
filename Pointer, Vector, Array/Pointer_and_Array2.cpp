#include <iostream>

int main()
{
	int a[] = { 2, 4, 6, 8, 10, 12, 14, 16, 18, 20 };
	int* begin, * end, * cursor;
	begin = a;
	end = a + 10;

	cursor = begin;
	while (cursor != end)
	{
		std::cout << *cursor << ' ';
		cursor++;
	}
	std::cout << '\n';
}