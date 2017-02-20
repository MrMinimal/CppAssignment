#pragma once

#include <iostream>
#include <string>

#include "../include/IView.h"
#include "../include/IController.h"
	
// View part of the MVC Model
// Holds all logic to display a UI, but not the contents its self
// Communicates via the IView interface with the Controller

class View : public IView
{
public:
	View();

	virtual void setController(IController* controller);

	virtual void showText();
	virtual void showText(std::string text);

	virtual void showDataSelection(std::list<std::string>* items);
	virtual void showCreateSelection(std::list<std::string>* items);

	virtual std::string		readInput();
	virtual std::string		readInput(std::string inputDescription);

private:
	IController* controller;

	// Display items in list with index
	virtual void showSelection(std::list<std::string>* items);

	// Display string with index specified
	virtual void showItem(int index, std::string content);
};
