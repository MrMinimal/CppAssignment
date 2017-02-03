#include "../header/Controller.h"

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

				break;
			}

			case CREATE_NEW_DB:
			{
				// TODO show ui for entering students, etc

				break;
			}
		}

		view->showText();
	}
}
