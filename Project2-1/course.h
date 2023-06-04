#ifndef course_h
#define course_h

#include "roster.h"
#include <iostream>
#include <string>
using namespace std;

class Course {
	string course_name;
	int unit;
	Roster* roster;
public:
	Course(string _name, int _size);
	~Course();
	Roster* getRoster();
	string getName();
	void print();
};

#endif
