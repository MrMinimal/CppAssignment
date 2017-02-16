#include "../include/Controller.h"

Controller::Controller(View * view, Model * model)
{
	this->view	= view;
	this->model	= model;
}


void Controller::runDB()
{
	UIState state = SELECT_DATA_SOURCE;

	bool stopped = false;
	
	while (!stopped)
	{
		switch (state)
		{
			case SELECT_DATA_SOURCE:
			{
				std::list<std::string> dataSelectionItems;

				dataSelectionItems.push_back("Load from file");
				dataSelectionItems.push_back("Create new database");

				view->showDataSelection(&dataSelectionItems);	

				std::string input = view->readInput("Selection");

				// handle input
				if (input == "1")
				{
					state = LOAD_FROM_FILE;
				}
				else if (input == "2")
				{
					state = CREATE_NEW_DB;
				}

				break;
			}

			case LOAD_FROM_FILE:
			{
				// TODO show dialog to enter filename
				view->showText("TODO: needs to be implemented");

				state = SELECT_DATA_SOURCE;

				break;
			}

			case CREATE_NEW_DB:
			{
				std::list<std::string> createSelectionItems;

				createSelectionItems.push_back("Create new course");
				createSelectionItems.push_back("Create new student");
				createSelectionItems.push_back("Show courses");
				createSelectionItems.push_back("Show students");

				view->showCreateSelection(&createSelectionItems);	

				std::string input = view->readInput("Selection");

				// handle input
				if (input == "1")
				{
					std::string input = view->readInput("Coursename");

					model->addCourse(input);

					view->showText();
					view->showText("Successfully created");
				}
				else if (input == "2")
				{
					std::string preName = view->readInput("Prename");
					std::string surName = view->readInput("Surname");

					model->addStudent(preName, surName);

					view->showText();
					view->showText("Successfully created");
				}
				else if (input == "3")
				{
					view->showText();
					view->showText("Courses:");


					std::list<Course*> courses = model->getCourses();

					std::list<std::string> coursesList; 

					for(std::list<Course*>::iterator iterator = courses.begin(); iterator != courses.end(); iterator++)
					{
						Course* currentCourse = *iterator;

						coursesList.push_back(currentCourse->getName());
					}

					for(std::list<std::string>::iterator iterator = coursesList.begin(); iterator != coursesList.end(); iterator++)
					{
						std::string currentName = *iterator;

						view->showText(currentName);
					}
				}
				else if (input == "4")
				{
					view->showText();
					view->showText("Students:");

					std::list<Student*> students = model->getStudents();

					std::list<std::string> studentList; 

					for(std::list<Student*>::iterator iterator = students.begin(); iterator != students.end(); iterator++)
					{
						Student* currentStudent = *iterator;

						studentList.push_back(currentStudent->getPreName() + " " + currentStudent->getSurName());
					}

					for(std::list<std::string>::iterator iterator = studentList.begin(); iterator != studentList.end(); iterator++)
					{
						std::string currentName = *iterator;

						view->showText(currentName);
					}
				}

				break;
			}
		}

		// formatting, split outputs with a new line
		view->showText();
	}
}
