#include "Problem.h"

namespace Solver
{
	void Problem::initProblem()
	{
		cout << "Solution for Problem 3.1..." << endl << endl;
		cout << "Problem Text:" << endl;
		cout << problemText << endl;
		
		promptVar();
		solve(numProblem);
		displayAns();
		
		//empty vectors for answers and variables
		vars.clear();
		answers.clear();
	}
	
	
//	void Problem::addVarPrompt(string p)
//	{
//		varPrompts.push_back(p);
//	}
//	void Problem::addAnsPrompt(string ap)
//	{
//		answerPrompts.push_back(ap);
//	}
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
	
	void Problem::solve(int num)
	{
		switch(num)
		{
			case 1:
				answers.push_back((vars.at(3) - vars.at(0)) / (vars.at(2) - 0));
				answers.push_back((vars.at(4) - vars.at(1)) / (vars.at(2) - 0));
				answers.push_back(pow(pow(answers.at(0),2) + pow(answers.at(1),2) , 0.5));
				answers.push_back(atan( answers.at(1) / answers.at(0)) * 180.0 / M_PI);
				
				break;
			case 2:
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
	
	void Problem::displayAns()
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
