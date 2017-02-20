#pragma once

#include <string>

#include "../include/Course.h"

// Representation of one student

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
