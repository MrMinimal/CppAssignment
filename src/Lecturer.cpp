#include "../header/Lecturer.h"

Lecturer::Lecturer(std::string preName, std::string surName)
{
	this->preName = preName;
	this->surName = surName;
}


void Lecturer::setSpeciality(Speciality* speciality)
{
	this->speciality = speciality;
}


std::string Lecturer::getPreName()
{
	return preName;
}


std::string Lecturer::getSurName()
{
	return surName;
}
