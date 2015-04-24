#include "aanvallend.h"
#include "robot.h"
#include "zwervend.h"
#include "klaar.h"
#include "verloren.h"
#include <iostream>

using namespace std;

State* Aanvallend::object = 0;

Aanvallend::Aanvallend()
{}

Aanvallend::~Aanvallend()
{}

void Aanvallend::start(Robot* pR)
{
	pR->setState(Zwervend::get());
	//cout<<"Switched to Zwervend"<<endl;
}

void Aanvallend::stop(Robot* pR)
{
	pR->setState(Klaar::get());
	//cout<<"Switched to Klaar"<<endl;
}

void Aanvallend::win(Robot* pR)
{
	pR->setState(Zwervend::get());
	//cout<<"Switched to Zwervend"<<endl;
}

void Aanvallend::vind(Robot*)
{}

void Aanvallend::verlies(Robot* pR)
{
	pR->setState(Verloren::get());
	//cout<<"Switched to Verloren"<<endl;
}
