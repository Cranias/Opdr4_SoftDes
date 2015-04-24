#include "klaar.h"
#include "robot.h"
#include "zwervend.h"
#include <iostream>

using namespace std;

State* Klaar::object = 0;

Klaar::Klaar()
{}

Klaar::~Klaar()
{}

void Klaar::start(Robot* pR)
{
	pR->setState(Zwervend::get());
	//cout<<"Switched to Zwervend"<<endl;
}

void Klaar::stop(Robot*)
{}

void Klaar::win(Robot*)
{}

void Klaar::vind(Robot*)
{}

void Klaar::verlies(Robot*)
{}
