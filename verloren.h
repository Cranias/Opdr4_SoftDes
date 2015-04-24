#ifndef VERLOREN_H
#define VERLOREN_H

#include "state.h"
#include <string>
using namespace std;

class Verloren : public State
{
	public:
		Verloren();
		~Verloren();
		virtual void start(Robot*);
		virtual void stop(Robot*);
		virtual void win(Robot*);
		virtual void vind(Robot*);
		virtual void verlies(Robot*);
		virtual string toestand(){return "Verloren";}
		static State* get()
		{
			if(!object) object = new Verloren;
			return object;
		}
	private:
		static State* object;
};

#endif // VERLOREN_H
