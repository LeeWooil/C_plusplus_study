#ifndef course_h
#define course_h

#include "roster.h"
#include <iostream>
#include <string>
using namespace std;

class Course {
	int unit;
	Roster* roster;
public:
	string course_name;
	Course(string _name, int _size);
	~Course();
	Roster* getRoster();
	void print();
};

#endif
