#pragma once

#include <string>

#include "../header/Course.h"

class Student
{
public:
	Student(std::string preName, std::string surName);
	void setCourse(Course* course);

	std::string getPreName();
	std::string getSurName();

private:
	std::string surName;
	std::string preName;

	Course* course;
};
