#include <iostream>
using namespace std;
int main() {
	cout << "Please enter the month and day as numbers: ";
	int month, day;
	cin >> month >> day;
	// Translate month into English
	if (month == 1)
		cout << "January";
	else if (month == 2)
		cout << "February";
	else if (month == 3)
		cout << "March";
	else if (month == 4)
		cout << "April";
	else if (month == 5)
		cout << "May";
	else if (month == 6)
		cout << "June";
	else if (month == 7)
		cout << "July";
	else if (month == 8)
		cout << "August";
	else if (month == 9)
		cout << "September";
	else if (month == 10)
		cout << "October";
	else if (month == 11)
		cout << "November";
	else
		cout << "December";
	// Add the day
	cout << " " << day << " or " << day << " de ";
	// Translate month into Spanish
	if (month == 1)
		cout << "enero";
	else if (month == 2)
		cout << "febrero";
	else if (month == 3)
		cout << "marzo";
	else if (month == 4)
		cout << "abril";
	else if (month == 5)
		cout << "mayo";
	else if (month == 6)
		cout << "junio";
	else if (month == 7)
		cout << "julio";
	else if (month == 8)
		cout << "agosto";
	else if (month == 9)
		cout << "septiembre";
	else if (month == 10)
		cout << "octubre";
	else if (month == 11)
		cout << "noviembre";
	else
		cout << "diciembre";
	cout << endl;
}