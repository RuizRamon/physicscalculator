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
#include <string>

//Project includes
#include "Book.h"
using namespace std;

namespace Solver
{
	class Calculator
	{
		
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
		
		vector<Book> books;
		
		//Bruno
	public:
		string pdfPath;
		string browserPath;
		void menuprint();
		void choices();
		
		void startup(LPCTSTR lpApplicationName);
		
		//Bruno
		void openBook(int pageNum, bool manual);
		void searchBook(int ch, int pr);
		void displayBooks();
		
		int librarySize();
		int currentBook;
		Book& nowBook();
		string getPage(int page);
		
		Calculator(string path, string browser)
		{
//			cout << "path in calc " << endl;
//			cout << path << endl;
			browserPath = browser;
			pdfPath = path;
			initCalc();
			
			
		}
		~Calculator()
		{
//			for(int i=0; i<books.size(); i++)
//			{
//				delete books.at(i);
//			}
		}
		
		void initCalc();
		
		//Bruno
	};

}
#endif /* main_h */
