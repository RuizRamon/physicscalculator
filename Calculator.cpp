#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <cstdlib>
#include <math.h>
#include <windows.h>
#include "Calculator.h"
#define M_PI 3.14159265358979323846  /* pi */
using namespace std;

namespace Solver
{

//void Calculator::startup(LPCTSTR lpApplicationName)
//{
//   // additional information
//   STARTUPINFO si;     
//   PROCESS_INFORMATION pi;
//
//   // set the size of the structures
//   ZeroMemory( &si, sizeof(si) );
//   si.cb = sizeof(si);
//   ZeroMemory( &pi, sizeof(pi) );
//
//  // start the program up
//  CreateProcess( lpApplicationName,   // the path
//    "",        // Command line
//    NULL,           // Process handle not inheritable
//    NULL,           // Thread handle not inheritable
//    FALSE,          // Set handle inheritance to FALSE
//    0,              // No creation flags
//    NULL,           // Use parent's environment block
//    NULL,           // Use parent's starting directory 
//    &si,            // Pointer to STARTUPINFO structure
//    &pi             // Pointer to PROCESS_INFORMATION structure (removed extra parentheses)
//    );
//    // Close process and thread handles. 
//    CloseHandle( pi.hProcess );
//    CloseHandle( pi.hThread );
//}

void Calculator::openPDF(string path)
{
	const char text_filename[] = "files\\solnphysics.pdf";
//	const char text_application[] = "firefox.exe";
	const char* text_application = " \"C:\\Program Files\\Mozilla Firefox\\firefox.exe\" ";
	
	std::string system_str;
	system_str = text_application;
	system_str += " ";
	system_str += text_filename;
	
	// Execute the application
	system(system_str.c_str());
}
void Calculator::menuprint()
{
	system("cls");
	cout << endl << "----------CALCULATOR MENU----------" << endl;
	cout << " 1 - Get solution." << endl;
	cout << " 2 - Find similar." << endl;
	cout << " 3 - Steps." << endl;
	cout << " 4 - Exit." << endl;
	cout << endl << "This calculator is programed for 'University Physics N Edition' " << endl;
	cout << endl << "Enter your choice and press enter: ";
}
void Calculator::choices() 
{
	cin >> choice;
	switch (choice)
	{
			case 1: //IF USER CHOOSES TO GET SOLUTION
				cout << "Enter the chapter number and press enter: ";
				cin >> chapter;
				switch (chapter)
				{
				case 1:	//IF USER CHOOSES CHAPTER 1
					cout << "Sorry we currently don't have chapter 1 solutions." << endl;
					break;
				case 2:	//IF USER CHOOSES CHAPTER 2
					cout << "Sorry we currently don't have chapter 2 solutions." << endl;
					break;
				case 3:	//IF USER CHOOSES CHAPTER 3
					cout << "Enter the problem number and press enter: ";
					cin >> problem;
					cout << endl;
					switch (problem)	//OPTIONS FOR PROBLEMS WITHIN CHAPTER 3
					{
					case 1:
						system("cls");	//CLEAR SCREEN
						cout << "Solution for Problem 3.1..." << endl << endl;
						cout << "Problem Text:" << endl;
						cout << "A squirrel has x- and y-coordinates (___m, ___m) at time t1=0 and coordinates (___m, ___m) at" << endl << "time t2 = ___s.For this time interval, find (a) the components of the average velocity, and (b) the" << endl << "magnitude and direction of the average velocity. " << endl;

						/*SAMPLE CALCULATION USING INPUTS AND OUTPUT*/
						double var[5];  //FIX ME.......... CREATE ARRAY EARLIER IN CODE AND CLEAR IT WHEN DONE WITH PROBLEMS	
						cout << "Enter t1 x coordinate ___ m: ";
						cin >> var[0];

						cout << "Enter t1 y coordinate ___m: ";
						cin >> var[1];

						cout << "Enter your t2 = ___s: ";
						cin >> var[2];

						cout << "Enter t2 x coordinate ___ m: ";
						cin >> var[3];

						cout << "Enter t2 y coordinate ___m: ";
						cin >> var[4];

						//At t1=0 (X1,Y1)
						//At t2=3 (X2,Y2)
						//X2-X1/3-0
						double ans[5];
						cout << endl;
						cout << "(a)" << endl;
						ans[0] = (var[3] - var[0]) / (var[2] - 0);
						cout << "The X-Component of average velocity is " << ans[0] << " m/s";
						cout << endl;

						ans[1] = (var[4] - var[1]) / (var[2] - 0);
						cout << "The Y-Component of average velocity is " << ans[1] << " m/s";

						temp = pow(ans[0], 2) + pow(ans[1],2);
						ans[2] = pow(temp, 0.5);
						cout << endl;
						cout << "(b)" << endl;
						cout << "The magnitude of average velocity is " << ans[2] << " m/s";

						ans[3] = atan(ans[1] / ans[0]) * 180 / M_PI;
						cout << endl;
						cout << "Direction of average velocity is "<< ans[3]<< " degrees"<< endl;
						break;
					case 2:
						system("cls");
						cout << "Solution for Problem 3.2..." << endl;
						break;
					case 3:
						system("cls");
						cout << "Solution for Problem 3.3..." << endl;
						break;
					case 4:
						system("cls");
						cout << "Solution for Problem 3.4..." << endl;
						break;
					}
				}

			break;
		case 2:	//IF USER CHOOSES TO FIND SIMILAR
			system("cls");
			cout << "Enter a 3rd edition problem to see what earlier editions are the same..." << endl;
			// rest of code
			break;
		case 3:	//IF USER CHOOSES TO VIEW STEPS
			system("cls");
			cout << "Enter a problem you want the steps for" << endl;
			// rest of code
			break;
		case 4:	//CLOSE THE PROGRAM
			cout << endl << "Are you sure you want to exit?" << endl;
			break;	
		default: //IF USER DOESNT ENTER A VALID OPTION IT WILL CONTINUE TO LOOP TO THE MENU SCREEN, SKIPPING THE FIRST MENU OPTION OF 0 OR 4
		{
			menuprint();
			choices();
			//break;
		}
	}
}
}
