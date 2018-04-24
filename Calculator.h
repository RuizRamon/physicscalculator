#pragma once
#ifndef MAIN_HEADER_H
#define MAIN_HEADER_H
#include <windows.h>
//
//#include <iostream>
//#include <cstdlib>
//#include <math.h>
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
		double temp;
		
	public:
		void menuprint();
		void choices();
		void openPDF(string path, bool book);
		void startup(LPCTSTR lpApplicationName);
		
	};

}
#endif /* main_h */
