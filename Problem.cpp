#include "Problem.h"

namespace Solver
{
	void Problem::initProblem()
	{
		cout << "Solution for Problem 3.1..." << endl << endl;
		cout << "Problem Text:" << endl;
		cout << problemText << endl;	//display problem statement
		
		promptVar();					//prompt the user for the variables needed to solve the problem
		solve(numProblem);				//solve the problem specified by the object
		displayAns();					//display the answers stored in the answer vector
		
		//empty vectors for answers and variables
		vars.clear();
		answers.clear();
	}
	
	void Problem::promptVar()
	{
		double temp=0.0;
		/*loop for receiving variable input from the user*/
		for(int i=0; i<varPrompts.size(); i++)
		{
			cout << varPrompts.at(i) << endl;
			cin >> temp;
			vars.push_back(temp);
		}

	}
	
	void Problem::solve(int num)
	{
		/*
		
		hardcoded to solve only chapter 3 for the moment,
		but here should be another logic block
		to specify what book are we currently using and
		what chapter we are in.
		
		a database would have been better.........
		
		*/
		switch(num)
		{
			case 1: //for problem one, these are the equations used to calculate answers, then these are stored in the vector
				answers.push_back((vars.at(3) - vars.at(0)) / (vars.at(2) - 0));
				answers.push_back((vars.at(4) - vars.at(1)) / (vars.at(2) - 0));
				answers.push_back(pow(pow(answers.at(0),2) + pow(answers.at(1),2) , 0.5));
				answers.push_back(atan( answers.at(1) / answers.at(0)) * 180.0 / M_PI);
				
				break;
			case 2: //equations used to solve the problem, stored in the answers vector
				answers.push_back( vars.at(1) * vars.at(0) );
				answers.push_back( vars.at(2) * vars.at(0) );
				answers.push_back( pow(pow(answers.at(0), 2) + pow(answers.at(1), 2), 0.5) );
				
				break;
			case 3:
				break;
			default:
				break;
		}
		
	}
	
	void Problem::displayAns() //displays the answer to each deliverable such as part A) part b) in an exercise
	{
//		cout << "In display" << endl;
//		cout << "answerPrompts size : " << answerPrompts.size() << endl;
//		cout << "ans size: " << answers.size() << endl;
//		cout << "vars size: " << vars.size() << endl;
		for(int i=0; i<answers.size(); i++)
		{
			cout << answerPrompts.at(i) << answers.at(i) << endl;
		}
	}
}
