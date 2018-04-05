#include <iostream>
#include <fstream>
#include <stdlib.h>
#include "Calculator.h"

using namespace std;

using namespace MAIN_HEADER;

int main()
{
	int choice;
	int chapter;
	int problem;
	int menu;
	bool exit = false;

	//IF USER NEVER EXITED, RUN THROUGH PROGRAM
	while (exit != true)
	{
		cout << endl << "Press 0 to Open Menu" << endl;
		cout << "Press 4 to Exit" << endl;
		cout << "Your Choice: ";
		cin >> menu;
		if (menu == 0) //IF USER DECIDES TO OPEN MENU
		{	
			Calculator calcmenu;
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