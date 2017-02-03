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

	virtual Student*	getStudent(std::string preName, std::string surName);
	virtual Lecturer*	getLecturer(std::string preName, std::string surName);
	virtual Speciality*	getSpciality(std::string name);
	virtual Course*		getCourse(std::string name);

	virtual Student*	addStudent(std::string preName, std::string surName);
	virtual Lecturer*	addLecturer(std::string preName, std::string surName);
	virtual Speciality*	addSpeciality(std::string name);
	virtual Course*		addCourse(std::string name);

private:
	IController*		controller;

	std::list<Course*>		courses;
	std::list<Student*>		students;
	std::list<Lecturer*>	lecturers;
	std::list<Speciality*>	specialities;
};
