#include "Chapter.h"
namespace Solver
{
	void Chapter::initChapter()
	{
		//temp variables
		Problem* temp;
		vector<string> vPrompts;
		vector<string> aPrompts;
		
		//Problem 1
		string prob1 = "A squirrel has x- and y-coordinates (___m, ___m) at time t1=0 and coordinates (___m, ___m) at time t2 = ___s.For this time interval, find (a) the components of the average velocity, and (b) the magnitude and direction of the average velocity. ";
		
		//add variable prompts to array
		vPrompts.push_back("Enter t1 x coordinate ___ m: ");
		vPrompts.push_back("Enter t1 y coordinate ___m: ");
		vPrompts.push_back("Enter your t2 = ___s: ");
		vPrompts.push_back("Enter t2 x coordinate ___ m: ");
		vPrompts.push_back("Enter t2 y coordinate ___m: ");
		
		//add answer prompts to array
		aPrompts.push_back("The X-Component of average velocity in m/s: ");
		aPrompts.push_back("The Y-Component of average velocity in m/s: ");
		aPrompts.push_back("The magnitude of average velocity in m/s: ");
		aPrompts.push_back("Direction of average velocity in degrees: ");
		
		//add Problem to chapter
		temp = new Problem(1, prob1, 96, vPrompts, aPrompts);
		addProblem(temp);
		
		//reuse temp variables
		temp = nullptr;
		
		vPrompts.clear();
		aPrompts.clear();
		
		
		//Problem 2
		
		
		delete temp;
	}
	void Chapter::addProblem(Problem* p)
	{
		problems.push_back(p);
	}
	
	Problem* Chapter::getProblem(int n)
	{
		return problems.at(n);
	}
}
