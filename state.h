#ifndef STATE_H
#define STATE_H

#include <string>
using namespace std;

class Robot;

class State
{
	public:
		State();
		~State();
		virtual void start(Robot*) =0;
		virtual void stop(Robot*) =0;
		virtual void win(Robot*) =0;
		virtual void vind(Robot*) =0;
		virtual void verlies(Robot*) =0;
		virtual string toestand() =0;
};

#endif // STATE_H
