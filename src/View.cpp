#include "../header/View.h"

View::View()
{
	showText("Student Tracking Solution");
	showText();
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

	return input;
}


std::string	View::readInput(std::string inputDescription)
{
	std::cout << inputDescription << ":\t";

	return readInput();
}


void View::showItem(int index, std::string content)
{
	std::cout << std::to_string(index + 1) << ". " << content << std::endl;
}


void View::showSelection(std::list<std::string>* items)
{
	// iterate over all items
	for(std::list<std::string>::iterator iterator = items->begin(); iterator != items->end(); iterator++)
	{
		int currentIndex = std::distance(items->begin(), iterator);

		showItem(currentIndex, *iterator);
	}

	showText();
}


void View::showDataSelection(std::list<std::string>* items)
{
	showText("Please select an option:");

	showSelection(items);
}
