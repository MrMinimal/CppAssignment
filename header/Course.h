#pragma once

#include <string>

#include "../header/Speciality.h"

class Course
{
public:
	Course(std::string name);

	void setSpeciality(Speciality* speciality);

	std::string getName();

private:
	std::string		name;
	Speciality*		speciality;
};
