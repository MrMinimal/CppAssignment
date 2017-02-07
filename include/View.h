#pragma once

#include <iostream>
#include <string>

#include "../include/IView.h"
#include "../include/IController.h"
#include "../include/SelectionItem.h"
	
// Iterates over the contents of a GargantuanTable.
// Example:
//    GargantuanTableIterator* iter = table->NewIterator();
//    for (iter->Seek("foo"); !iter->done(); iter->Next()) {
//      process(iter->key(), iter->value());
//    }
//    delete iter;
class View : public IView
{
public:
	View();
	virtual void setController(IController* controller);

	virtual void showText();
	virtual void showText(std::string text);

	virtual void showItem(int index, std::string content);

	virtual void showDataSelection(std::list<std::string>* items);

	virtual std::string		readInput();
	virtual std::string		readInput(std::string inputDescription);

private:
	IController* controller;
	virtual void showSelection(std::list<std::string>* items);
};
