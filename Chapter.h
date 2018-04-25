#ifndef CHAPTER_H
#define CHAPTER_H
#include "Problem.h"

using namespace std;
namespace Solver
{
	class Chapter 
	{
		public:
			vector<Problem> problems;	//stores problems in a chapter
			int numProbs;				//how many problems does this chapter need to have?
			
			void addProblem(Problem& p);//add problem to vector
			void initChapter();			//build chapter, add problems to vector
			
			Problem& getProblem(int n); //returns reference to problem of interest
			
			Chapter(int num)			//bring in the required number of problems
			{
				this->numProbs = num;
				initChapter();
			}
			~Chapter()
			{
				
			}
	};
}
#endif
