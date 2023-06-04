#ifndef registrar_h
#define registrara_h

#include "student.h"
#include "course.h"
#include <iostream>
#include <string>

using namespace std;

class Registrar {
public:
	Registrar();
	~Registrar();
	void enroll(Student student, Course course);
};
#endif // !registrar_h


