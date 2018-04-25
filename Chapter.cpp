#include "Chapter.h"
namespace Solver
{
	void Chapter::initChapter()
	{
		//temp variables
		Problem* temp2;
		string problemText="";
		vector<string> vPrompts;
		vector<string> aPrompts;
		
		//Problem 1
		problemText = "A squirrel has x- and y-coordinates (___m, ___m) at time t1=0 and coordinates (___m, ___m) at time t2 = ___s.For this time interval, find (a) the components of the average velocity, and (b) the magnitude and direction of the average velocity. ";
		
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
//		Problem temp = Problem(1, problemText, 96, vPrompts, aPrompts);
		temp2 = new Problem(1, problemText, 96, vPrompts, aPrompts);
		addProblem(*temp2);
		
		//reuse temp variables
		delete temp2;
		vPrompts.clear();
		aPrompts.clear();
		problemText = "";
		
		
		//Problem 2
		problemText = "A rhinoceros is at the origin of coordinates at time t1=0. For the time interval from t1=0 to t2=___s, the rhino's average velocity has x-component ___ m/s and y-component ___ m/s. At time t2 = ___s, (a) what are the x- and y-coordinates of the rhino? (b) How far is the rhino from the origin? ";
		
		vPrompts.push_back("Enter t2 = ___ s: ");
		vPrompts.push_back("Enter x-component ___m/s: ");
		vPrompts.push_back("Enter y-component ___m/s: ");
		
		aPrompts.push_back("The X-Coordinate in m: ");
		aPrompts.push_back("The Y-Coordinate in m: ");
		aPrompts.push_back("The rhino's distance away from the origin in m: ");
		
		temp2 = new Problem(2, problemText, 96, vPrompts, aPrompts);
		addProblem(*temp2);
		
		//reuse temp variables
		delete temp2;
		vPrompts.clear();
		aPrompts.clear();
		problemText = "";
		
	}
	void Chapter::addProblem(Problem& p)
	{
		problems.push_back(p);
	}
	
	Problem& Chapter::getProblem(int n)
	{
		return problems.at(n);
	}
}
