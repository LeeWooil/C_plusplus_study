#include "student.h"

Student::Student(string _name) : student_name(_name) {
	schedule = new Schedule;
}
Student::~Student(){}
Schedule* Student::getSchedule() {
	return schedule;
}
string Student::getName() {
	return student_name;
}
void Student::print() {
	cout << "Student name: " << student_name << endl;
	cout << "List of Courses" << endl;
	schedule->print();
}