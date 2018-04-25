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
		/*variables used for calculator menu control*/
		int choice; 
		int chapter;
		int problem;
		int menu;
		bool exit = false;
		double temp = 0;
		
		double* ans;
		double* var;
		int* t;
		
		vector<Book> books; //vector to hold Book objects
		
	public:
		string pdfPath; 						//path to PDFs folder (textbooks)
		string browserPath; 					//path to executable for web browser
		int currentBook; 						//the book # in the books vector the user has chosen
		
		void initCalc(); 						//initialize library of books
		void menuprint(); 						//print the options of the menu
		void choices(); 						//assess menu choice
		void openBook(int pageNum, bool manual);//open page number in either textbook or textbook manual
		void searchBook(int ch, int pr); 		//search and open textbook manual for specific problem #
		void displayBooks(); 					//display the library of books
		
		int librarySize(); 						//return the amount of books in library
		
		Book& nowBook();	 					//return reference to the current book user is studying with
		string getPage(int page); 				//build search query with specified page number
		
		
		/*calls initCalc() which sets up the library of books
		also stores the filepath to the library directory
		and browser*/
		Calculator(string path, string browser)
		{
			browserPath = browser;
			pdfPath = path;
			initCalc();
		}
		~Calculator()
		{

		}
	};

}
#endif /* main_h */
