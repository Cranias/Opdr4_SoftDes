#ifndef VIEW_H
#define VIEW_H

#include "Observer.h"

class Robot;

class View : public Observer
{
	public:
		View(Robot*);
		~View();
		virtual void update();
};

#endif // VIEW_H
