#include <iostream>
#include <vector>

using namespace std;

int main()
{
	//const int SIZE = 3;
	vector<int> a{ 5, 5, 5 };
	cout << "a contains ";
	for (unsigned i = 0; i < a.size(); i++)
		cout << a[i] << " ";
	/*
	for (int i =0; i <SIZE; i++)
		cout<<a.at(I) << " ";
	*/
	cout << '\n';

	for (unsigned i = 0; i < a.size();i++)
		a.at(i) = 8;

	cout << "a contains ";
	for (unsigned i = 0; i < a.size(); i++)
		cout << a.at(i) << " ";
	cout << '\n';
}