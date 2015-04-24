#include <iostream>
#include "match.h"
#include "robot.h"
#include "view.h"

using namespace std;

int main()
{
	Robot R;
	View V(&R);
	Match M(&R);
	M.runRobot();

	return 0;
}
