#include "Problem.h"

namespace Solver
{
	void Problem::initProblem()
	{
		varPrompts.push_back("Enter t1 x coordinate ___ m: ");
		varPrompts.push_back("Enter t1 y coordinate ___m: ");
		varPrompts.push_back("Enter your t2 = ___s: ");
		varPrompts.push_back("Enter t2 x coordinate ___ m: ");
		varPrompts.push_back("Enter t2 y coordinate ___m: ");
		
		answerPrompts.push_back("The X-Component of average velocity in m/s: ");
		answerPrompts.push_back("The Y-Component of average velocity in m/s: ");
		answerPrompts.push_back("The magnitude of average velocity in m/s: ");
		answerPrompts.push_back("Direction of average velocity in degrees: ");
	}
	void Problem::promptVar()
	{
		
		double temp=0.0;
		for(int i=0; i<varPrompts.size(); i++)
		{
			cout << varPrompts.at(i) << endl;
			cin >> temp;
			vars.push_back(temp);
		}

	}
	
	void Problem::solve()
	{
		answers.push_back((vars.at(3) - vars.at(0)) / (vars.at(2) - 0));
		answers.push_back((vars.at(4) - vars.at(1)) / (vars.at(2) - 0));
		answers.push_back(pow(pow(answers.at(0),2) + pow(answers.at(1),2) , 0.5));
		answers.push_back(atan( answers.at(1) / answers.at(0)) * 180.0 / M_PI);
	}
	
	void Problem::displayAns()
	{
		for(int i=0; i<answers.size(); i++)
		{
			cout << answerPrompts.at(i) << answers.at(0) << endl;
		}
	}
}
