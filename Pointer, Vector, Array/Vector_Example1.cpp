#include <iostream>
#include <vector>

using namespace std;

int main()
{
	// 길이 10인 벡터 선언
	vector<double> vec(10);

	cout << "Enter 10 numbers : ";
	//vec의 주소값 elem에 copy
	for (double& elem : vec)
		cin >> elem;

	// vec의 value elem에 copy 
	for (double elem : vec)
		cout << elem << '\n';
}