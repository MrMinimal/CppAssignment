#pragma once

#include <list>

#include "../include/IController.h"
#include "../include/View.h"
#include "../include/Model.h"
#include "../include/SelectionItem.h"

enum UIState
{
	SELECT_DATA_SOURCE,
	LOAD_FROM_FILE,
	CREATE_NEW_DB,
};

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
