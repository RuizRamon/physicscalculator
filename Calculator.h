#ifndef CALC_H
#define CALC_H

#define M_PI 3.14159265358979323846  /* pi */

#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <cstdlib>
#include <math.h>
#include <windows.h>
#include <vector>

//Project includes
#include "Book.h"
using namespace std;

namespace Solver
{
	class Calculator
	{
		string pdfPath;
		int choice;
		int chapter;
		int problem;
		int menu;
		bool exit = false;
		double temp = 0;
		
		double* ans;
		double* var;
		int* t;
		
		//Bruno
		
		vector<Book*> books;
		
		//Bruno
	public:
		
		void menuprint();
		void choices();
		
		void startup(LPCTSTR lpApplicationName);
		
		//Bruno
		void openBook(int pageNum);
		void displayBooks();
		
		int librarySize();
		int currentBook;
		Book* nowBook();
		string getPage(int page);
		
		Calculator(string path)
		{
			path = pdfPath;
			initCalc();
			
			
		}
		~Calculator()
		{
			for(int i=0; i<books.size(); i++)
			{
				delete books.at(i);
			}
		}
		
		void initCalc();
		
		//Bruno
	};

}
#endif /* main_h */
