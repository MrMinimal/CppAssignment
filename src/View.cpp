#include <iostream>

#include "../header/View.h"

View::View()
{
	// TODO
}

void View::setController(IController* controller)
{
	// TODO
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
