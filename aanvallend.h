#ifndef AANVALLEND_H
#define AANVALLEND_H

#include "state.h"
#include <string>
using namespace std;

class Aanvallend : public State
{
	public:
		Aanvallend();
		~Aanvallend();
		virtual void start(Robot*);
		virtual void stop(Robot*);
		virtual void win(Robot*);
		virtual void vind(Robot*);
		virtual void verlies(Robot*);
		virtual string toestand(){return "Aanvallend";}
		static State* get()
		{
			if(!object) object = new Aanvallend;
			return object;
		}
	private:
		static State* object;
};

#endif // AANVALLEND_H
