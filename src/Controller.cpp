#include "../header/Controller.h"

Controller::Controller(View * view, Model * model)
{
	this->view	= view;
	this->model	= model;
}


void Controller::startDB()
{
	std::list<std::string> dataSelectionItems;

	dataSelectionItems.push_back("Load from file");
	dataSelectionItems.push_back("Create new database");

	view->showDataSelection(&dataSelectionItems);	

	view->readInput("Selection");
}
