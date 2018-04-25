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
	
	cout << "Enter file path to program directory folder with trailing slash" << endl;
	cout << "Example: C:/Users/admin/Documents/GitHub/physicscalculator/" << endl;
	
	cin >> path;
	
	
	Calculator calcmenu(path);
	
	//bruno
	cout << "Homework Helper v0.0.1" << endl;
	showLogo();
	system("pause");
	system("cls");
		
		
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
	
	
	//bruno

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
