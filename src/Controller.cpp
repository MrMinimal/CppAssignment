#include "../header/Controller.h"

Controller::Controller(View * view, Model * model)
{
	this->view	= view;
	this->model	= model;
}


void Controller::startDB()
{
	view->showDataSelection();	
}
