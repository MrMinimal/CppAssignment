#pragma once

#include <string>

#include "../header/Speciality.h"

class Lecturer
{
public:
	Lecturer(std::string preName, std::string surName);	
	void setSpeciality(Speciality* speciality);

	std::string getPreName();
	std::string getSurName();
	
private:
	std::string preName;
	std::string surName;

	Speciality* speciality;
};
