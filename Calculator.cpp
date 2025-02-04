#include "Calculator.h"
#include "Calculator.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

namespace Solver
{
	
Book& Calculator::nowBook()
{
	return books.at(currentBook); //return current book chosen by user
}
void Calculator::initCalc()
{
	/*Initialize books vector to store our books*/
	Book temp(0);		
	books.push_back(temp); //0=physics
	
	/*Implement more books here*/
}

string Calculator::getPage(int page)
{
	return "#page=" + to_string(page); //return query to search pdf with given page
}
int Calculator::librarySize()
{
	return books.size(); 
}
void Calculator::displayBooks()
{
	/*loop to show the current library*/
	for(int i=0; i< books.size(); i++)
	{
		cout << "Book #: " << i << " " << books.at(i).name << endl;
	}
}

//#search=1
void Calculator::openBook(int pageNum, bool manual)
{
	string link = "file:///" + pdfPath;		//formulate web-link to an internal file
//	cout << "Path given " << pdfPath << endl;

	if(manual) //if manual is true, then open a page in the manual
	{
		link += nowBook().pathManual;
		link += nowBook().pageAppend + to_string(pageNum);
	}
	
	else	//open a page in the textbook
	{
		link+= nowBook().path;
		link+= nowBook().pageAppend + to_string(pageNum);
	}
	
//	cout << link << endl;
//	string firefox = "\"C:\\Program Files\\Mozilla Firefox\\firefox.exe\"";
//	string chrome =  "\"C:\\Program Files(x86)\\Google\\chrome\\application\\chrome.exe\"";
	
	
	string execute = browserPath + " " + link;
	cout << execute << endl;
	system(execute.c_str());
//	ShellExecute(NULL, "open", link.c_str(), NULL, NULL, SW_SHOWNORMAL);
	
	
//	ShellExecute(NULL, "open", execute.c_str(), NULL, NULL, SW_SHOWNORMAL);
	// \"%programfiles%\\Mozilla Firefox\\firefox.exe\"
//	system("\"%programfiles%\\Mozilla Firefox\\firefox.exe\" google.com");
//	ShellExecute(NULL, "\"C:\\Program Files\\Mozilla Firefox\\firefox.exe\"", link.c_str(), NULL, NULL, SW_SHOWNORMAL);
//	ShellExecute(NULL, "\"%programfiles%\\Mozilla Firefox\\firefox.exe\"", link.c_str(), NULL, NULL, SW_SHOWNORMAL);

}

void Calculator::searchBook(int ch, int pr)
{
	string query = to_string(ch) + "." + to_string(pr) + "."; //the period after 3.1. makes the search spot on (unique)
	string link = "file:///" + pdfPath;
	
	link += nowBook().pathManual; //append name of manual.pdf
	link += nowBook().searchAppend + query; //append searchquery
	
//	cout << query << endl;
//	cout << link << endl;
	
	string execute = browserPath + " " + link; //build executable command
	system(execute.c_str()); //execute command and open browser with specified internal PDF
}

//Bruno

void Calculator::menuprint()
{
	system("cls");
	cout << endl << "----------CALCULATOR MENU----------" << endl;
	cout << " 1 - Get solution." << endl;
	cout << " 2 - Find similar." << endl;
	cout << " 3 - Steps." << endl;
	cout << " 4 - Request a solution." << endl;
	cout << " 5 - Exit." << endl;
	cout << endl << "This calculator is programmed for " << nowBook().name << endl;
	cout << endl << "Enter your choice and press enter: ";
}
void Calculator::choices() 
{

	Problem* prob; //temporary problem pointer used to access a book chapter's problem
	string requestSolution;
	ofstream myFile;
	

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
							case 1: /*Using classes to represent problem solving*/
								
								system("cls");
								prob = &nowBook().getChapter(2).getProblem(0);
								prob->initProblem();
								
								break;
							case 2: /*Using classes to represent problem solving*/
								
								system("cls");
								prob = &nowBook().getChapter(2).getProblem(1);
								prob->initProblem();
								
								break;

							case 3:
								
								system("cls");	//CLEAR SCREEN
								cout << "Solution for Problem 3.3..." << endl << endl;
								cout << "Problem Text:" << endl;
								cout << "A web page designer creates an animation in which a" << endl << "dot on a computer screen has a position of r = [___ cm +" << endl << "(___ cm/s^2)t^2] i + (___ cm/s)t j. (a) Find the magnitude and" << endl << "direction of the dot's average velocity between t=0 and" << endl << "t=2.0s. (b) Find the magnitude and direction of the instantaneous" << endl << "velocity at t=0, t=1.0s, and t=2.0s. (c) Sketch the" << "dot's trajectory from t=0 to t=2.0s, and show the" << endl << "velocities calculated part (b)." << endl;

								/*CALCULATION USING INPUTS AND OUTPUT*/
								var = new double[3];
								cout << endl;
								cout << "Enter first r-component ___ cm: ";
								cin >> var[0];

								cout << "Enter second r-component ___cm/s^2: ";
								cin >> var[1];

								cout << "Enter third r-component ___cm/s: ";
								cin >> var[2];

								//r = [4.0 cm +(2.5 cm/s^2)t^2] i + (5.0 cm/s)t j
								//4.0cm			var[0]
								//2.5cm			var[1]
								//5.0cm			var[2]
								t = new int[3];
								t[0] = 0, t[1] = 1, t[2] = 2;
								ans = new double[10];
								cout << endl;
								cout << "(a)" << endl;
								temp = pow((((var[0] + var[1]*t[2]*t[2]) - var[0]) / (t[2]-t[0])), 2) + pow((var[2]*t[2]) / (t[2]-t[0]), 2);
								ans[0] = pow(temp, 0.5);
								temp = (((var[0] + var[1] * t[2] * t[2]) - var[0]) / (t[2] - t[0])) / ((var[2] * t[2]) / (t[2] - t[0]));
								ans[1] = atan((((var[0] + var[1] * t[2] * t[2]) - var[0]) / (t[2] - t[0])) / ((var[2] * t[2]) / (t[2] - t[0]))) * 180 / M_PI;
								cout << "The magnitude of the dots average velocity is " << ans[0] << " cm/s";
								cout << endl;
								cout << "The direction of the dots average velocity is " << ans[1] << " degrees";
								cout << endl;

								//t = 0 magnitude
								temp = pow((2 * var[1] * t[0]), 2) + pow((var[2]), 2);
								temp = pow((temp), .5);
								ans[2] = temp;

								//t = 0 direction
								temp = 90 - atan((2*var[1]*t[0]) / (var[2])) * 180 / M_PI;
								ans[3] = ceil(temp-.5);

								cout << "(b)" << endl;
								cout << "At t=0" << endl;
								cout << "	Magnitude of the instantaneous velocity: " << ans[2] << " cm/s" << endl;
								cout << "	Direction of the instantaneous velocity: " << ans[3] << " degrees"<< endl;

								//t = 1 magnitude
								temp = pow((2 * var[1] * t[1]), 2) + pow((var[2]), 2);
								temp = pow((temp), .5);
								ans[4] = temp;
								
								//t = 1 direction
								temp = 90 - atan((2 * var[1] * t[1]) / (var[2])) * 180 / M_PI;
								ans[5] = ceil(temp-.5);

								cout << "At t=1" << endl;
								cout << "	Magnitude of the instantaneous velocity: " << ans[4] << " cm/s" << endl;
								cout << "	Direction of the instantaneous velocity: " << ans[5] << " degrees" << endl;

								//t = 2 magnitude
								temp = pow((2 * var[1] * t[2]), 2) + pow((var[2]), 2);
								temp = pow((temp), .5);
								ans[6] = temp;

								//t = 2 direction
								temp = 90 - atan((2 * var[1] * t[2]) / (var[2])) * 180 / M_PI;
								ans[7] = ceil(temp-.5);

								cout << "At t=2" << endl;
								cout << "	Magnitude of the instantaneous velocity: " << ans[6] << " cm/s" << endl;
								cout << "	Direction of the instantaneous velocity: " << ans[7] << " degrees" << endl;

								cout << "(c)" << endl;
								cout << "Points on graph are: " << "(" << var[0] + var[1] * t[0] * t[0] << "," << var[2] * t[0] << ")" << " , " << "(" << var[0] + var[1] * t[1] * t[1] << "," << var[2] * t[1] << ")" << " , " << "(" << var[0] + var[1] * t[2] * t[2] << "," << var[2] * t[2] << ")" << endl;
								cout << "To view trajectory and velocities, please use the steps option for this question." << endl;
								delete[] var;
								delete[] ans;
								delete[] t;
								temp = 0;
								break;
							case 4:
								system("cls");
								cout << "Solution for Problem 3.4..." << endl << endl;
								cout << "Problem Text:" << endl;
								cout << "The position of a squirrel running in a park is given" << endl << "by r = [(___ m/s)t + (___ m/s^2)t^2] i + (___ m/s^3)t^3 j." << endl << "(a) What are Vx(t) and Vy(t), the x- and y-components of the" << endl << "velocity of the squirrel, as functions of time? (b) at t = ___ s," << endl << "how far is the squirrel from its initial position? (c) At t = ___ s," << endl <<"what are the magnitude and direction of the squirrel's velocity?" << endl;
								
								/*CALCULATION USING INPUTS AND OUTPUT*/
								// var [0] = 0.28 , var[1] = 0.036, var[2] = 0.019, var[3] = 5
								var = new double[5];
								cout << endl;
								cout << "Enter first r-component ___ m/s: ";
								cin >> var[0];

								cout << "Enter second r-component ___ m/s^2: ";
								cin >> var[1];

								cout << "Enter third r-component ___ m/s^3: ";
								cin >> var[2];
								
								cout << "For part (b) and (c) enter t = ___ s: ";
								cin >> var[3];
								//Answers
								ans = new double[10];
								cout << endl;
								cout << "(a)" << endl;
								cout << "Vx(t) =  " << var[0] << " m/s + (" << 2*var[1] << " m/s^2)t" << endl;
								cout << "Vy(t) =  (" << 3*var[2] << " m/s^3)t^2" << endl;

								cout << "(b)" << endl;
								ans[0] = (var[0] * var[3]) + (var[1] * var[3]*var[3]);
								ans[1] = (var[2] * var[3] * var[3] * var[3]);
								temp = pow(ans[0], 2) + pow(ans[1],2);
								temp = pow(temp, 0.5);
								ans[2] = temp;
								cout << "The squirrel is " << ans[2] << " m away from its initial position" << endl;

								ans[3] = var[0] + 2 * var[1] * var[3];
								ans[4] = 3 * var[2] * var[3] * var[3];
								temp = pow(ans[3], 2) + pow(ans[4], 2);
								ans[5] = pow(temp, 0.5);
								cout << "The magnitude of the squirrels velocity is: " << ans[5] << " m/s" << endl;
								ans[6] = atan(ans[4] / ans[3]) * 180 / M_PI;
								cout << "The direction of the squirrels velocity is: " << ans[6] << " degrees" << endl;
								delete[] var;
								delete[] ans;
								temp = 0;
								break;
							}
						}

					break;
		case 2:	//IF USER CHOOSES TO FIND SIMILAR
			system("cls");
					cout << "This option is to see what earlier edition chapter problems are the same as the problem you select." << endl;
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
						case 1: //SIMILIAR PROBLEMS TO 3.1
							cout << "Problem 1 in chapter 3 of the 13th edition is the same as problem 1 in chapter 3 of the 12th edition." << endl;
							cout << "Notable Variable Changes:" << " NONE" << endl;
							break;
						case 2: //SIMILIAR PROBLEMS TO 3.2
							cout << "Problem 2 in chapter 3 of the 13th edition is the same as problem 2 in chapter 3 of the 12th edition." << endl;
							cout << "Notable Variable Changes:" << " NONE" << endl;
							break;
						case 3: //SIMILIAR PROBLEMS TO 3.3
							cout << "Problem 3 in chapter 3 of the 13th edition is the same as problem 3 in chapter 3 of the 12th edition." << endl;
							cout << "Notable Variable Changes:" << " NONE" << endl;
							break;
						case 4: //SIMILIAR PROBLEMS TO 3.4
							cout << "Problem 4 in chapter 3 of the 13th edition is not found in the 12th edition." << endl;
							break;
						}
					}

					// rest of code
					break;
		case 3:	//IF USER CHOOSES TO VIEW STEPS
			system("cls");
			cout << "This option is to see what earlier edition chapter problems are the same as the problem you select." << endl;
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
					searchBook(3, 1);
					break;
				case 2:
					searchBook(3, 2);
					break;
				case 3:
					searchBook(3, 3);
					break;
				case 4:
					searchBook(3, 4);
					break;
				}
			}
			break;
		case 4: //REQUEST A SOLUTION AND PRINTS TO TEXT FILE
			system("cls");
			cin.ignore(); //MUST BE USED FOR GETLINE TO NOT GO DIRECTLY TO BREAK
			myFile.open("requestSolution.txt", ios::out | ios::app); // OUT WRITES TO THE FILE AND APP APPENDS
			cout << "Please type your question below: ";
			getline(cin, requestSolution);
			myFile << endl;
			myFile << requestSolution;//WRITES TO TEXT FILE
			myFile.close(); //MAKE SURE THE FILE IS CLOSED FOR WRITING
			break;
		case 5:	//CLOSE THE PROGRAM
			cout << endl << "Are you sure you want to exit?" << endl;
			break;	
		default: //IF USER DOESNT ENTER A VALID OPTION IT WILL CONTINUE TO LOOP TO THE MENU SCREEN, SKIPPING THE FIRST MENU OPTION OF 0 OR 4
		{
			menuprint();
			choices();
			//break;
		}
		
		delete prob;
	}
}
}
