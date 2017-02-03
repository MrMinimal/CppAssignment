#pragma once

#include "../header/IModel.h"

#include "../header/IController.h"
#include "../header/Student.h"
#include "../header/Lecturer.h"
#include "../header/Speciality.h"

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
	virtual Student*	addStudent(std::string preName, std::string surName);
	virtual Lecturer*	addLecturer(std::string preName, std::string surName);
	virtual Speciality*	addSpeciality(std::string name);
	virtual Course*		addCourse(std::string name);
};
