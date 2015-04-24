#include <iostream>
#include "match.h"
#include "robot.h"

using namespace std;

Match::Match() : R(new Robot)
{}

Match::~Match()
{}

void Match::runRobot()
{
	cout<< R->toestand()<<endl;
	R->vind();
	cout<< R->toestand()<<endl;
	R->verlies();
	cout<< R->toestand()<<endl;
	R->stop();
	cout<< R->toestand()<<endl;
}
