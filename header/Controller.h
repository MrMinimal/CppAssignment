#pragma once

#include <list>

#include "../header/IController.h"
#include "../header/View.h"
#include "../header/Model.h"
#include "../header/SelectionItem.h"

enum UIState
{
	SELECT_DATA_SOURCE,
	LOAD_FROM_FILE,
	CREATE_NEW_DB
};

// Iterates over the contents of a GargantuanTable.
// Example:
//    GargantuanTableIterator* iter = table->NewIterator();
//    for (iter->Seek("foo"); !iter->done(); iter->Next()) {
//      process(iter->key(), iter->value());
//    }
//    delete iter;
class Controller : public IController
{
public:
	Controller(View* view, Model* model);
	virtual void runDB();

private:
	// references to different parts of the MVC concept
	View*	view;
	Model*	model;
};
