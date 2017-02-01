#include <iostream>
#include <string>
#include <vector>

#include "Model.h"
#include "View.h"
#include "Controller.h"

std::vector<std::string> convertToString(int wordsNumber, char* input[])
{
	std::vector<std::string> args;

	if (wordsNumber > 1)
	{
		args.assign(input + 1, input + wordsNumber);
	}

	return args;
}

bool fileNotInDir(std::string fileName)
{
	// TODO

	return false;
}

bool fileNameTooShort(std::string fileName)
{
	return (fileName.length() == 0);
}

std::string readInput(IView* view)
{
	bool foundFile = false;
	
	std::string fileName;

	view->showText("Please enter filename to compress");

	while (!foundFile)
	{
		fileName = view->readInput();

		// Guard clauses
		if (fileNameTooShort(fileName) ||
			fileNotInDir(fileName))
		{
			break;
		}

		foundFile = true;
	}

	return fileName;
}

int main(int argc, char* argv[])
{
	View		view;
	Model		model;
	Controller	controller(&view, &model);
	
	// late bindings
	view.setController(&controller);
	model.setController(&controller);


	std::vector<std::string> args;
	args = convertToString(argc, argv);


	std::string input = readInput(view);


	system("pause");								// Make sure the program does not exit by itself
}
