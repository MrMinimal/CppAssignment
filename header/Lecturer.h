#pragma once

#include <string>

#include "../header/Speciality.h"

class Lecturer
{
public:
	Lecturer(std::string preName, std::string surName);	
	void setSpeciality(Speciality* speciality);
	
private:
	std::string preName;
	std::string surName;

	Speciality* speciality;
};
