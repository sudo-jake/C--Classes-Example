#include <iostream>
#include <string>
#include "Robots.h"

using namespace std;

void main()
{
	// Create a robot
	// You are creating an object
	// An instance of a robot class

	Robots robot1;
	robot1.name = "C3P0";
	robot1.SetNumberOfArms(2);
	robot1.Setheight(6);

	Robots robot2;
	robot2.name = "R2D2";
	robot2.SetNumberOfArms(3);
	robot2.Setheight(4);

	cout << "I have created a new robot whose name is " << robot1.name << ". This robot has " << robot1.getNumberOfArms() << " arms. " << robot1.name << " height is " << robot1.getheight() << " feet tall." << endl;
	cout << "I have created a new robot whose name is " << robot2.name << ". This robot has " << robot2.getNumberOfArms() << " arms. " << robot2.name << " height is " << robot2.getheight() << " feet tall." << endl;

	system("pause");
}