#pragma once

#include <string>

// Representation of one speciality

class Speciality
{
public:
	Speciality(std::string name);

	std::string getName();

private:
	std::string name;
};
