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
		public:
			string problemText;			//wording of the problem
			int numProblem;				//number of problem with respect to the chapter
			int page;
			
			vector<string> varPrompts;	//stores prompts that will be used to receive input from user
			vector<double> vars;		//stores variables received from input by user
			
			vector<string> answerPrompts;	//stores text used to provide answers
			vector<double> answers;			//stores the answers for the problem
			
			void promptVar();				//receive input from the user for storing variables
			void displayAns();				//display answer(s) to problem
			void initProblem();				//begin to solve the problem, walk the user through required inputs
			void solve(int num);			//what number of problem to solve?
			
			void addVarPrompt(string p);	//add a variable prompt that will be shown the user
			void addAnsPrompt(string ap);	//add an answer text sentence to represent answer, includes m/s, degrees, etc
			
			/*Construct problem out of its actual textbook number,
			The problem text,
			The page number in the textbook,
			including the variable prompts to the user,
			and the answer prompts to the user (how answers are displayed)
			*/
			Problem(int numProb, string text, int page, vector<string> varPrompts, vector<string> ansPrompts)
			{
				this->problemText = text;
				this->page = page;
				this->varPrompts = varPrompts;
				this->answerPrompts = ansPrompts;
				numProblem = numProb;
			}
			
			~Problem()
			{
				vars.empty();
				answers.empty();
			}
	};
}

#endif
