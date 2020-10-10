#include <iostream>
#include <vector>
#include<iomanip>

using namespace std;
//using Matrix = vector<vector<double>>;
void print(const vector<vector<double>>& m)
//void print(const Matrix& m)
{
	for (unsigned row = 0; row < m.size(); row++)
	{
		for (unsigned col = 0; col < m[row].size();col++)
			cout << setw(5) << m[row][col];
		cout << '\n';
	}
}

void print_simplify(const vector<vector<double>>& m)
{
	for (const vector<double>& row : m)
	{
		for (int elem : row)
			cout << setw(5) << elem;
		cout << '\n';
	}
}

int main()
{
	vector<vector<double>> a{ {5,6,7},{1,2,3} };
	print(a);
	print_simplify(a);
}