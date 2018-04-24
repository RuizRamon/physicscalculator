#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <unordered_map>
#include "Calculator.h"

using namespace std;

using namespace Solver;

int choice;
int chapter;
int problem;
int menu;

int main()
{
//	unordered_map<string key, string value> t = {
//	
//	};
	bool exit = false;
	Calculator calcmenu;
	calcmenu.openPDF("", 0);
//	calcmenu.startup("notepad.exe");
	//IF USER NEVER EXITED, RUN THROUGH PROGRAM
	while (exit != true)
	{
		cout << endl << "Press 0 to Open Menu" << endl;
		cout << "Press 4 to Exit" << endl;
		cout << "Your Choice: ";
		cin >> menu;
		if (menu == 0) //IF USER DECIDES TO OPEN MENU
		{	
			calcmenu.menuprint();	//PRINT THE MENU
			calcmenu.choices();
		}
		else if (menu == 4) // TO EXIT FROM FIRST SCREEN WITH OPTION FOR MENU OR EXIT
		{
			exit = true;
		}
	}
	return 0;
}
