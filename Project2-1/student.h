#pragma once
#ifndef student_h
#define student_h

#include "schedule.h"
#include <iostream>
#include <string>

using namespace std;

class Student {
	Schedule* schedule;
public:
	string student_name;
	Student(string _name);
	~Student();
	Schedule* getSchedule();
	void print();
};
#endif // !student_h
