#ifndef MATCH_H
#define MATCH_H

class Robot;

class Match
{
	public:
		Match();
		~Match();
		void runRobot();
	private:
		Robot* R;
};

#endif // MATCH_H
