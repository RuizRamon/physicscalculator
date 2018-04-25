#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <unordered_map>


#include "Calculator.h"

using namespace std;

using namespace Solver;

int choice, bookNum;
int chapter;
int problem;
int menu;


/*Output Homework Helper logo to console*/
void showLogo()
{
	cout <<"     +  +                        +           +  +  " << endl;
	cout <<"     |  |         +---------------+          |  |  " << endl;
	cout <<"     |  |         |----------------+         |  |" << endl;
	cout <<"     +  +         +---------------+          +  +" << endl;
	cout <<"                                 +      +            +" << endl;
	cout <<"+------------+                          +------------+" << endl;
	cout << endl;
	cout <<"    +---+ " << endl;
	cout <<"    +   |                                          +-+" << endl;
	cout <<"        |                                        +-+" << endl;
	cout <<"      +-+                                      +--+" << endl;
	cout <<"      |                                 +     ++" << endl;
	cout <<"      |                                 +-  ++" << endl;
	cout <<"     +-+                                ---+" << endl;
	cout <<"     +-+" << endl;

}


int main()
{

// file:///C:/Users/admin/Documents/GitHub/physicscalculator/files/solnphysics.pdf
	bool exit(false), bookChoice(false);
	string path;
	string browser;
	
	/*prompt for file path*/
	cout << "Enter file path to program directory folder with trailing slash" << endl;
	cout << "Example: C:/Users/admin/Documents/GitHub/physicscalculator/" << endl;
	
	getline(cin, path);
	
	cout << "Read: \n> " << path << endl << endl;
	
	/*prompt for browser path*/
	int browserchoice = 0;
	cout << "Which one is your browser path? Choose a number:" << endl;
	cout << "1: C:\\Program Files\\Mozilla Firefox\\firefox.exe" << endl;
	cout << "2: C:\\Program Files (x86)\\Mozilla Firefox\\firefox.exe" << endl;
	cout << "3: C:\\Program Files\\Google\\chrome\\application\\chrome.exe" << endl;
	cout << "4: C:\\Program Files (x86)\\Google\\chrome\\application\\chrome.exe" << endl;
	cout << "5: I want to enter my own browser path (use quotes)" << endl;
	
	cin >> browserchoice;
	
	/*Selects browser path*/
	switch(browserchoice)
	{
		case 1:
			browser = "\"C:\\Program Files\\Mozilla Firefox\\firefox.exe\"";
			break;
		case 2:
			browser = "\"C:\\Program Files (x86)\\Mozilla Firefox\\firefox.exe\"";
			break;
		case 3:
			browser = "\"C:\\Program Files\\Google\\chrome\\application\\chrome.exe\"";
			break;
		case 4:
			browser = "\"C:\\Program Files (x86)\\Google\\chrome\\application\\chrome.exe\"";
			break;
		case 5:
			getline(cin, browser);
			cout << "Read: \n> " << browser << endl << endl;
			break;
		default:
			break;
	}
	
	
	/*Instantiates a new calculator, 
	and stores directory and browser path in two strings*/
	Calculator calcmenu(path, browser);
	
	cout << "Homework Helper v0.0.1" << endl;
	showLogo();
	system("pause");
	system("cls");
		
		
	/*prompt for book choice, keep in loop if invalid choice*/
	bookNum = -1;
	while(!bookChoice)
	{
		cout << "Pick a book to study:" << endl;
		calcmenu.displayBooks();

		cin >> bookNum;
		
		if(bookNum >= calcmenu.librarySize() || bookNum < 0)
		{
			cout << "Invalid choice" << endl;
		}
		else
		{
			bookChoice = true;
			calcmenu.currentBook = bookNum;
		}
		
	}
	

	//IF USER NEVER EXITED, RUN THROUGH PROGRAM
	while (exit != true)
	{
		cout << endl << "Press 0 to Open Menu" << endl;
		cout << "Press 5 to Exit" << endl;
		cout << "Your Choice: ";
		cin >> menu;
		if (menu == 0) //IF USER DECIDES TO OPEN MENU
		{	
			calcmenu.menuprint();	//PRINT THE MENU
			calcmenu.choices();
		}
		else if (menu == 5) // TO EXIT FROM FIRST SCREEN WITH OPTION FOR MENU OR EXIT
		{
			exit = true;
		}
	}
	return 0;
}
