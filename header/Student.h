#pragma once

#include <string>

#include "../header/Course.h"

class Student
{
public:
	Student(std::string preName, std::string surName);
	void setCourse(Course* course);


private:
	std::string surName;
	std::string preName;

	Course* course;
};
