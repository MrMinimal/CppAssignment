#pragma once

#include <list>

#include "../include/IModel.h"

#include "../include/IController.h"
#include "../include/Student.h"
#include "../include/Lecturer.h"
#include "../include/Speciality.h"

// Interface for the model part of the MVC
// Needed in order to provide communication
// between controller and model

class IModel
{
public:
	virtual void					setController(IController* controller) = 0;

	virtual Student*				getStudent(std::string preName, std::string surName) = 0;
	virtual Lecturer*				getLecturer(std::string preName, std::string surName) = 0;
	virtual Speciality*				getSpciality(std::string name) = 0;
	virtual Course	*				getCourse(std::string name) = 0;
	virtual std::list<Course*>		getCourses() = 0; 
	virtual std::list<Student*>		getStudents() = 0; 
	virtual std::list<Speciality*>	getSpecialities() = 0; 

	virtual Student*	addStudent(std::string preName, std::string surName) = 0;
	virtual Lecturer*	addLecturer(std::string preName, std::string surName) = 0;
	virtual Speciality*	addSpeciality(std::string name) = 0;
	virtual Course*		addCourse(std::string name) = 0;
};
