#include "../header/Controller.h"

Controller::Controller(View * view, Model * model)
{
	this->view	= view;
	this->model	= model;
}


void Controller::startDB()
{
	std::list<std::string> dataSelectionItems;

	dataSelectionItems.push_back("test1");
	dataSelectionItems.push_back("test2");
	dataSelectionItems.push_back("test3");

	view->showDataSelection(&dataSelectionItems);	
}
