#pragma once

#include <string>
#include <list>

#include "../header/IController.h"
#include "../header/SelectionItem.h"

// Iterates over the contents of a GargantuanTable.
// Example:
//    GargantuanTableIterator* iter = table->NewIterator();
//    for (iter->Seek("foo"); !iter->done(); iter->Next()) {
//      process(iter->key(), iter->value());
//    }
//    delete iter;
class IView
{
public:
	virtual void			setController(IController* controller) = 0;
	virtual void			showText() = 0;
	virtual void			showText(std::string text) = 0;
	virtual void			showItem(int index, std::string content) = 0;

	virtual void			showDataSelection(std::list<std::string>* items) = 0 ;

	virtual std::string		readInput() = 0;
	virtual std::string		readInput(std::string inputDescription) = 0;
};
