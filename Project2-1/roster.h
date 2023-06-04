#ifndef roster_h
#define roster_h

#include <iostream>
#include <string>
using namespace std;

class Roster {
	int size;
	string* name_roster;
public:
	Roster(int _size);
	~Roster() ;
	void addStudent(string _name) ;
	void print() ;

};
#endif // !roster_h

