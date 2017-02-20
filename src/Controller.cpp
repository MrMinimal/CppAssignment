#include "../include/Controller.h"

Controller::Controller(View * view, Model * model)
{
	this->view	= view;
	this->model	= model;
}


// main loop to read input and react to it
void Controller::runDB()
{
	UIState state = SELECT_DATA_SOURCE;

	bool stopped = false;
	
	// main loop
	while (!stopped)
	{
		switch (state)
		{
			case SELECT_DATA_SOURCE:
			{
				// All selectable option strings for the user
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
				// All selectable option strings for the user
				std::list<std::string> createSelectionItems;

				createSelectionItems.push_back("Create new course");
				createSelectionItems.push_back("Create new student");
				createSelectionItems.push_back("Show courses");
				createSelectionItems.push_back("Show students");
				createSelectionItems.push_back("Assign course to student");

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

					for(std::list<Course*>::iterator iterator = courses.begin(); iterator != courses.end(); iterator++)
					{
						Course* currentCourse = *iterator;

						view->showText(currentCourse->getName());
					}
				}
				else if (input == "4")
				{
					view->showText();
					view->showText("Students:");

					std::list<Student*> students = model->getStudents();

					for(std::list<Student*>::iterator iterator = students.begin(); iterator != students.end(); iterator++)
					{
						Student* currentStudent = *iterator;

						view->showText(currentStudent->getPreName() + " " + currentStudent->getSurName());

						// if the student is assigned to a course, output it as well
						Course* course = currentStudent->getCourse();

						if (course)
						{
							view->showText("\t" + course->getName());	
						}
					}
				}
				else if (input == "5")
				{
					view->showText("Please assign a student to a course");

					std::string studentPreName	= view->readInput("Prename");
					std::string studentSurName	= view->readInput("Surname");
					std::string courseName		= view->readInput("Course ");

					Student* student	= model->getStudent(studentPreName, studentSurName);
					Course* course		= model->getCourse(courseName);

					// sanity checks
					if (student == NULL)
					{
						view->showText("Please enter an existing student");
						break;
					}

					if (course == NULL)
					{
						view->showText("Please enter an existing course");
						break;
					}

					// only if sanity checks passed
					student->setCourse(course);

					view->showText("Successfully assigned " + studentPreName 
									+ " "
									+ studentSurName  
									+ " to " 
									+ course->getName());
				}

				break;
			}
		}

		// formatting, split outputs with a new line
		view->showText();
	}
}
