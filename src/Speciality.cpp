#include "../header/Speciality.h"

Speciality::Speciality(std::string name)
{
	this->name = name;
}


std::string Speciality::getName()
{
	return this->name;
}
