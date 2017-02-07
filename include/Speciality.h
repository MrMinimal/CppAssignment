#pragma once

#include <string>

class Speciality
{
public:
	Speciality(std::string name);

	std::string getName();

private:
	std::string name;
};
