#ifndef CHAPTER_H
#define CHAPTER_H
#include "Problem.h"

using namespace std;
namespace Solver
{
	class Chapter 
	{
		public:
			vector<Problem*> problems;
			int numProbs;
			
			Problem* getProblem(int n);
			void addProblem(Problem* p);
			void initChapter();
			
			Chapter(int num)
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
