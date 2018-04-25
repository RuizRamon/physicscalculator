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
			int numProblem;
			int page;
			
			vector<string> varPrompts;
			vector<double> vars;
			
			vector<string> answerPrompts;
			vector<double> answers;
			
			void promptVar();
			void displayAns();
			void initProblem();
			
			void solve(int num);
			
			void addVarPrompt(string p);
			void addAnsPrompt(string ap);
			
			
			Problem(string text)
			{
				this->problemText = text;
//				initProblem();
			}
			Problem(int numProb, string text, int page, vector<string> varPrompts, vector<string> ansPrompts)
			{
				this->problemText = text;
				this->page = page;
				this->varPrompts = varPrompts;
				this->answerPrompts = ansPrompts;
				numProblem = numProb;
//				initProblem();
			}
			Problem()
			{
				
			}
			
			
			~Problem()
			{
				vars.empty();
				answers.empty();
			}
	};
}

#endif
