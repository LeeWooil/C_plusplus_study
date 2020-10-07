#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	ofstream myfile;
	myfile.open("example.txt");
	myfile << "Writung this to a file.\n";
	myfile.close();
	return 0;
}