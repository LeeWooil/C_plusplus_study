#include "registrar.h"


Registrar::Registrar() {}
Registrar::~Registrar() {}
void Registrar::enroll(Student student, Course course) {
	(course.getRoster())->addStudent(student.student_name);
	(student.getSchedule())->addCourse(course.course_name);
}