#pragma once

#include <list>

#include "../include/IController.h"
#include "../include/View.h"
#include "../include/Model.h"

// Contains all logic to change data and determines
// what is shown in the UI.
// Communicates via the IModel and IView interface
// with model and view respectively.

// All input states the UI can have
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
