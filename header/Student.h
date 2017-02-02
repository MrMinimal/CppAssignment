#pragma once

#include <string>

class Student
{
public:
	Student(std::string preName, std::string surName);

private:
	std::string surName;
	std::string preName;
};
