#include "robot.h"
#include "state.h"
#include "zwervend.h"
#include "aanvallend.h"
#include "klaar.h"

Robot::Robot() : pS(new Zwervend)
{}

Robot::~Robot()
{}

void Robot::start()
{
	pS->start(this);
}

void Robot::stop()
{
	pS->stop(this);
}

void Robot::vind()
{
	pS->vind(this);
}

void Robot::win()
{
	pS->win(this);
}

void Robot::verlies()
{
	pS->verlies(this);
}

string Robot::toestand()
{
	return pS->toestand();
}
