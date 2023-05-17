#include <iostream>
#include <string>
using namespace std;


class Schedule {
	string name;

public:
	Schedule() : name() {}
	Schedule(string _name) : name(_name) {}
	string addCourse() {

	}
};

class Student {
	string name;
	Schedule schedule1;
public:
	Student() : name(" ") {}
	Student(string _name) : name(_name) {}
	Schedule getSchedule() {
		return schedule1;
	};

	class Roster {


	};


	class Course {
		string name;
		Roster roster;
	public:
		Course() : name(" "), roster() {}
	};

	class Registrar {
		Course course1;
		Student student1;
	public:
		Registrar();
		void enroll(Student student1, Course course1) {

		}
	};




