#include "Chapter.h"
namespace Solver
{
	void Chapter::initChapter()
	{
		string prob1 = "A squirrel has x- and y-coordinates (___m, ___m) at time t1=0 and coordinates (___m, ___m) at time t2 = ___s.For this time interval, find (a) the components of the average velocity, and (b) the magnitude and direction of the average velocity. ";
		addProblem(prob1);
	}
	void Chapter::addProblem(string text)
	{
		problems.push_back(new Problem(text));
	}
	
	Problem* Chapter::getProblem(int n)
	{
		return problems.at(n);
	}
}
