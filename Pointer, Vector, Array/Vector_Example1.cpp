#include <iostream>
#include <vector>

using namespace std;

int main()
{
	// ���� 10�� ���� ����
	vector<double> vec(10);

	cout << "Enter 10 numbers : ";
	//vec�� �ּҰ� elem�� copy
	for (double& elem : vec)
		cin >> elem;

	// vec�� value elem�� copy 
	for (double elem : vec)
		cout << elem << '\n';
}