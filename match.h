#ifndef MATCH_H
#define MATCH_H

class Robot;

class Match
{
	public:
		Match();
		~Match();
		virtual void runRobot();
	private:
		Robot* R;
};

#endif // MATCH_H
