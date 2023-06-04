#include "course.h"

Course::Course(string _name, int _size) : course_name(_name), unit(_size) {
	roster = new Roster(unit);
}
Course::~Course() {}
Roster* Course::getRoster() {
	return roster;
}
string Course::getName() {
	return course_name;
}
void Course::print() {
	cout << "Course Name: " << course_name << endl;
	cout << "Number of Units: " << unit << endl;
	roster->print();
}
