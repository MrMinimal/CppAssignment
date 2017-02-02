#include "../header/Course.h"

Course::Course(std::string name)
{
	this->name = name;
}


void Course::setSpeciality(Speciality* speciality)
{
	this->speciality = speciality;
}
