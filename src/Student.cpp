#include "../header/Student.h"

Student::Student(std::string preName, std::string surName)
{
	this->preName = preName;
	this->surName = surName;
}


void Student::setCourse(Course* course)
{
	this->course = course;
}
