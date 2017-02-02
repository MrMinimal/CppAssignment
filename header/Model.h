#pragma once

#include "../header/IModel.h"

// Iterates over the contents of a GargantuanTable.
// Example:
//    GargantuanTableIterator* iter = table->NewIterator();
//    for (iter->Seek("foo"); !iter->done(); iter->Next()) {
//      process(iter->key(), iter->value());
//    }
//    delete iter;
class Model : public IModel
{
public:
	Model();
	virtual void setController(IController* controller);
};
