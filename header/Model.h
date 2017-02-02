#pragma once

#include <list>

#include "../header/IModel.h"
#include "../header/IController.h"
#include "../header/Course.h"
#include "../header/Student.h"
#include "../header/Lecturer.h"

// Model part of the MVC Model
// 
// Holds all the relevant data to save/load
// Communicates via the IModel interface with the Controller
class Model : public IModel
{
public:
	Model();
	virtual void setController(IController* controller);

private:
	IController*		controller;

	std::list<Course>	courses;
	std::list<Student>	students;
	std::list<Lecturer>	lecturers;
};
