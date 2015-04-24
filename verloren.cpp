#include "verloren.h"
#include "klaar.h"
#include "robot.h"
#include <iostream>
using namespace std;

State* Verloren::object = 0;

Verloren::Verloren()
{}

Verloren::~Verloren()
{}

void Verloren::start(Robot*)
{}

void Verloren::stop(Robot* pR)
{
	pR->setState(Klaar::get());
	//cout<<"Switched to Klaar"<<endl;
}

void Verloren::win(Robot*)
{}

void Verloren::vind(Robot*)
{}

void Verloren::verlies(Robot*)
{}
