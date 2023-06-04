#ifndef schedule_h
#define schedule_h

#include <iostream>
#include <string>
using namespace std;

class Schedule {
	string* name_schedule;
	int size;
public:
	Schedule();
	~Schedule();
	void addCourse(string schedule_name);
	void print();
};


#endif 
