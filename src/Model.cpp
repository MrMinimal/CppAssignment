#include "../header/Model.h"

Model::Model()
{
	// empty	
}


void Model::setController(IController* controller)
{
	this->controller = controller;
}
