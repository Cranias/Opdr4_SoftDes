#include "view.h"
#include "robot.h"
#include <iostream>

using namespace std;

View::View(Robot* pR) : Observer(pR)
{
	
}

View::~View()
{
	
}

void View::update()
{
	cout<<dynamic_cast<Robot*>(getSubject())->toestand()<<endl;
}
