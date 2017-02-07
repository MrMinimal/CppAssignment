#include <iostream>
#include <string>

#include "../include/Model.h"
#include "../include/View.h"
#include "../include/Controller.h"


std::string readInput(IView* view)
{
	bool usableInput = false;
	
	std::string readInput;

	while (!usableInput)
	{
		readInput = view->readInput();

		// Guard clauses
		if (false)			// TODO
		{
			continue;
		}

		usableInput = true;
	}

	return readInput;
}


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
