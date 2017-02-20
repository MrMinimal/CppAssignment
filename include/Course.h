#pragma once

#include <string>

#include "../include/Speciality.h"

// Representation of one course

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
