#pragma once

#include <string>

#include "../header/IController.h"

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
	virtual void			showText(std::string text) = 0;
	virtual void			showDataSelection() = 0;
	virtual std::string		readInput() = 0;
};
