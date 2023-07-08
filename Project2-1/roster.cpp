#include "roster.h"

Roster::Roster(int _size) : size(0) {
	name_roster = new string[300];
}
Roster::~Roster() {
	delete[] name_roster;
}
void Roster::addStudent(string _name) {
	name_roster[size] = _name;
	size++;
}
void Roster::print() {
	cout << "List of Students" << endl;
	for (int i = 0; i < size; i++) {
		cout << name_roster[i] << endl;
	}
	cout << endl <<endl;
}
