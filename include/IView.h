#pragma once

#include <string>
#include <list>

#include "../include/IController.h"

// Interface for the view part of the MVC
// Needed in order to provide communication
// between controller and view

class IView
{
public:
	// Assign reference for MVC
	virtual void			setController(IController* controller) = 0;

	// Display lines of text
	virtual void			showText() = 0;
	virtual void			showText(std::string text) = 0;

	// Display lists
	virtual void			showDataSelection(std::list<std::string>* items) = 0 ;
	virtual void			showCreateSelection(std::list<std::string>* items) = 0 ;

	// Read Input
	virtual std::string		readInput() = 0;
	virtual std::string		readInput(std::string inputDescription) = 0;

private:
	// Show a text item with a certain index provided
	virtual void			showItem(int index, std::string content) = 0;
};
