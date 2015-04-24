#ifndef ROBOT_H
#define ROBOT_H

#include "Observer.h"
#include <string>

using namespace std;

class State;

class Robot : public Subject
{
	public:
		Robot();
		~Robot();
		virtual void start();
		virtual void stop();
		virtual void vind();
		virtual void win();
		virtual void verlies();
		virtual string toestand();
		virtual void setState(State* S){pS=S;}
	private:
		State* pS;
};

#endif // ROBOT_H
