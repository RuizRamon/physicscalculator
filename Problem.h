#ifndef PROBLEM_H
#define PROBLEM_H
#include <string>
#include <vector>
#include <iostream>
#include <cmath>

#define M_PI 3.14159265358979323846

using namespace std;
namespace Solver
{
	class Problem
	{
		
	//	vector<string> prompts;
		public:
			string problemText;
			
			vector<string> varPrompts;
			vector<double> vars;
			vector<string> answerPrompts;
			vector<double> answers;
			
			void promptVar();
			void displayAns();
			void initProblem();
			void solve();
			
			Problem(string text)
			{
				this->problemText = text;
				initProblem();
			}
			~Problem()
			{
				
			}
	};
}

#endif
