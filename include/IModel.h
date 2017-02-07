#pragma once

#include "../include/IModel.h"

#include "../include/IController.h"
#include "../include/Student.h"
#include "../include/Lecturer.h"
#include "../include/Speciality.h"

// Iterates over the contents of a GargantuanTable.
// Example:
//    GargantuanTableIterator* iter = table->NewIterator();
//    for (iter->Seek("foo"); !iter->done(); iter->Next()) {
//      process(iter->key(), iter->value());
//    }
//    delete iter;
class IModel
{
public:
	virtual void		setController(IController* controller) = 0;

	virtual Student*	getStudent(std::string preName, std::string surName) = 0;
	virtual Lecturer*	getLecturer(std::string preName, std::string surName) = 0;
	virtual Speciality*	getSpciality(std::string name) = 0;
	virtual Course*		getCourse(std::string name) = 0;

	virtual Student*	addStudent(std::string preName, std::string surName) = 0;
	virtual Lecturer*	addLecturer(std::string preName, std::string surName) = 0;
	virtual Speciality*	addSpeciality(std::string name) = 0;
	virtual Course*		addCourse(std::string name) = 0;
};
