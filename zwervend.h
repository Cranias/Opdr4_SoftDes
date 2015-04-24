#ifndef ZWERVEND_H
#define ZWERVEND_H

#include "state.h"
#include <string>
using namespace std;

class Zwervend : public State
{
	public:
		Zwervend();
		~Zwervend();
		virtual void start(Robot*);
		virtual void stop(Robot*);
		virtual void win(Robot*);
		virtual void vind(Robot*);
		virtual void verlies(Robot*);
		virtual string toestand(){return "Zwervend";}
		static State* get()
		{
			if(!object) object = new Zwervend;
			return object;
		}
	private:
		static State* object;
};

#endif // ZWERVEND_H
