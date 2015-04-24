#include "robot.h"
#include "state.h"
#include "zwervend.h"
#include "aanvallend.h"
#include "klaar.h"
#include "Observer.h"

Robot::Robot() : pS(new Zwervend)
{}

Robot::~Robot()
{}

void Robot::start()
{
	pS->start(this);
	notify();
}

void Robot::stop()
{
	pS->stop(this);
	notify();
}

void Robot::vind()
{
	pS->vind(this);
	notify();
}

void Robot::win()
{
	pS->win(this);
	notify();
}

void Robot::verlies()
{
	pS->verlies(this);
	notify();
}

string Robot::toestand()
{
	return pS->toestand();
}
