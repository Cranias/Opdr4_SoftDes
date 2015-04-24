#include "zwervend.h"
#include "klaar.h"
#include "aanvallend.h"
#include "robot.h"
#include <iostream>

using namespace std;

State* Zwervend::object = 0;

Zwervend::Zwervend()
{}

Zwervend::~Zwervend()
{}

void Zwervend::start(Robot*)
{}

void Zwervend::stop(Robot* pR)
{
	pR->setState(Klaar::get());
	//cout<<"Switched to Klaar"<<endl;
}

void Zwervend::win(Robot*)
{}

void Zwervend::vind(Robot* pR)
{
	pR->setState(Aanvallend::get());
	//cout<<"Switched state to Aanvallend"<<endl;
}

void Zwervend::verlies(Robot*)
{}
