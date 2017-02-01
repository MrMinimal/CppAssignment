#pragma once;

#include "IView.h"
	
// Iterates over the contents of a GargantuanTable.
// Example:
//    GargantuanTableIterator* iter = table->NewIterator();
//    for (iter->Seek("foo"); !iter->done(); iter->Next()) {
//      process(iter->key(), iter->value());
//    }
//    delete iter;
class View : virtual IView
{
public:
	View();
	virtual void setController(IController* controller);
	virtual void showText(std::string text);
	virtual std::string readInput();
};