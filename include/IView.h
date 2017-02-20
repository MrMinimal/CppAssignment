#pragma once

#include <string>
#include <list>

#include "../include/IController.h"
#include "../include/SelectionItem.h"

// Interface for the view part of the MVC
// Needed in order to provide communication
// between controller and view

class IView
{
public:
	virtual void			setController(IController* controller) = 0;
	virtual void			showText() = 0;
	virtual void			showText(std::string text) = 0;
	virtual void			showItem(int index, std::string content) = 0;

	virtual void			showDataSelection(std::list<std::string>* items) = 0 ;
	virtual void			showCreateSelection(std::list<std::string>* items) = 0 ;

	virtual std::string		readInput() = 0;
	virtual std::string		readInput(std::string inputDescription) = 0;
};
