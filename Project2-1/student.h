#pragma once
#ifndef student_h
#define student_h

#include "schedule.h"
#include <iostream>
#include <string>

using namespace std;

class Student {
	string student_name;
	Schedule* schedule;
public:
	Student(string _name);
	~Student();
	Schedule* getSchedule();
	string getName();
	void print();
};
#endif // !student_h
