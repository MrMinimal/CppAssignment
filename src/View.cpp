#include <iostream>

#include "../header/View.h"

View::View()
{
	// TODO
}

void View::setController(IController* controller)
{
	this->controller = controller;	
}


void View::showText()
{
	std::cout << std::endl;
}


void View::showText(std::string text)
{
	// TODO guard clause
	std::cout << text << std::endl;
}


std::string View::readInput()
{
	std::string input;
	std::cin >> input;

	return std::string();
}


void View::showDataSelection()
{
	showText("Student Tracking Solution");
	showText();
	showText("TODO show list");
}
