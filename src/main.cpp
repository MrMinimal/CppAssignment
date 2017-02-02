#include <iostream>
#include <string>

#include "../header/Model.h"
#include "../header/View.h"
#include "../header/Controller.h"


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

	controller.startDB();
}
