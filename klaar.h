#ifndef KLAAR_H
#define KLAAR_H

#include "state.h"
#include <string>
using namespace std;

class Klaar : public State
{
	public:
		Klaar();
		~Klaar();
		virtual void start(Robot*);
		virtual void stop(Robot*);
		virtual void win(Robot*);
		virtual void vind(Robot*);
		virtual void verlies(Robot*);
		virtual string toestand(){return "Klaar";}
		static State* get()
		{
			if(!object) object = new Klaar;
			return object;
		}
	private:
		static State* object;
};

#endif // KLAAR_H
