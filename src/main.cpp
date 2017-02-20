#include <iostream>
#include <string>

#include "../include/Model.h"
#include "../include/View.h"
#include "../include/Controller.h"


int main()
{
	View		view;
	Model		model;
	Controller	controller(&view, &model);
	
	// late bindings
	view.setController(&controller);
	model.setController(&controller);

	controller.runDB();
}
