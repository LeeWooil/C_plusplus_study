#include "schedule.h"

Schedule::Schedule() : size(0) {
	name_schedule = new string[10];
}
Schedule::~Schedule() {
	delete[] name_schedule;
}
void Schedule::addCourse(string schedule_name) {
	name_schedule[size] = schedule_name;
	size++;
}
void Schedule::print() {
	for (int i = 0; i < size; i++) {
		cout << name_schedule[i] << endl;
	}
	cout << endl << endl;
}