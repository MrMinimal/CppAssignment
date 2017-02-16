#include "../include/Model.h"

Model::Model()
{
	// empty	
}


void Model::setController(IController* controller)
{
	this->controller = controller;
}


Student*	Model::addStudent(std::string preName, std::string surName)
{
	Student* newStudent = new Student(preName, surName);
	
	this->students.push_back(newStudent);

	return newStudent;
}


Lecturer*	Model::addLecturer(std::string preName, std::string surName)
{
	Lecturer* newLecturer = new Lecturer(preName, surName);
	
	this->lecturers.push_back(newLecturer);

	return newLecturer;
}


Speciality*	Model::addSpeciality(std::string name)
{
	Speciality* newSpeciality = new Speciality(name);
	
	this->specialities.push_back(newSpeciality);

	return newSpeciality;
}


Course*		Model::addCourse(std::string name)
{
	Course* newCourse = new Course(name);
	
	this->courses.push_back(newCourse);

	return newCourse;
}


Student*	Model::getStudent(std::string preName, std::string surName)
{
	// iterate over all students 
	for(std::list<Student*>::iterator iterator = students.begin(); iterator != students.end(); iterator++)
	{
		Student* currentStudent = *iterator;

		// check name matches
		if (currentStudent->getPreName() == preName &&
			currentStudent->getSurName() == surName)
		{
			return currentStudent;
		}
	}

	// reached if no match found
	return NULL;
}


Lecturer*	Model::getLecturer(std::string preName, std::string surName)
{
	// iterate over all students 
	for(std::list<Lecturer*>::iterator iterator = lecturers.begin(); iterator != lecturers.end(); iterator++)
	{
		Lecturer* currentLecturer = *iterator;

		// check name matches
		if (currentLecturer->getPreName() == preName &&
			currentLecturer->getSurName() == surName)
		{
			return currentLecturer;
		}
	}

	// reached if no match found
	return NULL;
}


Speciality*	Model::getSpciality(std::string name)
{
	// iterate over all students 
	for(std::list<Speciality*>::iterator iterator = specialities.begin(); iterator != specialities.end(); iterator++)
	{
		Speciality* currentSpeciality = *iterator;

		// check name matches
		if (currentSpeciality->getName() == name)
		{
			return currentSpeciality;
		}
	}

	// reached if no match found
	return NULL;
}


Course*		Model::getCourse(std::string name)
{
	// iterate over all students 
	for(std::list<Course*>::iterator iterator = courses.begin(); iterator != courses.end(); iterator++)
	{
		Course* currentCourse = *iterator;

		// check name matches
		if (currentCourse->getName() == name)
		{
			return currentCourse;
		}
	}

	// reached if no match found
	return NULL;
}


std::list<Course*> Model::getCourses()
{
	return courses;
}


std::list<Student*> Model::getStudents()
{
	return students;
}


std::list<Speciality*> Model::getSpecialities()
{
	return specialities;
}
